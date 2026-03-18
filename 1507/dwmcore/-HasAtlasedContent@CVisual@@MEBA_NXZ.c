/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x1800361C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

_BOOL8 __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(__int64, __int64); // rdi
  char v4; // al

  v1 = *((_QWORD *)this + 47);
  if ( !v1 )
    return 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
  if ( v3 == CRenderData::IsOfType )
    return 0LL;
  if ( v3 == CPrimitiveGroup::IsOfType )
    v4 = CPrimitiveGroup::IsOfType(v1, 84LL);
  else
    v4 = v3(v1, 84LL);
  return v4 != 0;
}
