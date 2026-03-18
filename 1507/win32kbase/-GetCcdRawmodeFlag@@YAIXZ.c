/*
 * XREFs of ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C001BD58
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9160 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 GetCcdRawmodeFlag(void)
{
  return (unsigned __int8)((__int64 (*)(void))qword_1C01013B8)() != 0 ? 0x20000 : 0;
}
