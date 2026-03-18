/*
 * XREFs of ?SetReceiveBroadcastMessages@CChannel@@UEAAXH@Z @ 0x18004A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CChannel::SetReceiveBroadcastMessages(CChannel *this, int a2)
{
  *((_BYTE *)this + 226) = a2 != 0;
}
