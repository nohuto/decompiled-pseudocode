/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C014562C
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C000FE50 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkEnableStablePowerState(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableStablePowerState(Global);
}
