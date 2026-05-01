/*
 * XREFs of ?OnCommitWarning@ResourceSetServerProxy@@UEAAJPEAX@Z @ 0x180033390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetServerProxy::OnCommitWarning(ResourceSetServerProxy *this, void *a2)
{
  return ResourceSetServerProxy::SendData(this, a2, 2LL, 0xFFFFFFFFLL);
}
