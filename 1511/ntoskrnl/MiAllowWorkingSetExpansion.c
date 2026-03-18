/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x14009B3B4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x140548C5C (MmInitializeHandBuiltProcess.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14009B428 (MiReturnWsToExpansionList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (*(_BYTE *)(a1 + 216) & 7) == 1 )
  {
    v2 = (__int64 **)qword_1402FF758;
    v3 = (__int64 *)(a1 - 2824);
    v3[1] = qword_1402FF758;
    *v3 = (__int64)&qword_1402FF750;
    if ( *v2 != &qword_1402FF750 )
      __fastfail(3u);
    *v2 = v3;
    qword_1402FF758 = a1 - 2824;
  }
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
