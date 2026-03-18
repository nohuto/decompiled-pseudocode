/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1401B6EAC
 * Callers:
 *     IopHardErrorThread @ 0x1405F7A20 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // bl
  KIRQL v1; // al

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB670);
  IopCurrentHardError = 0LL;
  if ( (__int64 *)qword_1402FB660 == &qword_1402FB660 )
  {
    byte_1402FB698 = 0;
    v0 = 0;
  }
  KeReleaseSpinLock(&qword_1402FB670, v1);
  return v0;
}
