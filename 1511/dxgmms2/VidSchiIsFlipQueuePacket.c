/*
 * XREFs of VidSchiIsFlipQueuePacket @ 0x1C00153C4
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0010DB0 (VidSchFlushQueuePackets.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsFlipQueuePacket(_DWORD *a1, int a2)
{
  return ((a1[18] & 0x80004) != 0 || a1[12] == 3) && (a1[93] == a2 || a2 == -1);
}
