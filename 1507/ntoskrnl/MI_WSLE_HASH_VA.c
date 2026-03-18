/*
 * XREFs of MI_WSLE_HASH_VA @ 0x140108EB4
 * Callers:
 *     MiTryLocateWsle @ 0x140095390 (MiTryLocateWsle.c)
 *     MiUpdateWsle @ 0x1400BE660 (MiUpdateWsle.c)
 *     MiReplaceWsleHash @ 0x140108E30 (MiReplaceWsleHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_WSLE_HASH_VA(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  if ( (a2 & 0x800000000000LL) != 0 )
    v2 = a2 | 0xFFFF000000000000uLL;
  else
    v2 = a2 & 0xFFFFFFFFFFFFLL;
  return *(_QWORD *)(a1 + 96) + 8 * ((v2 - *(_QWORD *)(a1 + 80)) >> 12);
}
