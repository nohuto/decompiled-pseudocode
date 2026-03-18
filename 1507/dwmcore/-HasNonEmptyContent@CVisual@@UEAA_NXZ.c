/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x180035BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  _QWORD *v1; // rbx
  bool (__fastcall *v2)(CPrimitiveGroup *__hidden); // rdi

  v1 = (_QWORD *)*((_QWORD *)this + 47);
  if ( !v1 )
    return 0;
  v2 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden))(*v1 + 136LL);
  if ( v2 != CPrimitiveGroup::IsEmptyDrawing )
    return !v2(*((CPrimitiveGroup **)this + 47));
  return v1[47] != 0;
}
