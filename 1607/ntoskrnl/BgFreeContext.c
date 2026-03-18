/*
 * XREFs of BgFreeContext @ 0x140725010
 * Callers:
 *     BgkResumeFinished @ 0x1403C9590 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002ECE0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401271F4 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140127230 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_1402F9F90 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
