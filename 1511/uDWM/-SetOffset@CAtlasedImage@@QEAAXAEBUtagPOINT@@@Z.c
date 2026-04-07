/*
 * XREFs of ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002C348
 * Callers:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001F0B8 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001F110 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001F200 (-UpdateLayout@CButton@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::SetOffset(struct tagPOINT *this, const struct tagPOINT *a2)
{
  if ( a2->x != this[2].x || a2->y != this[2].y )
  {
    this[2] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1, 0x2000u);
  }
}
