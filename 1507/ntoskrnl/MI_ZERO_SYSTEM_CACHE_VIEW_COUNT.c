/*
 * XREFs of MI_ZERO_SYSTEM_CACHE_VIEW_COUNT @ 0x1402178AC
 * Callers:
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

unsigned __int64 __fastcall MI_ZERO_SYSTEM_CACHE_VIEW_COUNT(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 PteShadow; // rax
  __int64 v5; // rcx
  unsigned __int64 result; // rax
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
  result = 0xFFFFFA8000000027uLL;
  *(_BYTE *)(16 * v5 - 0x57FFFFFFFD9LL) = 0;
  return result;
}
