/*
 * XREFs of VidSchiFlushQueuePacket @ 0x1C0017668
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0006C00 (VidSchFlushQueuePackets.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0001460 (VidSchiSubmitPresentHistoryToken.c)
 */

void __fastcall VidSchiFlushQueuePacket(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 && (*(_DWORD *)(a2 + 72) & 0x80100) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      VidSchiSubmitPresentHistoryToken(a2);
      *(_QWORD *)(a2 + 136) = 0LL;
    }
  }
}
