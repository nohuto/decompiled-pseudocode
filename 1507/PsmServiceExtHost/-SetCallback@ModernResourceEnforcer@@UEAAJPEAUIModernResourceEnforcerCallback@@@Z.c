/*
 * XREFs of ?SetCallback@ModernResourceEnforcer@@UEAAJPEAUIModernResourceEnforcerCallback@@@Z @ 0x180020730
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetCallback(ModernResourceEnforcer *this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rcx

  v3 = (struct IUnknown **)((char *)this + 64);
  if ( a2 )
  {
    if ( *v3 )
      v3 = (struct IUnknown **)((char *)this + 72);
    if ( *v3 != a2 )
      goto LABEL_5;
  }
  else
  {
    if ( *v3 )
      ATL::AtlComPtrAssign(v3, 0LL);
    v3 = (struct IUnknown **)((char *)this + 72);
    if ( *((_QWORD *)this + 9) )
    {
      a2 = 0LL;
LABEL_5:
      ATL::AtlComPtrAssign(v3, a2);
    }
  }
  return 0LL;
}
