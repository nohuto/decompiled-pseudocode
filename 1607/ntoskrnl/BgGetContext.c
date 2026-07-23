/*
 * XREFs of BgGetContext @ 0x1407251F0
 * Callers:
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E860 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x140725238 (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v0 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v0 = v2;
  }
  BgpFwReleaseLock();
  return v0;
}
