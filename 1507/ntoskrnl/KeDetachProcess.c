/*
 * XREFs of KeDetachProcess @ 0x14012EBF0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x14009A430 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}
