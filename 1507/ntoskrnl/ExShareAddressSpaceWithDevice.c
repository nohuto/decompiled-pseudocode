/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x1406F826C
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400C8060 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmEnableProcessSvm @ 0x1402106F8 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x140265030 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x1402651C0 (ExpFreeAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14026524C (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x140265480 (ExpSvmDereferenceDevice.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned __int32 *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  _QWORD *PoolWithTag; // rdi
  _KPROCESS *Process; // r15
  LIST_ENTRY *p_WaitListHead; // r12
  unsigned __int64 v9; // rtt
  volatile signed __int64 *Bitmap; // r14
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  signed __int32 Next; // r13d
  unsigned __int32 v15; // r13d
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r14
  unsigned __int8 v26; // r14
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rtt
  unsigned __int64 *v30; // rcx
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rax
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int64 *v34; // [rsp+28h] [rbp-30h]
  __int64 v35; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+B0h] [rbp+58h]
  char v40; // [rsp+B0h] [rbp+58h]
  __int64 v41; // [rsp+B8h] [rbp+60h] BYREF

  *a2 = -1;
  v4 = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_WaitListHead = &Process[1].Header.WaitListHead;
  _m_prefetchw(&Process[1].Header.WaitListHead);
  v9 = (unsigned __int64)Process[1].Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.WaitListHead, v9 + 2, v9)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead) )
  {
    return 3221225738LL;
  }
  Bitmap = (volatile signed __int64 *)Process[2].ActiveProcessors.Bitmap;
  v34 = (volatile signed __int64 *)Process[2].ActiveProcessors.Bitmap;
  v11 = KeAbPreAcquire((ULONG_PTR)Process[2].ActiveProcessors.Bitmap, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Process[2].ActiveProcessors.Bitmap, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      Process[2].ActiveProcessors.Bitmap,
      v11,
      (ULONG_PTR)Process[2].ActiveProcessors.Bitmap,
      v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Next = (signed __int32)Process[2].SwapListEntry.Next;
  if ( Next )
  {
LABEL_17:
    v15 = Next - 1;
    v41 = *(_QWORD *)&Process[2].ActiveProcessors.Count;
    if ( !v41 )
    {
      v4 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))HalIommuDispatch[0] + 2))(v15, 0LL, &v41);
      if ( v4 < 0 )
        goto LABEL_48;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[1], &LockHandle);
      if ( *(_QWORD *)&Process[2].ActiveProcessors.Count )
      {
        v16 = v41;
        v41 = *(_QWORD *)&Process[2].ActiveProcessors.Count;
      }
      else
      {
        v16 = 0LL;
        *(_QWORD *)&Process[2].ActiveProcessors.Count = v41;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      if ( v16 )
        (*((void (__fastcall **)(__int64))HalIommuDispatch[0] + 8))(v16);
    }
    v17 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0LL, v12);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v17, (ULONG_PTR)&ExpSvmDeviceListLock, v18);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    v20 = (__int64 *)ExpSvmDevices;
    if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
      goto LABEL_35;
    do
    {
      v21 = v20;
      if ( v20[2] == a1 )
        break;
      v20 = (__int64 *)*v20;
    }
    while ( v20 != &ExpSvmDevices );
    if ( v21[2] != a1 )
      v21 = 0LL;
    P = v21;
    if ( !v21 )
LABEL_35:
      v4 = ExpPrepareNewSvmDevice(a1, v41, &P);
    else
      ++*((_DWORD *)v21 + 6);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
    v25 = P;
    if ( v4 < 0 )
      goto LABEL_41;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
    if ( PoolWithTag )
    {
      PoolWithTag[2] = v25;
      v40 = 0;
      v35 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[1], &LockHandle);
      v30 = &Process[2].ActiveProcessors.Bitmap[2];
      v31 = (unsigned __int64 *)Process[2].ActiveProcessors.Bitmap[2];
      if ( v31 == &Process[2].ActiveProcessors.Bitmap[2] )
      {
LABEL_56:
        v32 = *v30;
        *PoolWithTag = *v30;
        PoolWithTag[1] = v30;
        if ( *(unsigned __int64 **)(v32 + 8) != v30 )
          __fastfail(3u);
        *(_QWORD *)(v32 + 8) = PoolWithTag;
        *v30 = (unsigned __int64)PoolWithTag;
      }
      else
      {
        while ( *(_QWORD *)(v31[2] + 16) != a1 )
        {
          v31 = (unsigned __int64 *)*v31;
          if ( v31 == v30 )
            goto LABEL_56;
        }
        v40 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8((unsigned __int8)v35);
      if ( v40 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      else
      {
        MmEnableProcessSvm();
        v4 = (*((__int64 (__fastcall **)(__int64, _QWORD))HalIommuDispatch[0] + 4))(v41, v25[13]);
        if ( v4 < 0 )
          goto LABEL_41;
        v4 = (*((__int64 (__fastcall **)(__int64, unsigned __int64))HalIommuDispatch[0] + 5))(
               v41,
               Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
      }
      if ( v4 >= 0 )
      {
        *a2 = v15;
LABEL_47:
        Bitmap = v34;
        goto LABEL_48;
      }
    }
    else
    {
      v4 = -1073741670;
    }
LABEL_41:
    if ( v25 )
      ExpSvmDereferenceDevice(v25, v22, v23, v24);
    if ( PoolWithTag )
    {
      v26 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].ActiveProcessors.Bitmap[1], &LockHandle);
      v27 = *PoolWithTag;
      v28 = (_QWORD *)PoolWithTag[1];
      if ( *(_QWORD **)(*PoolWithTag + 8LL) != PoolWithTag || (_QWORD *)*v28 != PoolWithTag )
        __fastfail(3u);
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(v26);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    goto LABEL_47;
  }
  Next = ExpAllocateAsid();
  if ( Next )
  {
    ObfReferenceObject(Process);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&Process[2].SwapListEntry, Next, 0) )
    {
      ExpFreeAsid(Next - 1);
      ObfDereferenceObject(Process);
      Next = (signed __int32)Process[2].SwapListEntry.Next;
    }
    goto LABEL_17;
  }
  v4 = -1073741709;
LABEL_48:
  if ( (_InterlockedExchangeAdd64(Bitmap, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Bitmap);
  KeAbPostRelease((ULONG_PTR)Bitmap);
  _m_prefetchw(p_WaitListHead);
  v29 = (unsigned __int64)p_WaitListHead->Flink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitListHead, v29 - 2, v29) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
  return (unsigned int)v4;
}
