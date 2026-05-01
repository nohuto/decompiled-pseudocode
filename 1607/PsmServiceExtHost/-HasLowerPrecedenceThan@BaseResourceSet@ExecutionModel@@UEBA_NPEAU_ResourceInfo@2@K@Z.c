/*
 * XREFs of ?HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x1800115B0
 * Callers:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan(
        ExecutionModel::BaseResourceSet *this,
        struct ExecutionModel::_ResourceInfo *a2)
{
  return *((_DWORD *)a2 + 4) < *((_DWORD *)this + 6 * *(int *)a2 + 52);
}
