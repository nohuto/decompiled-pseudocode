/*
 * XREFs of VidSchiFlushQueuePacket @ 0x1C0020DB4
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0010DB0 (VidSchFlushQueuePackets.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0021DD0 (VidSchiSubmitPresentHistoryToken.c)
 */

__int64 __fastcall VidSchiFlushQueuePacket(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( !a3 && (*(_DWORD *)(a2 + 72) & 0x40080) != 0 )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      result = VidSchiSubmitPresentHistoryToken(a2);
      *(_QWORD *)(a2 + 136) = 0LL;
    }
  }
  return result;
}
