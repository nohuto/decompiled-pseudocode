/*
 * XREFs of KeDetachProcess @ 0x1400AF040
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess(&CurrentThread->600, 0LL);
}
