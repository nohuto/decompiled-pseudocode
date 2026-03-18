/*
 * XREFs of ?HasAtlasedContent@CVisual@@MEBA_NXZ @ 0x180050D00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18000A3B0 (-IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004DA60 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AD870 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CVisual::HasAtlasedContent(CVisual *this)
{
  __int64 v1; // rcx
  bool (__fastcall *v3)(__int64, int); // rax
  char v4; // al

  v1 = *((_QWORD *)this + 38);
  if ( !v1 )
    return 0LL;
  v3 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v1 + 48LL);
  if ( v3 == CRenderData::IsOfType )
    return 0LL;
  if ( (char *)v3 == (char *)CPrimitiveGroup::IsOfType )
  {
    v4 = CPrimitiveGroup::IsOfType(v1, 97);
  }
  else if ( (char *)v3 == (char *)CPrimitiveGroupLayerClip::IsOfType )
  {
    v4 = CPrimitiveGroupLayerClip::IsOfType(v1, 97LL);
  }
  else if ( (char *)v3 == (char *)CHwndBitmap::IsOfType )
  {
    v4 = CHwndBitmap::IsOfType(v1, 97);
  }
  else
  {
    v4 = v3(v1, 97);
  }
  return v4 != 0;
}
