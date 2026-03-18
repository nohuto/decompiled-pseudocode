/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x1800163F4
 * Callers:
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180016350 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x180080F54 (-SetSourceModifications@CMILBrushBitmap@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModification.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CColorKey::IsNonEmpty(CColorKey *this)
{
  return *((float *)this + 7) >= *((float *)this + 3)
      && *((float *)this + 4) >= *(float *)this
      && *((float *)this + 5) >= *((float *)this + 1)
      && *((float *)this + 6) >= *((float *)this + 2);
}
