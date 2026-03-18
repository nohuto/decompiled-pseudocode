/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C00DBBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMaximumAdapterCount(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  return DXGGLOBAL::GetMaximumAdapterCount(Global);
}
