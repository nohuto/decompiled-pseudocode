/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C00B1500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 193) != 0;
}
