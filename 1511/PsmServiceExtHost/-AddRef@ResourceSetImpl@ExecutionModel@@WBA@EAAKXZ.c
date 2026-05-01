/*
 * XREFs of ?AddRef@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ @ 0x18002BFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::AddRef(__int64 a1)
{
  return ResourceSetServerProxy::AddRef((ResourceSetServerProxy *)(a1 - 16));
}
