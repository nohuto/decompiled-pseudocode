/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180048BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180091E00 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

_BOOL8 __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(__int64, __int64); // rdi
  char v4; // al

  v1 = *((_QWORD *)this + 45);
  if ( !v1 )
    return 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL);
  if ( v3 == CRenderData::IsOfType )
    return 0LL;
  if ( v3 == CPrimitiveGroup::IsOfType )
    v4 = CPrimitiveGroup::IsOfType(v1, 92LL);
  else
    v4 = v3(v1, 92LL);
  return v4 != 0;
}
