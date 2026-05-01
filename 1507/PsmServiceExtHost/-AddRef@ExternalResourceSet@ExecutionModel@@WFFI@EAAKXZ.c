/*
 * XREFs of ?AddRef@ExternalResourceSet@ExecutionModel@@WFFI@EAAKXZ @ 0x180025100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::AddRef(__int64 a1)
{
  return ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)(a1 - 1368));
}
