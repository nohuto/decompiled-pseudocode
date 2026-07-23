/*
 * XREFs of IopErrorLogRequeueEntry @ 0x1401CB3D4
 * Callers:
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopErrorLogRequeueEntry(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  v3 = IopErrorLogListHead;
  if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead )
    __fastfail(3u);
  *a1 = IopErrorLogListHead;
  a1[1] = &IopErrorLogListHead;
  *(_QWORD *)(v3 + 8) = a1;
  IopErrorLogListHead = (__int64)a1;
  ErrorLogSessionOpened = 0;
  KeReleaseSpinLock(&IopErrorLogLock, v2);
}
