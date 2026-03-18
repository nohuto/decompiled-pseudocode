/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     _GetClassInfoEx @ 0x1C0057B7C (_GetClassInfoEx.c)
 *     _UnregisterClass @ 0x1C005D4C0 (_UnregisterClass.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C00FBDB0 (NtUserGetDManipHookInitFunction.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0130DE0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0131000 (NtUserShutdownBlockReasonQuery.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0150FB4 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0152250 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0152530 (LoadWallpaperFilenameFromRegistry.c)
 *     _RegisterDManipHook @ 0x1C0152690 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0153660 (_RegisterUserApiHook.c)
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C5B7C (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 *     UserGetHipDeviceInfo @ 0x1C01CCE40 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01CD43C (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D50CC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01E80BC (_GetWOWClass.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01FEBB0 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C02027C0 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     xxxSendShutdownData @ 0x1C0215440 (xxxSendShutdownData.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3E2C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B0970 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_12;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_12:
      a1 -= 2;
      v3 = -2147483643;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
