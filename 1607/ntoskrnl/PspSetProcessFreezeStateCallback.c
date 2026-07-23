/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x1404CB60C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, __int64 a2)
{
  signed __int32 v2; // eax
  int v3; // r9d
  signed __int32 v4; // r8d

  v2 = *(_DWORD *)(a1 + 768);
  v3 = *(_DWORD *)(a2 + 8) << 28;
  do
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 768), v3 | v2 & 0xCFFFFFFF, v2);
  }
  while ( v2 != v4 );
  return 0LL;
}
