/*
 * XREFs of ?TS_ServiceStart@@YAXXZ @ 0x18001C3A4
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004370 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_ @ 0x180005B4C (WPP_SF_.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
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
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids);
  }
  if ( !(unsigned __int8)WinStationQueryEnforcementCore(0LL, 0LL, 1LL, &g_MaxSessions, 4, &v1) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LastError = GetLastError();
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, LastError);
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
      0x35u,
      &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
      g_MaxSessions);
  }
}
