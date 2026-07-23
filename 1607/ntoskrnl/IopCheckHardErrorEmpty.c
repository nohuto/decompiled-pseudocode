/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1401C4868
 * Callers:
 *     IopHardErrorThread @ 0x140621894 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // bl
  KIRQL v1; // al

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140320BF0);
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_140320BE0 == &qword_140320BE0 )
  {
    byte_140320C18 = 0;
    v0 = 0;
  }
  KeReleaseSpinLock(&qword_140320BF0, v1);
  return v0;
}
