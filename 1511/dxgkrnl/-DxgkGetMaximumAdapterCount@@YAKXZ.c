/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C00C6C20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMaximumAdapterCount(__int64 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  return DXGGLOBAL::GetMaximumAdapterCount(Global);
}
