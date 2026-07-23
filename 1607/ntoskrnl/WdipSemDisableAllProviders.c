/*
 * XREFs of WdipSemDisableAllProviders @ 0x14069C660
 * Callers:
 *     WdipSemShutdown @ 0x14069BA74 (WdipSemShutdown.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x1404C7BCC (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemDisableAllProviders()
{
  __int64 v0; // rbx
  __int32 v1; // edi
  __int32 i; // esi
  __int64 v3; // rbp
  __int64 result; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  for ( i = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
        (unsigned int)v0 < dword_1402FFF00;
        v0 = (unsigned int)(v0 + 1) )
  {
    v3 = WdipSemProviderTable[v0];
    if ( *(_BYTE *)(v3 + 37) && v1 )
      result = WdipSemEnableDisableTrace(v1, v3, 0, 0LL, 0, 0);
    if ( *(_BYTE *)(v3 + 69) )
    {
      if ( i )
        result = WdipSemEnableDisableTrace(i, v3, 0, 0LL, 0, 0);
    }
  }
  return result;
}
