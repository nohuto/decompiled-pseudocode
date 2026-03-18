/*
 * XREFs of PsEqualCurrentSilo @ 0x1401F5828
 * Callers:
 *     <none>
 * Callees:
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 */

bool PsEqualCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rax
  __int64 v2; // r8

  CurrentThread = KeGetCurrentThread();
  v1 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  return v1 == v2;
}
