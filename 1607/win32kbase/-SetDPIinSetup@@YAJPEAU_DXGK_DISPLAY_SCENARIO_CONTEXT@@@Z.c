/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00898A4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     IsGetDpiSettingSupported_0 @ 0x1C0002978 (IsGetDpiSettingSupported_0.c)
 *     GetDpiSetting_0 @ 0x1C0002980 (GetDpiSetting_0.c)
 *     IsSetDpiSettingSupported_0 @ 0x1C0002988 (IsSetDpiSettingSupported_0.c)
 *     SetDpiSetting_0 @ 0x1C0002990 (SetDpiSetting_0.c)
 *     IsSetDpiScalingSettingSupported_0 @ 0x1C0002998 (IsSetDpiScalingSettingSupported_0.c)
 *     SetDpiScalingSetting_0 @ 0x1C00029A0 (SetDpiScalingSetting_0.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0057E4C (DrvGetCurrentDpiInfoFromHDev.c)
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     GreUpdateSharedDevCaps @ 0x1C007C8D8 (GreUpdateSharedDevCaps.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     GreReinitializeStockFonts @ 0x1C00CA160 (GreReinitializeStockFonts.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  int CurrentDpiInfoFromHDev; // edi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v9; // [rsp+D8h] [rbp-28h]
  int v10; // [rsp+E0h] [rbp-20h]
  __int64 v11; // [rsp+E8h] [rbp-18h]
  __int64 v12; // [rsp+F0h] [rbp-10h]
  int v13; // [rsp+F8h] [rbp-8h]
  __int64 v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  _DWORD v16[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v17; // [rsp+1A8h] [rbp+A8h] BYREF
  int v18; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v19; // [rsp+1B8h] [rbp+B8h] BYREF

  QueryTable.Flags = 292;
  v18 = 0;
  QueryTable.Name = L"ImageState";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
    goto LABEL_4;
  RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
  if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 3221225474LL;
LABEL_4:
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    return 3221225474LL;
  }
  QueryTable.Flags |= 0x80u;
  QueryTable.Name = L"Upgrade";
  QueryTable.EntryContext = &v18;
  if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
    return 3221225474LL;
  QueryTable.Name = L"Overrode";
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
         &QueryTable,
         0LL,
         0LL) >= 0 )
    return 3221225474LL;
  memset(v16, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(
                             *(_OWORD **)(*(_QWORD *)(gpDispInfo + 88) + 160LL),
                             (__int64)v16);
  v4 = (96 * v16[2] + 50) / 0x64u;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    gbSetupDPIInitialized = 1;
    if ( (int)IsGetDpiSettingSupported_0() >= 0 )
      GetDpiSetting_0();
    if ( v18 != v4
      && (int)IsSetDpiSettingSupported_0() >= 0
      && (int)SetDpiSetting_0() >= 0
      && (int)IsSetDpiScalingSettingSupported_0() >= 0
      && (int)SetDpiScalingSetting_0() >= 0 )
    {
      gDrvDpiWin8Style = 0;
      LOBYTE(v17) = 0;
      gDrvDpiAdjusted = 0;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0LL,
                  0,
                  0LL,
                  2191,
                  0,
                  0LL,
                  0,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 8),
                  (struct _MDEV **)&v19,
                  0LL,
                  0LL,
                  (char *)&v17,
                  0LL,
                  (__int64)a1) >= 0
        && !(_BYTE)v17 )
      {
        GreReinitializeStockFonts(v4);
        v5 = v19;
        *(_QWORD *)gpDispInfo = *(_QWORD *)v19;
        *(_QWORD *)(gpDispInfo + 8) = v5;
        GreUpdateSharedDevCaps(*(_QWORD *)gpDispInfo);
        *(_WORD *)(gpDispInfo + 176) = v4;
        *((_WORD *)gpsi + 4339) = v4;
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
