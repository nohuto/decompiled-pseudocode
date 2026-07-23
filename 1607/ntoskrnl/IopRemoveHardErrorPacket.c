/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1401C52B8
 * Callers:
 *     IopHardErrorThread @ 0x140621894 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140320BF0);
  v1 = qword_140320BE0;
  v2 = *(_QWORD *)qword_140320BE0;
  if ( *(__int64 **)(qword_140320BE0 + 8) != &qword_140320BE0 || *(_QWORD *)(v2 + 8) != qword_140320BE0 )
    __fastfail(3u);
  qword_140320BE0 = *(_QWORD *)qword_140320BE0;
  *(_QWORD *)(v2 + 8) = &qword_140320BE0;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_140320BF0, v0);
  return v1;
}
