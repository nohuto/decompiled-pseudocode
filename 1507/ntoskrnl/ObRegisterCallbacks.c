/*
 * XREFs of ObRegisterCallbacks @ 0x1405A6D9C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmVerifyCallbackFunction @ 0x1405A72EC (MmVerifyCallbackFunction.c)
 *     ObpInsertCallbackByAltitude @ 0x1405A73C8 (ObpInsertCallbackByAltitude.c)
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
  __int64 v12; // r9
  unsigned int v13; // ebp
  OB_OPERATION_REGISTRATION *v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int i; // r12d
  unsigned __int16 *v19; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rbp
  __int64 v26; // rcx
  unsigned __int16 **v27; // rax
  __int64 *v28; // r14
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  __int64 v31; // rtt
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax

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
  v13 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v14 = &CallbackRegistration->OperationRegistration[v13];
      if ( !v14->Operations || ((*v14->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
        break;
      if ( v14->PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunction() )
          goto LABEL_22;
      }
      else if ( !v14->PostOperation )
      {
        break;
      }
      if ( v14->PostOperation && !(unsigned int)MmVerifyCallbackFunction() )
      {
LABEL_22:
        inserted = -1073741790;
        goto LABEL_23;
      }
      v15 = (unsigned __int64)&v9[32 * (unsigned __int64)v13 + 16];
      *(_QWORD *)(v15 + 8) = v15;
      *(_QWORD *)v15 = v15;
      *(_QWORD *)(v15 + 56) = 0LL;
      *(_DWORD *)(v15 + 16) = v14->Operations;
      *(_QWORD *)(v15 + 24) = v9;
      *(_QWORD *)(v15 + 32) = *v14->ObjectType;
      *(_QWORD *)(v15 + 40) = v14->PreOperation;
      *(_QWORD *)(v15 + 48) = v14->PostOperation;
      inserted = ObpInsertCallbackByAltitude();
      if ( inserted < 0 )
        goto LABEL_23;
      ++v9[1];
      if ( ++v13 >= CallbackRegistration->OperationRegistrationCount )
        goto LABEL_12;
    }
    inserted = -1073741811;
LABEL_12:
    if ( inserted >= 0 )
      goto LABEL_13;
LABEL_23:
    for ( i = 0; i < v9[1]; ++i )
    {
      v19 = &v9[32 * (unsigned __int64)i + 16];
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v21 = (unsigned __int64 *)(*((_QWORD *)v19 + 4) + 184LL);
      v22 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0LL, v12);
      v25 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, v22, (ULONG_PTR)v21, v24);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      v26 = *(_QWORD *)v19;
      v27 = (unsigned __int16 **)*((_QWORD *)v19 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v19 + 8LL) != v19 || *v27 != v19 )
        __fastfail(3u);
      *v27 = (unsigned __int16 *)v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = (__int64 *)(*((_QWORD *)v19 + 4) + 184LL);
      _m_prefetchw(v28);
      v29 = *v28;
      v30 = *v28 - 16;
      if ( (*v28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v30 = 0LL;
      if ( (v29 & 2) != 0 || (v31 = *v28, v31 != _InterlockedCompareExchange64(v28, v30, v29)) )
        ExfReleasePushLock(v28, v23);
      KeAbPostRelease((ULONG_PTR)v28);
      v32 = KeGetCurrentThread();
      v33 = v32->SpecialApcDisable + 1;
      v32->SpecialApcDisable = v33;
      if ( !v33 && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
        KiCheckForKernelApcDelivery();
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
        v16 = v3++;
        *(_DWORD *)&v9[32 * v16 + 26] |= 1u;
      }
      while ( v3 < v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
