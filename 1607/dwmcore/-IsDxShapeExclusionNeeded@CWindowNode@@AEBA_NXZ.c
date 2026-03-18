/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180026878
 * Callers:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x1800267DC (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 */

char __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  char v1; // bl
  CShape *DxClipShapeNoRef; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 117) || *((_QWORD *)this + 120) )
  {
    if ( *((_BYTE *)this + 1016) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
        return !CShape::IsEmpty(DxClipShapeNoRef);
    }
  }
  return v1;
}
