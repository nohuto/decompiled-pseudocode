/*
 * XREFs of MI_GET_SYSTEM_CACHE_REVERSE_MAP @ 0x140116EB8
 * Callers:
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_GET_SYSTEM_CACHE_REVERSE_MAP(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // r11
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // rcx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  v2 = 0x90482413000LL;
  v3 = 2040LL;
  v4 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v4, *v4);
  v7 = PteShadow;
  if ( (unsigned __int64)&v7 + v2 <= v3 )
    PteShadow = MiReadPteShadow(&v7, PteShadow);
  return *(_QWORD *)(48 * (((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x1D55555555LL)) + 40 * ((v1 >> 18) & 7);
}
