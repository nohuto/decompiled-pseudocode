/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180079D74
 * Callers:
 *     ?UpdateSpriteClipShape@CWindowNode@@AEAAJXZ @ 0x180079CD0 (-UpdateSpriteClipShape@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18007824C (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 */

char __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  char v1; // bl
  CShape *DxClipShapeNoRef; // rax

  v1 = 0;
  if ( *((_QWORD *)this + 147) || *((_QWORD *)this + 150) )
  {
    if ( *((_BYTE *)this + 1256) )
    {
      DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
      if ( DxClipShapeNoRef )
        return !CShape::IsEmpty(DxClipShapeNoRef);
    }
  }
  return v1;
}
