/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1401B76AC
 * Callers:
 *     IopHardErrorThread @ 0x1405F7A20 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB670);
  v1 = qword_1402FB660;
  v2 = *(_QWORD *)qword_1402FB660;
  if ( *(__int64 **)(qword_1402FB660 + 8) != &qword_1402FB660 || *(_QWORD *)(v2 + 8) != qword_1402FB660 )
    __fastfail(3u);
  qword_1402FB660 = *(_QWORD *)qword_1402FB660;
  *(_QWORD *)(v2 + 8) = &qword_1402FB660;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_1402FB670, v0);
  return v1;
}
