/*
 * XREFs of ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002BBD0
 * Callers:
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001BF0C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001BF60 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJXZ @ 0x18001C010 (-UpdateLayout@CButton@@UEAAJXZ.c)
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
