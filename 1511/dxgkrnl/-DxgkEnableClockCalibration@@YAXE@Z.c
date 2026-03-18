/*
 * XREFs of ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C01455F4
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C000FE50 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkEnableClockCalibration(__int64 a1)
{
  unsigned __int8 v1; // bl
  DXGGLOBAL *Global; // rax

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableClockCalibration(Global, v1);
}
