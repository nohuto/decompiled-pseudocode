/*
 * XREFs of AudioServerSetLastBufferInProgress @ 0x180073870
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerSetLastBufferInProgress(__int64 a1, __int64 a2, bool a3)
{
  if ( a1 )
  {
    *(_DWORD *)(a1 + 280) = 1;
    UpdateOffloadPowerRequest(a1, a2, a3);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("AudioServerSetLastBufferInProgress", 3604, -2147024809);
  }
  return 0LL;
}
