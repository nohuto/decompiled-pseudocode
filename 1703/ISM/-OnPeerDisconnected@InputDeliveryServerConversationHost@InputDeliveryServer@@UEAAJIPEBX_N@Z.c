/*
 * XREFs of ?OnPeerDisconnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x18006B6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServerConversationHost::OnPeerDisconnected(
        InputDeliveryServer **this,
        int a2,
        const void *a3)
{
  return InputDeliveryServer::OnAppThreadDisconnected(this[2], a2);
}
