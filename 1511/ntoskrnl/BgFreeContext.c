/*
 * XREFs of BgFreeContext @ 0x1406D91C4
 * Callers:
 *     BgkResumeFinished @ 0x14039DEA4 (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140079D9C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = Address;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_1402D4BB0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
