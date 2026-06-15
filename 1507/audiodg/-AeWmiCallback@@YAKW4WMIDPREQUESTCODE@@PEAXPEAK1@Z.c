/*
 * XREFs of ?AeWmiCallback@@YAKW4WMIDPREQUESTCODE@@PEAXPEAK1@Z @ 0x14003D3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AeWmiCallback(enum WMIDPREQUESTCODE a1, void *a2, unsigned int *a3, void *a4)
{
  unsigned int v4; // ebx
  int v5; // ecx

  v4 = 0;
  v5 = a1 - 4;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      g_hAEWMITraceHandle = 0LL;
      g_u32AEWMILogLevel = 0;
      g_u32AEWMILogFlags = 0;
    }
    else
    {
      return 87;
    }
  }
  else
  {
    g_hAEWMITraceHandle = EtwGetTraceLoggerHandle(a4);
    g_u32AEWMILogLevel = (unsigned __int8)EtwGetTraceEnableLevel(g_hAEWMITraceHandle);
    g_u32AEWMILogFlags = EtwGetTraceEnableFlags(g_hAEWMITraceHandle);
  }
  return v4;
}
