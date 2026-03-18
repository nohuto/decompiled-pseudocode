/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     _UnregisterClass @ 0x1C0071F88 (_UnregisterClass.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0092870 (xxxUpdatePerUserAccessPackSettings.c)
 *     _GetClassInfoEx @ 0x1C009F0A0 (_GetClassInfoEx.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     _RegisterUserApiHook @ 0x1C0111014 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C0111294 (_RegisterDManipHook.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C01233C0 (NtUserShutdownBlockReasonQuery.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C01295F0 (NtUserGetDManipHookInitFunction.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C012CA9C (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C012E380 (NtUserShutdownBlockReasonCreate.c)
 *     xxxSetDeskWallpaper @ 0x1C012E514 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E7F4 (LoadWallpaperFilenameFromRegistry.c)
 *     xxxSendShutdownData @ 0x1C01546B0 (xxxSendShutdownData.c)
 *     ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01C5CE4 (-ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATI.c)
 *     UserGetHipDeviceInfo @ 0x1C01C85F0 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01C89F0 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01CDB0C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01DEF5C (_GetWOWClass.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01F6734 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C01F9E70 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A47AC (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B2584 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
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
