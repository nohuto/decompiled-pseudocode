/*
 * XREFs of MI_SET_SYSTEM_CACHE_REVERSE_MAP @ 0x14021781C
 * Callers:
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_SET_SYSTEM_CACHE_REVERSE_MAP(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  unsigned __int64 PteShadow; // rax
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0x90482413000LL;
  v3 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v4 = 2040LL;
  v5 = a2;
  PteShadow = *v3;
  if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v3, *v3);
  v8 = PteShadow;
  if ( (unsigned __int64)&v8 + v2 <= v4 )
    PteShadow = MiReadPteShadow(&v8, PteShadow);
  result = ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x1D55555555LL;
  *(_QWORD *)(48 * result) = v5;
  return result;
}
