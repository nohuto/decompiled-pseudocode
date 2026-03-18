/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180123A0C
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180126460 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18005EEA8 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 */

bool __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  bool IsAxisAlignedRectangle; // di
  CShape *DxClipShapeNoRef; // rax
  CShape *v5; // [rsp+30h] [rbp+8h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( !*((_QWORD *)this + 124)
    || (v5 = 0LL, CWindowNode::GetSpriteClipShape(this, &v5), !v5)
    || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(v5)) )
  {
    if ( *((_QWORD *)this + 141) || *((_QWORD *)this + 144) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
        return CShape::IsAxisAlignedRectangle(DxClipShapeNoRef);
    }
  }
  return IsAxisAlignedRectangle;
}
