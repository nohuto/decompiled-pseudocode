/*
 * XREFs of BgMarkHiberPhase @ 0x14072537C
 * Callers:
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401271F4 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140127230 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x1407253AC (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
