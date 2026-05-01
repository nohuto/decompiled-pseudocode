/*
 * XREFs of ?CreateResourceEnforcer@ExecutionModel@@YAJAEAV?$CComPtr@UIResourceEnforcer@@@ATL@@@Z @ 0x18001CDE0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001E760 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 ExecutionModel::CreateResourceEnforcer()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rdi

  v0 = 0;
  v1 = operator new(0x10uLL);
  if ( v1 )
  {
    *(_QWORD *)v1 = &ExecutionModel::ResourceEnforcer::`vftable';
    v1[2] = 1;
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
  {
    if ( g_pEnforcer )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)g_pEnforcer + 16LL))(g_pEnforcer);
    g_pEnforcer = (__int64)v1;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v0;
}
