/*
 * XREFs of ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001C8B0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_18_::_AUTO::__AUTO @ 0x1C001C858 (_DrvSetDisplayConfig_--_18_--_AUTO--__AUTO.c)
 *     GetPathsModality @ 0x1C001C8D8 (GetPathsModality.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BB2A0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePathsModality(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C0101300)();
    Win32FreePool(a1);
  }
}
