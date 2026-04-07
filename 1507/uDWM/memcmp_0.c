/*
 * XREFs of memcmp_0 @ 0x1800498AE
 * Callers:
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180014928 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18001684C (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x18003D9E8 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800725DC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800768C8 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
