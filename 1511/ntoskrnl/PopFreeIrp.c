/*
 * XREFs of PopFreeIrp @ 0x140120D98
 * Callers:
 *     PopRequestCompletion @ 0x140120C64 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x14039D018 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     PopFxReleasePowerIrp @ 0x1401211A4 (PopFxReleasePowerIrp.c)
 */

LONG_PTR __fastcall PopFreeIrp(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rbp
  void *v5; // r14
  __int64 v6; // rdx
  __int64 **v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(__int64 **)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = *v2;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  v7 = (__int64 **)v2[1];
  if ( *(__int64 **)(v6 + 8) != v2 || *v7 != v2 )
    __fastfail(3u);
  PopIrpLockThread = 0LL;
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    pIoFreeIrp(a1);
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return ObfDereferenceObjectWithTag(v5, 0x746C6644u);
}
