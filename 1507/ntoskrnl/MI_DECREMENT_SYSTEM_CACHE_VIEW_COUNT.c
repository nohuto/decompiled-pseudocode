/*
 * XREFs of MI_DECREMENT_SYSTEM_CACHE_VIEW_COUNT @ 0x1402176FC
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

char __fastcall MI_DECREMENT_SYSTEM_CACHE_VIEW_COUNT(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v5; // rcx
  char result; // al
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0x90482413000LL;
  v2 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = 2040LL;
  PteShadow = *v2;
  if ( (unsigned __int64)(v2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v2, *v2);
  v7 = PteShadow;
  if ( (unsigned __int64)&v7 + v1 <= v3 )
    PteShadow = MiReadPteShadow(&v7, PteShadow);
  v5 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  result = *(_BYTE *)(v5 + 39) - 1;
  *(_BYTE *)(v5 + 39) = result;
  return result;
}
