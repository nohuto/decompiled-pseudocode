/*
 * XREFs of RtlResetNtUserPfn @ 0x180096AA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x18002A630 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801631C8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_1801631C8 = 0;
    memset64(off_180163170, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    memset64(off_1801630B8, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
