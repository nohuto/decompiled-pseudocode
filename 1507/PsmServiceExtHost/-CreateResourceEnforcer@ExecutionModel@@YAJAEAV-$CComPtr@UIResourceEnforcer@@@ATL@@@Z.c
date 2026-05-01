/*
 * XREFs of ?CreateResourceEnforcer@ExecutionModel@@YAJAEAV?$CComPtr@UIResourceEnforcer@@@ATL@@@Z @ 0x180021494
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 ExecutionModel::CreateResourceEnforcer()
{
  unsigned int v0; // esi
  ExecutionModel *v1; // r14

  v0 = 0;
  v1 = (ExecutionModel *)malloc(0x10uLL);
  if ( v1 )
  {
    *(_QWORD *)v1 = &ExecutionModel::ResourceEnforcer::`vftable';
    *((_DWORD *)v1 + 2) = 1;
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
  {
    if ( g_pEnforcer )
      (*(void (__fastcall **)(ExecutionModel *))(*(_QWORD *)g_pEnforcer + 16LL))(g_pEnforcer);
    g_pEnforcer = v1;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v0;
}
