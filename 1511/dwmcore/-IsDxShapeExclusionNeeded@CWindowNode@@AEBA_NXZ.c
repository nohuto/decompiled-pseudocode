/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x18005EFE0
 * Callers:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x18005EF3C (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 */

char __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  char v1; // bl
  CShape *DxClipShapeNoRef; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 141) || *((_QWORD *)this + 144) )
  {
    if ( *((_BYTE *)this + 1208) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
        return (unsigned __int8)CShape::IsEmpty(DxClipShapeNoRef) == 0;
    }
  }
  return v1;
}
