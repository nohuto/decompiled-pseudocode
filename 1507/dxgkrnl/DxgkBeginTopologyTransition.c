/*
 * XREFs of DxgkBeginTopologyTransition @ 0x1C00B1670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkBeginTopologyTransition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + 125);
  return 0LL;
}
