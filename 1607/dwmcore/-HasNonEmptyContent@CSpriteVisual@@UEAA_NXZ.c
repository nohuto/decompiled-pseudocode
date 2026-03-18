/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x180138F90
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x18004FDE0 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?IsEmptyDrawing@CDropShadow@@QEAA_NXZ @ 0x18014FA8C (-IsEmptyDrawing@CDropShadow@@QEAA_NXZ.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CDropShadow **this)
{
  char v2; // bl
  CDropShadow *v3; // rcx

  v2 = 0;
  if ( CVisual::HasNonEmptyContent((CVisual *)this) )
    return 1;
  v3 = this[69];
  if ( v3 )
  {
    if ( !CDropShadow::IsEmptyDrawing(v3) )
      return 1;
  }
  return v2;
}
