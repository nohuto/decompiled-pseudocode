/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x14002B61C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x1405BFD3C (MmInitializeHandBuiltProcess.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14002B690 (MiReturnWsToExpansionList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (*(_BYTE *)(a1 + 216) & 7) == 1 )
  {
    v2 = (__int64 **)qword_14034FC18;
    v3 = (__int64 *)(a1 - 2824);
    v3[1] = qword_14034FC18;
    *v3 = (__int64)&qword_14034FC10;
    if ( *v2 != &qword_14034FC10 )
      __fastfail(3u);
    *v2 = v3;
    qword_14034FC18 = a1 - 2824;
  }
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
