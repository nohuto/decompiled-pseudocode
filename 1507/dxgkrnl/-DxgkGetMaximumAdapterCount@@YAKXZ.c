/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C00DF6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMaximumAdapterCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  return DXGGLOBAL::GetMaximumAdapterCount(Global, v5, v6, v7);
}
