/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1401C4984
 * Callers:
 *     IopHardErrorThread @ 0x1406217E0 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // bl
  KIRQL v1; // al

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140320BD0);
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_140320BC0 == &qword_140320BC0 )
  {
    byte_140320BF8 = 0;
    v0 = 0;
  }
  KeReleaseSpinLock(&qword_140320BD0, v1);
  return v0;
}
