/*
 * XREFs of ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0052548
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 *     sub_1C00524F0 @ 0x1C00524F0 (sub_1C00524F0.c)
 *     sub_1C0052570 @ 0x1C0052570 (sub_1C0052570.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePathsModality(struct _D3DKMT_GETPATHSMODALITY *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C0104120)();
    Win32FreePool();
  }
}
