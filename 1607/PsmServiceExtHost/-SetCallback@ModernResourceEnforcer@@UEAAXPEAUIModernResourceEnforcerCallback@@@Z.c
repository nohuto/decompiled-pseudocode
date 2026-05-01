/*
 * XREFs of ?SetCallback@ModernResourceEnforcer@@UEAAXPEAUIModernResourceEnforcerCallback@@@Z @ 0x18001CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall ModernResourceEnforcer::SetCallback(ModernResourceEnforcer *this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rcx

  v3 = (struct IUnknown **)((char *)this + 80);
  if ( a2 )
  {
    if ( *v3 )
      v3 = (struct IUnknown **)((char *)this + 88);
    if ( *v3 != a2 )
      goto LABEL_5;
  }
  else
  {
    if ( *v3 )
      ATL::AtlComPtrAssign(v3, 0LL);
    v3 = (struct IUnknown **)((char *)this + 88);
    if ( *((_QWORD *)this + 11) )
    {
      a2 = 0LL;
LABEL_5:
      ATL::AtlComPtrAssign(v3, a2);
    }
  }
}
