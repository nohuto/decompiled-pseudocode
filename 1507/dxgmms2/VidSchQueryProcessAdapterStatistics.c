/*
 * XREFs of VidSchQueryProcessAdapterStatistics @ 0x1C0044FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryProcessAdapterStatistics(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 40);
  return 0LL;
}
