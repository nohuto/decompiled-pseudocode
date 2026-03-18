/*
 * XREFs of ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x1C00F36F4
 * Callers:
 *     ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C001B7B0 (-OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00F48EC (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurface::NotifyBuffersOfDwmTermination(CCompositionSurface *this)
{
  char *v1; // rdi
  char *i; // rbx

  if ( *((_DWORD *)this + 20) )
  {
    v1 = (char *)this + 64;
    for ( i = (char *)*((_QWORD *)this + 8); i != v1; i = *(char **)i )
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 3) + 48LL))((_QWORD *)i - 3);
  }
}
