/*
 * XREFs of RtlResetNtUserPfn @ 0x180083F00
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     RtlDllShutdownInProgress @ 0x180038BA0 (RtlDllShutdownInProgress.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801571C8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0);
    byte_1801571C8 = 0;
    memset64(off_180157170, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    memset64(off_1801570B8, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
