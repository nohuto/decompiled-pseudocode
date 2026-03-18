/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800486A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  _QWORD *v1; // rbx
  bool (__fastcall *v2)(CPrimitiveGroup *__hidden); // rdi

  v1 = (_QWORD *)*((_QWORD *)this + 45);
  if ( !v1 )
    return 0;
  v2 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*v1 + 144LL);
  if ( v2 != CPrimitiveGroup::IsEmptyDrawing )
    return !v2(*((CPrimitiveGroup **)this + 45));
  return v1[47] != 0;
}
