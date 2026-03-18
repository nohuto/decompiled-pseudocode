/*
 * XREFs of ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FD20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180010330 (-IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsDirectFlipCompatible; // al

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 112);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 112) + 88LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsDirectFlipCompatible )
      IsDirectFlipCompatible = CDxHandleBitmapRealization::IsDirectFlipCompatible(v4);
    else
      IsDirectFlipCompatible = v5();
    if ( IsDirectFlipCompatible )
      return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 1u;
  }
  return v2;
}
