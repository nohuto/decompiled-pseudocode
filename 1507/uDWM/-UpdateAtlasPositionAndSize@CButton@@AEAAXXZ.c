/*
 * XREFs of ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18001A4D4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001A070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800292D4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180029338 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 */

void __fastcall CButton::UpdateAtlasPositionAndSize(CButton *this)
{
  CButton **v2; // rcx
  const struct tagPOINT *v3; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  CAtlasedImage::SetSize(*((CAtlasedImage **)this + 39), (const struct tagSIZE *)this + 14);
  v2 = (CButton **)*((_QWORD *)this + 39);
  if ( v2[10] == this )
  {
    v4 = 0;
    v3 = (const struct tagPOINT *)&v4;
    v5 = 0;
  }
  else
  {
    v3 = (const struct tagPOINT *)((char *)this + 104);
  }
  CAtlasedImage::SetOffset((CAtlasedImage *)v2, v3);
}
