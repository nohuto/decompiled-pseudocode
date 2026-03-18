/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x1C00141A8
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     Template_pq @ 0x1C001D234 (Template_pq.c)
 */

__int64 __fastcall VidSchiCheckYieldExitCondition(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1896) && (v5 = *(_QWORD *)(a1 + 1880)) != 0 && (v6 = *(_QWORD *)(a1 + 1888) + v5, a2 > v6) )
  {
    *(_QWORD *)(a1 + 1880) = 0LL;
    *(_BYTE *)(a1 + 1896) = 0;
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      result = Template_pq(
                 v6,
                 &EventYieldStopNode,
                 0LL,
                 *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL),
                 *(unsigned __int16 *)(a1 + 4));
    *a3 = 1;
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
