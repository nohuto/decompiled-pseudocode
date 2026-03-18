/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C00D85A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_dqdSd @ 0x1C00D8BC0 (WPP_RECORDER_SF_dqdSd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C00D90D4 (WPP_RECORDER_SF_qdd.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 352);
  LODWORD(v12) = *(_DWORD *)(a1 + 752);
  LODWORD(v11) = a2;
  HIDWORD(v10) = HIDWORD(a1);
  WPP_RECORDER_SF_qdd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 19);
  RIMLockExclusive(v3 + 96);
  if ( *(_DWORD *)(a1 + 752) != a2 )
  {
    v15 = *(_DWORD *)(a1 + 752);
    v14 = *(_QWORD *)(a1 + 216);
    v13 = *(unsigned __int8 *)(a1 + 48);
    WPP_RECORDER_SF_dqdSd(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
    LODWORD(v10) = *(_DWORD *)(a1 + 752);
    DbgPrintRIMAlways(
      "rimttm:RIMOnTTMDeviceAssignedToTerminal: TTM changing terminal to %d for pRimDev=%p type=%d ustrName=%ws ulTerminalId=%d\n",
      a2,
      a1,
      *(unsigned __int8 *)(a1 + 48),
      *(_QWORD *)(a1 + 216),
      v10,
      a1,
      v13,
      v14,
      v15);
    *(_DWORD *)(a1 + 752) = a2;
  }
  RIMUnlockExclusive(v3 + 96);
  LODWORD(v10) = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x15u,
    (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
    v10,
    v11,
    v12);
  return 0LL;
}
