/*
 * XREFs of ?OnAcquired@ResourceSetServerProxy@@UEAAJPEAX@Z @ 0x18003A590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetServerProxy::OnAcquired(ResourceSetServerProxy *this, void *a2)
{
  return ResourceSetServerProxy::SendData(this, a2, 0LL, 0xFFFFFFFFLL);
}
