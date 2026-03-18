/*
 * XREFs of MiInsertNewProcess @ 0x14001899C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140548C5C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  __int64 **v4; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = (__int64 **)qword_1402FE6A0;
  a1[193] = qword_1402FE6A0;
  a1[192] = &qword_1402FE698;
  if ( *v4 != &qword_1402FE698 )
    __fastfail(3u);
  *v4 = a1 + 192;
  qword_1402FE6A0 = (__int64)(a1 + 192);
  if ( a2 )
  {
    v5 = *(_QWORD **)(a2 + 24);
    v6 = a1 + 104;
    a1[104] = a2 + 16;
    a1[105] = v5;
    if ( *v5 != a2 + 16 )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(a2 + 24) = v6;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
