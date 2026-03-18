/*
 * XREFs of KeDetachProcess @ 0x1400B0FD0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess(&CurrentThread->600, 0LL);
}
