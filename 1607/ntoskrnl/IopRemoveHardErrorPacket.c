/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1401C5418
 * Callers:
 *     IopHardErrorThread @ 0x1406217E0 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140320BD0);
  v1 = qword_140320BC0;
  v2 = *(_QWORD *)qword_140320BC0;
  if ( *(__int64 **)(qword_140320BC0 + 8) != &qword_140320BC0 || *(_QWORD *)(v2 + 8) != qword_140320BC0 )
    __fastfail(3u);
  qword_140320BC0 = *(_QWORD *)qword_140320BC0;
  *(_QWORD *)(v2 + 8) = &qword_140320BC0;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_140320BD0, v0);
  return v1;
}
