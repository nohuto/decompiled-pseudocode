/*
 * XREFs of RtlResetNtUserPfn @ 0x1800956B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x180054530 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801551C8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_1801551C8 = 0;
    memset64(off_180155170, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    memset64(off_1801550B8, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
