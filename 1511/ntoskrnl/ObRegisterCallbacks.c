/*
 * XREFs of ObRegisterCallbacks @ 0x14054433C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300 (MmVerifyCallbackFunctionCheckFlags.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpInsertCallbackByAltitude @ 0x14054461C (ObpInsertCallbackByAltitude.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v3; // ebx
  NTSTATUS inserted; // esi
  USHORT OperationRegistrationCount; // ax
  unsigned int v8; // ebp
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v10; // rdi
  unsigned int Length; // edx
  char *v12; // rcx
  unsigned int v13; // ebp
  OB_OPERATION_REGISTRATION *v14; // rsi
  unsigned __int64 PreOperation; // rcx
  unsigned __int64 PostOperation; // rcx
  unsigned __int64 v17; // rdx
  unsigned int i; // r12d
  unsigned __int16 *v19; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rcx
  unsigned __int16 **v25; // rax
  __int64 *v26; // r14
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // rtt
  __int64 v30; // rax

  v3 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !OperationRegistrationCount )
    return -1073741811;
  v8 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v8, 0x6C46624Fu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, v8);
  *v10 = 256;
  *((_QWORD *)v10 + 1) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  v10[9] = Length;
  v10[8] = Length;
  v12 = (char *)v10 + v8 - Length;
  *((_QWORD *)v10 + 3) = v12;
  memmove(v12, CallbackRegistration->Altitude.Buffer, Length);
  v13 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v14 = &CallbackRegistration->OperationRegistration[v13];
      if ( !v14->Operations || ((*v14->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
        break;
      PreOperation = (unsigned __int64)v14->PreOperation;
      if ( PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
          goto LABEL_18;
      }
      else if ( !v14->PostOperation )
      {
        break;
      }
      PostOperation = (unsigned __int64)v14->PostOperation;
      if ( PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
      {
LABEL_18:
        inserted = -1073741790;
        goto LABEL_21;
      }
      v17 = (unsigned __int64)&v10[32 * (unsigned __int64)v13 + 16];
      *(_QWORD *)(v17 + 8) = v17;
      *(_QWORD *)v17 = v17;
      *(_QWORD *)(v17 + 56) = 0LL;
      *(_DWORD *)(v17 + 16) = v14->Operations;
      *(_QWORD *)(v17 + 24) = v10;
      *(_QWORD *)(v17 + 32) = *v14->ObjectType;
      *(_QWORD *)(v17 + 40) = v14->PreOperation;
      *(_QWORD *)(v17 + 48) = v14->PostOperation;
      inserted = ObpInsertCallbackByAltitude();
      if ( inserted < 0 )
        goto LABEL_21;
      ++v10[1];
      if ( ++v13 >= CallbackRegistration->OperationRegistrationCount )
        goto LABEL_20;
    }
    inserted = -1073741811;
LABEL_20:
    if ( inserted >= 0 )
      goto LABEL_36;
LABEL_21:
    for ( i = 0; i < v10[1]; ++i )
    {
      v19 = &v10[32 * (unsigned __int64)i + 16];
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v21 = (unsigned __int64 *)(*((_QWORD *)v19 + 4) + 184LL);
      v22 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, v22, (ULONG_PTR)v21);
      if ( v23 )
        *(_BYTE *)(v23 + 26) |= 1u;
      v24 = *(_QWORD *)v19;
      v25 = (unsigned __int16 **)*((_QWORD *)v19 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v19 + 8LL) != v19 || *v25 != v19 )
        __fastfail(3u);
      *v25 = (unsigned __int16 *)v24;
      *(_QWORD *)(v24 + 8) = v25;
      v26 = (__int64 *)(*((_QWORD *)v19 + 4) + 184LL);
      _m_prefetchw(v26);
      v27 = *v26;
      v28 = *v26 - 16;
      if ( (*v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v28 = 0LL;
      if ( (v27 & 2) != 0 || (v29 = *v26, v29 != _InterlockedCompareExchange64(v26, v28, v27)) )
        ExfReleasePushLock(v26);
      KeAbPostRelease((ULONG_PTR)v26);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExFreePoolWithTag(v10, 0x6C46624Fu);
  }
  else
  {
LABEL_36:
    if ( v10[1] )
    {
      do
      {
        v30 = v3++;
        *(_DWORD *)&v10[32 * v30 + 26] |= 1u;
      }
      while ( v3 < v10[1] );
    }
    *RegistrationHandle = v10;
  }
  return inserted;
}
