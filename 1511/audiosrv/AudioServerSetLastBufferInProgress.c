/*
 * XREFs of AudioServerSetLastBufferInProgress @ 0x18008A500
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall AudioServerSetLastBufferInProgress(__int64 a1)
{
  int v2; // ebx

  v2 = 0;
  EnterCriticalSection(&g_csVadList);
  if ( a1 )
  {
    *(_DWORD *)(a1 + 280) = 1;
    UpdateOffloadPowerRequest();
  }
  else
  {
    v2 = -2147024809;
  }
  LeaveCriticalSection(&g_csVadList);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x60u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v2);
  }
  return 0LL;
}
