/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C00D2DD0 (NtUserShutdownBlockReasonCreate.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860 (xxxUpdatePerUserAccessPackSettings.c)
 *     _RegisterUserApiHook @ 0x1C0101144 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C01013B4 (_RegisterDManipHook.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C01075F0 (NtUserGetDManipHookInitFunction.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C010B320 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C010D0A0 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D380 (LoadWallpaperFilenameFromRegistry.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0110340 (NtUserShutdownBlockReasonQuery.c)
 *     _GetClassInfoEx @ 0x1C011B160 (_GetClassInfoEx.c)
 *     _SetCursorIconData @ 0x1C011BB5C (_SetCursorIconData.c)
 *     _UnregisterClass @ 0x1C011D430 (_UnregisterClass.c)
 *     NtUserFindExistingCursorIcon @ 0x1C011DBB0 (NtUserFindExistingCursorIcon.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C773C (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 *     UserGetHipDeviceInfo @ 0x1C01CEA20 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01CF020 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6C88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01E86E4 (_GetWOWClass.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01FEFB0 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C0202B5C (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     xxxSendShutdownData @ 0x1C02152E8 (xxxSendShutdownData.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3678 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02AFB94 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
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
