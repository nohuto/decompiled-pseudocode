/*
 * XREFs of MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT @ 0x140217790
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v5; // rcx
  __int64 result; // rax
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
  v5 = 3 * ((PteShadow >> 12) & 0xFFFFFFFFFLL);
  result = 0x58000000000LL;
  ++*(_BYTE *)(16 * v5 - 0x58000000000LL + 39);
  return result;
}
