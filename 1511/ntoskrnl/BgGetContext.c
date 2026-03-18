/*
 * XREFs of BgGetContext @ 0x1406D93BC
 * Callers:
 *     BgkResumePrepare @ 0x14039ED54 (BgkResumePrepare.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140079D9C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x1406D9404 (ResFwGetContext.c)
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
  if ( (dword_1402D4BB0 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v0 = v2;
  }
  BgpFwReleaseLock();
  return v0;
}
