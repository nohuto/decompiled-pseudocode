/*
 * XREFs of IopErrorLogGetEntry @ 0x14012FCA0
 * Callers:
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopErrorLogGetEntry()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // dl
  __int64 v4; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v1 = IopErrorLogListHead;
  v2 = v0;
  if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
  {
    v1 = 0LL;
    IopErrorLogSessionPending = 0;
  }
  else
  {
    v4 = *(_QWORD *)IopErrorLogListHead;
    if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead || *(_QWORD *)(v4 + 8) != IopErrorLogListHead )
      __fastfail(3u);
    IopErrorLogListHead = *(_QWORD *)IopErrorLogListHead;
    *(_QWORD *)(v4 + 8) = &IopErrorLogListHead;
  }
  KeReleaseSpinLock(&IopErrorLogLock, v2);
  return v1;
}
