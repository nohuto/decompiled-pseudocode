/*
 * XREFs of ?TS_ServiceStart@@YAXXZ @ 0x18001E7AC
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18000414C (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void TS_ServiceStart(void)
{
  DWORD LastError; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF
  struct TSSession *v2; // [rsp+48h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids);
  }
  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &g_MaxSessions, 4, &v1) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LastError = GetLastError();
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, LastError);
    }
    g_MaxSessions = 1;
  }
  TsSessionCreate(0, 0LL, &v2);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids,
      g_MaxSessions);
  }
}
