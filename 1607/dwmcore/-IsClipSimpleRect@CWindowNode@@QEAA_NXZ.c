/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x18014032C
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180142CC0 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180026748 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 */

char __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  char IsAxisAlignedRectangle; // di
  CShape *DxClipShapeNoRef; // rax
  CShape *v5; // [rsp+30h] [rbp+8h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( !*((_QWORD *)this + 100)
    || (v5 = 0LL, CWindowNode::GetSpriteClipShape((struct D2D_SIZE_F *)this, &v5), !v5)
    || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(v5)) != 0 )
  {
    if ( *((_QWORD *)this + 117) || *((_QWORD *)this + 120) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
        return CShape::IsAxisAlignedRectangle(DxClipShapeNoRef);
    }
  }
  return IsAxisAlignedRectangle;
}
