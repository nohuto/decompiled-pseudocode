/*
 * XREFs of ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@@Z @ 0x1801511F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionPointLight::IsValid(CCompositionPointLight *this, const struct CVisualTree *a2)
{
  struct CVisual *v4; // rax

  v4 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionPointLight *))(*(_QWORD *)this + 112LL))(this);
  return CCompositionLight::IsValidCoordinateSpace(this, a2, v4);
}
