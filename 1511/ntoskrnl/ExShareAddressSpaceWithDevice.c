/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x140673C50
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003F780 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MmEnableProcessSvm @ 0x1401D094C (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x140214D90 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x140214F20 (ExpFreeAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x140214FA8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1402151DC (ExpSvmDereferenceDevice.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned __int32 *a2)
{
  int v2; // r14d
  _QWORD *PoolWithTag; // rdi
  __int64 v4; // r15
  _KPROCESS *Process; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  signed __int32 Asid; // r13d
  unsigned __int32 v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 *v13; // rcx
  __int64 *v14; // rax
  _QWORD *v15; // r15
  unsigned __int8 v16; // r15
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 *v19; // rcx
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // rax
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h]
  PEX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+B0h] [rbp+58h]
  char v29; // [rsp+B0h] [rbp+58h]
  __int64 v30; // [rsp+B8h] [rbp+60h] BYREF

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
  RunRef = (PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead) )
    return 3221225738LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[1], 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[1], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &Process[2].ActiveProcessors.Bitmap[1],
      v7,
      (ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[1]);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  Asid = *(_DWORD *)&Process[2].ActiveProcessors.Count;
  if ( Asid )
  {
LABEL_19:
    v10 = Asid - 1;
    v30 = Process[2].ActiveProcessors.Bitmap[0];
    if ( !v30 )
    {
      v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))HalIommuDispatch[2])(v10, 0LL, &v30);
      if ( v2 < 0 )
        goto LABEL_14;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[2], &LockHandle);
      if ( Process[2].ActiveProcessors.Bitmap[0] )
      {
        v4 = v30;
        v30 = Process[2].ActiveProcessors.Bitmap[0];
      }
      else
      {
        Process[2].ActiveProcessors.Bitmap[0] = v30;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      if ( v4 )
        ((void (__fastcall *)(__int64))HalIommuDispatch[8])(v4);
    }
    v11 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v11, (ULONG_PTR)&ExpSvmDeviceListLock);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
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
      v2 = ExpPrepareNewSvmDevice(a1, v30, &P);
    else
      ++*((_DWORD *)v14 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
    v15 = P;
    if ( v2 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
      if ( PoolWithTag )
      {
        PoolWithTag[2] = v15;
        v29 = 0;
        v23 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[2], &LockHandle);
        v19 = &Process[2].ActiveProcessors.Bitmap[3];
        v20 = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[3];
        if ( v20 == &Process[2].ActiveProcessors.Bitmap[3] )
        {
LABEL_52:
          v21 = *v19;
          *PoolWithTag = *v19;
          PoolWithTag[1] = v19;
          if ( *(unsigned __int64 **)(v21 + 8) != v19 )
            __fastfail(3u);
          *(_QWORD *)(v21 + 8) = PoolWithTag;
          *v19 = (unsigned __int64)PoolWithTag;
        }
        else
        {
          while ( *(_QWORD *)(v20[2] + 16) != a1 )
          {
            v20 = (unsigned __int64 *)*v20;
            if ( v20 == v19 )
              goto LABEL_52;
          }
          v29 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8((unsigned __int8)v23);
        if ( v29 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = 0LL;
        }
        else
        {
          MmEnableProcessSvm();
          v2 = ((__int64 (__fastcall *)(__int64, _QWORD))HalIommuDispatch[4])(v30, v15[13]);
          if ( v2 < 0 )
            goto LABEL_43;
          v2 = ((__int64 (__fastcall *)(__int64, unsigned __int64))HalIommuDispatch[5])(
                 v30,
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
    if ( v15 )
      ExpSvmDereferenceDevice((__int64)v15);
    if ( PoolWithTag )
    {
      v16 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[2], &LockHandle);
      v17 = *PoolWithTag;
      v18 = (_QWORD *)PoolWithTag[1];
      if ( *(_QWORD **)(*PoolWithTag + 8LL) != PoolWithTag || (_QWORD *)*v18 != PoolWithTag )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(v16);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    goto LABEL_14;
  }
  Asid = ExpAllocateAsid();
  if ( Asid )
  {
    ObfReferenceObject(Process);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&Process[2].ActiveProcessors, Asid, 0) )
    {
      ExpFreeAsid(Asid - 1);
      ObfDereferenceObject(Process);
      Asid = *(_DWORD *)&Process[2].ActiveProcessors.Count;
    }
    goto LABEL_19;
  }
  v2 = -1073741709;
LABEL_14:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[1],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[1]);
  KeAbPostRelease((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[1]);
  ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v2;
}
