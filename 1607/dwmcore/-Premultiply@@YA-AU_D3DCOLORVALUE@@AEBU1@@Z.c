/*
 * XREFs of ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1800C019C
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98 (-UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAV.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

struct _D3DCOLORVALUE *__fastcall Premultiply(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  struct _D3DCOLORVALUE *result; // rax
  __int128 v3; // [rsp+0h] [rbp-28h]

  result = retstr;
  HIDWORD(v3) = LODWORD(a2->a);
  *(float *)&v3 = *((float *)&v3 + 3) * a2->r;
  *((float *)&v3 + 1) = *((float *)&v3 + 3) * a2->g;
  *((float *)&v3 + 2) = *((float *)&v3 + 3) * a2->b;
  *(_OWORD *)&retstr->r = v3;
  return result;
}
