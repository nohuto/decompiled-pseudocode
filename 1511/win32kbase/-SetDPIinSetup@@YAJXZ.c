/*
 * XREFs of ?SetDPIinSetup@@YAJXZ @ 0x1C0088654
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     IsGetDpiSettingSupported_0 @ 0x1C0002968 (IsGetDpiSettingSupported_0.c)
 *     GetDpiSetting_0 @ 0x1C0002970 (GetDpiSetting_0.c)
 *     IsSetDpiSettingSupported_0 @ 0x1C0002978 (IsSetDpiSettingSupported_0.c)
 *     SetDpiSetting_0 @ 0x1C0002980 (SetDpiSetting_0.c)
 *     IsSetDpiScalingSettingSupported_0 @ 0x1C0002988 (IsSetDpiScalingSettingSupported_0.c)
 *     SetDpiScalingSetting_0 @ 0x1C0002990 (SetDpiScalingSetting_0.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0047008 (DrvGetCurrentDpiInfoFromHDev.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     GreUpdateSharedDevCaps @ 0x1C0061FE4 (GreUpdateSharedDevCaps.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     GreReinitializeStockFonts @ 0x1C00BE5F0 (GreReinitializeStockFonts.c)
 */

__int64 SetDPIinSetup(void)
{
  int CurrentDpiInfoFromHDev; // edi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v7; // [rsp+D8h] [rbp-28h]
  int v8; // [rsp+E0h] [rbp-20h]
  __int64 v9; // [rsp+E8h] [rbp-18h]
  __int64 v10; // [rsp+F0h] [rbp-10h]
  int v11; // [rsp+F8h] [rbp-8h]
  __int64 v12; // [rsp+100h] [rbp+0h]
  int v13; // [rsp+108h] [rbp+8h]
  _DWORD v14[28]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v15; // [rsp+190h] [rbp+90h] BYREF
  int v16; // [rsp+198h] [rbp+98h] BYREF
  __int64 v17; // [rsp+1A0h] [rbp+A0h] BYREF

  QueryTable.Flags = 292;
  v16 = 0;
  QueryTable.Name = L"ImageState";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
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
  QueryTable.EntryContext = &v16;
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
  memset(v14, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(
                             *(_OWORD **)(*(_QWORD *)(gpDispInfo + 88) + 160LL),
                             (__int64)v14);
  v2 = (96 * v14[2] + 50) / 0x64u;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    gbSetupDPIInitialized = 1;
    if ( (int)IsGetDpiSettingSupported_0() >= 0 )
      GetDpiSetting_0();
    if ( v16 != v2
      && (int)IsSetDpiSettingSupported_0() >= 0
      && (int)SetDpiSetting_0() >= 0
      && (int)IsSetDpiScalingSettingSupported_0() >= 0
      && (int)SetDpiScalingSetting_0() >= 0 )
    {
      gDrvDpiWin8Style = 0;
      LOBYTE(v15) = 0;
      gDrvDpiAdjusted = 0;
      if ( (int)DrvSetDisplayConfig(
                  0LL,
                  0LL,
                  0,
                  0LL,
                  2191,
                  0,
                  0LL,
                  0,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 8),
                  (struct _MDEV **)&v17,
                  0LL,
                  0LL,
                  (char *)&v15,
                  0LL) >= 0
        && !(_BYTE)v15 )
      {
        GreReinitializeStockFonts(v2);
        v3 = v17;
        *(_QWORD *)gpDispInfo = *(_QWORD *)v17;
        *(_QWORD *)(gpDispInfo + 8) = v3;
        GreUpdateSharedDevCaps(*(_QWORD *)gpDispInfo);
        *(_WORD *)(gpDispInfo + 176) = v2;
        *((_WORD *)gpsi + 3643) = v2;
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
