/*
 * XREFs of GreGetBitmapBits @ 0x140326818
 * Callers:
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1402EE7B8 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 * Callees:
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1400A5648 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 */

__int64 __fastcall GreGetBitmapBits(Gre::Base *a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[1] = a2;
  v5[0] = a3;
  v5[2] = 0LL;
  v6 = 0;
  return GreGetBitmapBitsInternal(a1, (__int64)v5, a4);
}
