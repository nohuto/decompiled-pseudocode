/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x18004FDE0
 * Callers:
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x180138F90 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  _QWORD *v1; // rcx
  unsigned __int8 (*v2)(void); // rax

  v1 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v1 )
  {
    v2 = *(unsigned __int8 (**)(void))(*v1 + 152LL);
    if ( (char *)v2 == (char *)CPrimitiveGroup::IsEmptyDrawing )
    {
      if ( v1[57] )
        return 1;
    }
    else if ( !v2() )
    {
      return 1;
    }
  }
  return 0;
}
