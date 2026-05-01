/*
 * XREFs of ?AddRef@ResourceSetImpl@ExecutionModel@@W7EAAKXZ @ 0x18002BF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::AddRef(__int64 a1)
{
  return ResourceSetServerProxy::AddRef((ResourceSetServerProxy *)(a1 - 8));
}
