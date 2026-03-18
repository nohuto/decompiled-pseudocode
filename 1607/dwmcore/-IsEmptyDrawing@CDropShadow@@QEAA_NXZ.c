/*
 * XREFs of ?IsEmptyDrawing@CDropShadow@@QEAA_NXZ @ 0x18014FA8C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x180138F90 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsEmptyDrawing(CDropShadow *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 24);
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 152LL))(v1) )
    return 1;
  return v2;
}
