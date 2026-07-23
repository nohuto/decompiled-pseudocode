/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x14022E994
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     MmEnableProcessSvm @ 0x1401E0DFC (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x14022EDCC (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14022EFE8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14022F21C (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpAssignPasid @ 0x1406B6B08 (ExpAssignPasid.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v4; // r14
  _KPROCESS *Process; // r15
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  int Asid; // r13d
  unsigned int v10; // r13d
  _BYTE *v11; // rax
  _BYTE *v12; // r14
  __int64 *v13; // rcx
  __int64 *v14; // rax
  unsigned __int8 v15; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 *v18; // rcx
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 *P; // [rsp+20h] [rbp-38h]
  unsigned __int8 v22; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+B0h] [rbp+58h]
  char v27; // [rsp+B0h] [rbp+58h]
  unsigned __int64 v28; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = -1;
  v2 = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  v4 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead) )
    return 3221225738LL;
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3], 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[3], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &Process[2].ActiveProcessors.Bitmap[3],
      v7,
      (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
  if ( v8 )
    v8[26] |= 1u;
  Asid = Process[2].ActiveProcessors.Bitmap[1];
  if ( Asid )
  {
LABEL_19:
    v10 = Asid - 1;
    v28 = Process[2].ActiveProcessors.Bitmap[2];
    if ( !v28 )
    {
      v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))HalIommuDispatch[2])(v10, 0LL, &v28);
      if ( v2 < 0 )
        goto LABEL_14;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[4], &LockHandle);
      if ( Process[2].ActiveProcessors.Bitmap[2] )
      {
        v4 = v28;
        v28 = Process[2].ActiveProcessors.Bitmap[2];
      }
      else
      {
        Process[2].ActiveProcessors.Bitmap[2] = v28;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      __writecr8(CurrentIrql);
      if ( v4 )
        ((void (__fastcall *)(unsigned __int64))HalIommuDispatch[8])(v4);
    }
    v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v11, (ULONG_PTR)&ExpSvmDeviceListLock);
    if ( v12 )
      v12[26] |= 1u;
    v13 = (__int64 *)ExpSvmDevices;
    if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
      goto LABEL_37;
    do
    {
      v14 = v13;
      if ( v13[2] == a1 )
        break;
      v13 = (__int64 *)*v13;
    }
    while ( v13 != &ExpSvmDevices );
    if ( v14[2] != a1 )
      v14 = 0LL;
    P = v14;
    if ( !v14 )
LABEL_37:
      v2 = ExpPrepareNewSvmDevice(a1);
    else
      ++*((_DWORD *)v14 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
    if ( v2 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
      if ( PoolWithTag )
      {
        PoolWithTag[2] = P;
        v27 = 0;
        v22 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[4], &LockHandle);
        v18 = &Process[2].ActiveProcessors.Bitmap[5];
        v19 = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[5];
        if ( v19 == &Process[2].ActiveProcessors.Bitmap[5] )
        {
LABEL_52:
          v20 = *v18;
          if ( *(unsigned __int64 **)(*v18 + 8) != v18 )
            __fastfail(3u);
          *PoolWithTag = v20;
          PoolWithTag[1] = v18;
          *(_QWORD *)(v20 + 8) = PoolWithTag;
          *v18 = (unsigned __int64)PoolWithTag;
        }
        else
        {
          while ( *(_QWORD *)(v19[2] + 16) != a1 )
          {
            v19 = (unsigned __int64 *)*v19;
            if ( v19 == v18 )
              goto LABEL_52;
          }
          v27 = 1;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        __writecr8(v22);
        if ( v27 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = 0LL;
        }
        else
        {
          MmEnableProcessSvm();
          v2 = ((__int64 (__fastcall *)(unsigned __int64, __int64))HalIommuDispatch[4])(v28, P[13]);
          if ( v2 < 0 )
            goto LABEL_43;
          v2 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))HalIommuDispatch[5])(
                 v28,
                 Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
        }
        if ( v2 >= 0 )
        {
          *a2 = v10;
          goto LABEL_14;
        }
      }
      else
      {
        v2 = -1073741670;
      }
    }
LABEL_43:
    if ( P )
      ExpSvmDereferenceDevice(P);
    if ( PoolWithTag )
    {
      v15 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[4], &LockHandle);
      v16 = *PoolWithTag;
      v17 = (_QWORD *)PoolWithTag[1];
      if ( *(_QWORD **)(*PoolWithTag + 8LL) != PoolWithTag || (_QWORD *)*v17 != PoolWithTag )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      __writecr8(v15);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    goto LABEL_14;
  }
  Asid = ExpAllocateAsid();
  if ( Asid )
  {
    if ( !(unsigned int)ExpAssignPasid(Process) )
      Asid = Process[2].ActiveProcessors.Bitmap[1];
    goto LABEL_19;
  }
  v2 = -1073741709;
LABEL_14:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[3]);
  KeAbPostRelease((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[3]);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
  return (unsigned int)v2;
}
