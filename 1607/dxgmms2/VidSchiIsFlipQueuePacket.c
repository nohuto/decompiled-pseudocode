/*
 * XREFs of VidSchiIsFlipQueuePacket @ 0x1C0012B90
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C000ED10 (VidSchFlushQueuePackets.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsFlipQueuePacket(_DWORD *a1, int a2)
{
  return ((a1[18] & 0x80004) != 0 || a1[12] == 3) && (a1[95] == a2 || a2 == -1);
}
