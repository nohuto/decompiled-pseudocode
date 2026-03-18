/*
 * XREFs of ?IsOverlayRevokable@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801429F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayRevokable(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 52);
  result = 1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 112) + 80LL))(v1 + 112);
  return result;
}
