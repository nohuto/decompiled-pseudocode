/*
 * XREFs of EtwProviderEnabled @ 0x1400F5C68
 * Callers:
 *     EtwTraceMemoryAcg @ 0x1400F5C1C (EtwTraceMemoryAcg.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1403B5B4C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404D00D4 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  unsigned __int8 v3; // dl
  __int64 v4; // r8
  BOOLEAN v5; // r9
  __int64 v6; // r10

  if ( !RegHandle )
    return 0;
  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 80LL, Level, Keyword)
    || *(_BYTE *)(v6 + 100) != v5 && EtwpLevelKeywordEnabled(*(_QWORD *)(v6 + 40) + 80LL, v3, v4) )
  {
    return 1;
  }
  return v5;
}
