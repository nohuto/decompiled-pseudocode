/*
 * XREFs of ObRegisterCallbacks @ 0x140579658
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401485B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpInsertCallbackByAltitude @ 0x140579820 (ObpInsertCallbackByAltitude.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v3; // ebx
  NTSTATUS inserted; // esi
  USHORT OperationRegistrationCount; // ax
  unsigned int v7; // ebp
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v9; // rdi
  unsigned int Length; // edx
  char *v11; // rcx
  unsigned int v12; // ebp
  OB_OPERATION_REGISTRATION *v13; // rsi
  unsigned __int64 PreOperation; // rcx
  unsigned __int64 PostOperation; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int i; // r12d
  unsigned __int16 *v20; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v22; // r15
  _BYTE *v23; // rax
  _BYTE *v24; // rbp
  __int64 v25; // rcx
  unsigned __int16 **v26; // rax
  __int64 *v27; // r14
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  __int64 v30; // rtt

  v3 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !OperationRegistrationCount )
    return -1073741811;
  v7 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C46624Fu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, v7);
  *v9 = 256;
  *((_QWORD *)v9 + 1) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  v9[9] = Length;
  v9[8] = Length;
  v11 = (char *)v9 + v7 - Length;
  *((_QWORD *)v9 + 3) = v11;
  memmove(v11, CallbackRegistration->Altitude.Buffer, Length);
  v12 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v13 = &CallbackRegistration->OperationRegistration[v12];
      if ( !v13->Operations || ((*v13->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
        break;
      PreOperation = (unsigned __int64)v13->PreOperation;
      if ( PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
          goto LABEL_22;
      }
      else if ( !v13->PostOperation )
      {
        break;
      }
      PostOperation = (unsigned __int64)v13->PostOperation;
      if ( PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
      {
LABEL_22:
        inserted = -1073741790;
        goto LABEL_23;
      }
      v16 = (unsigned __int64)&v9[32 * (unsigned __int64)v12 + 16];
      *(_QWORD *)(v16 + 8) = v16;
      *(_QWORD *)v16 = v16;
      *(_QWORD *)(v16 + 56) = 0LL;
      *(_DWORD *)(v16 + 16) = v13->Operations;
      *(_QWORD *)(v16 + 24) = v9;
      *(_QWORD *)(v16 + 32) = *v13->ObjectType;
      *(_QWORD *)(v16 + 40) = v13->PreOperation;
      *(_QWORD *)(v16 + 48) = v13->PostOperation;
      inserted = ObpInsertCallbackByAltitude();
      if ( inserted < 0 )
        goto LABEL_23;
      ++v9[1];
      if ( ++v12 >= CallbackRegistration->OperationRegistrationCount )
        goto LABEL_12;
    }
    inserted = -1073741811;
LABEL_12:
    if ( inserted >= 0 )
      goto LABEL_13;
LABEL_23:
    for ( i = 0; i < v9[1]; ++i )
    {
      v20 = &v9[32 * (unsigned __int64)i + 16];
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v22 = (unsigned __int64 *)(*((_QWORD *)v20 + 4) + 184LL);
      v23 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v22, 0LL, 0);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
        ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22);
      if ( v24 )
        v24[26] |= 1u;
      v25 = *(_QWORD *)v20;
      v26 = (unsigned __int16 **)*((_QWORD *)v20 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v20 + 8LL) != v20 || *v26 != v20 )
        __fastfail(3u);
      *v26 = (unsigned __int16 *)v25;
      *(_QWORD *)(v25 + 8) = v26;
      v27 = (__int64 *)(*((_QWORD *)v20 + 4) + 184LL);
      _m_prefetchw(v27);
      v28 = *v27;
      v29 = *v27 - 16;
      if ( (*v27 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v29 = 0LL;
      if ( (v28 & 2) != 0 || (v30 = *v27, v30 != _InterlockedCompareExchange64(v27, v29, v28)) )
        ExfReleasePushLock(v27);
      KeAbPostRelease((ULONG_PTR)v27);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExFreePoolWithTag(v9, 0x6C46624Fu);
  }
  else
  {
LABEL_13:
    if ( v9[1] )
    {
      do
      {
        v17 = v3++;
        *(_DWORD *)&v9[32 * v17 + 26] |= 1u;
      }
      while ( v3 < v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
