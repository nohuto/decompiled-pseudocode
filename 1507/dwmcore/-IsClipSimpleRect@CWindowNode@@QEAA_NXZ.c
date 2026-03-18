/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180105358
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18010AAB0 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180079C3C (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 */

bool __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  bool IsAxisAlignedRectangle; // di
  CShape *DxClipShapeNoRef; // rax
  CShape *v5; // [rsp+30h] [rbp+8h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( !*((_QWORD *)this + 130)
    || (v5 = 0LL, CWindowNode::GetSpriteClipShape(this, &v5), !v5)
    || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(v5)) )
  {
    if ( *((_QWORD *)this + 147) || *((_QWORD *)this + 150) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
        return CShape::IsAxisAlignedRectangle(DxClipShapeNoRef);
    }
  }
  return IsAxisAlignedRectangle;
}
