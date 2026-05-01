/*
 * XREFs of ?OnOutOfMemory@ResourceSetServerProxy@@UEAAJPEAX@Z @ 0x1800333B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetServerProxy::OnOutOfMemory(ResourceSetServerProxy *this, void *a2)
{
  return ResourceSetServerProxy::SendData(this, a2, 3LL, 0xFFFFFFFFLL);
}
