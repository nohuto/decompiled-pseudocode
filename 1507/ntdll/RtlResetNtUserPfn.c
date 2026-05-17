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
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9

  if ( !byte_1801571C8 )
    return 3221225485LL;
  if ( !RtlDllShutdownInProgress() )
  {
    LdrProtectMrdata(0, v1, v2, v3);
    byte_1801571C8 = 0;
    memset64(off_180157170, (unsigned __int64)UninitUser32Proc, 0xBuLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    memset64(off_1801570B8, (unsigned __int64)UninitUser32Proc, 0x17uLL);
    LdrProtectMrdata(1, (char *)0x17, v4, v5);
  }
  return 0LL;
}
