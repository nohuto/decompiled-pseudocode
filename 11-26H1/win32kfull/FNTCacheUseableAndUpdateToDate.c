/*
 * XREFs of FNTCacheUseableAndUpdateToDate @ 0x14031B088
 * Callers:
 *     ?FNTCachepInit@@YAXPEBG@Z @ 0x1401C5E88 (-FNTCachepInit@@YAXPEBG@Z.c)
 * Callees:
 *     FNTCacheUseable @ 0x140294364 (FNTCacheUseable.c)
 */

bool __fastcall FNTCacheUseableAndUpdateToDate(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v5; // r8
  bool result; // al

  result = FNTCacheUseable(a1, a2, a3)
        && (v5 = *(_QWORD *)(a1 + 8), *(_QWORD *)(v5 + 56) == a2[2])
        && *(_QWORD *)(v5 + 64) == a2[3]
        && (*(_DWORD *)(a1 + 20) & 2) == 0;
  return result;
}
