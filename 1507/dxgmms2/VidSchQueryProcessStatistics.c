/*
 * XREFs of VidSchQueryProcessStatistics @ 0x1C0044FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryProcessStatistics(__int64 a1, __int64 a2, _DWORD *a3)
{
  *a3 = *(_DWORD *)(a1 + 56);
  a3[1] = *(_DWORD *)(a1 + 40);
  return 0LL;
}
