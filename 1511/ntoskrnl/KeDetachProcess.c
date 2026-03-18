/*
 * XREFs of KeDetachProcess @ 0x1400EFA34
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  __int64 v0; // r8
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0LL, v0);
}
