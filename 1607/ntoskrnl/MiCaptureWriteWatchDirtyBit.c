/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1400AA768
 * Callers:
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiRevertValidPte @ 0x1400E17F0 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiMakeCombineCandidateClean @ 0x1401F9F74 (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140015564 (MiLocateVadEvent.c)
 *     MiLocateAddress @ 0x14001F090 (MiLocateAddress.c)
 */

char __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 VadEvent; // rax
  unsigned __int64 v4; // r10

  LODWORD(VadEvent) = *(_DWORD *)(a1 + 772);
  if ( (VadEvent & 0x20) == 0 )
  {
    if ( a3 || (VadEvent = MiLocateAddress(a2), (a3 = VadEvent) != 0) )
    {
      LODWORD(VadEvent) = *(_DWORD *)(a3 + 48);
      if ( (VadEvent & 0x80000) == 0 )
      {
        LOBYTE(VadEvent) = VadEvent & 7;
        if ( (_BYTE)VadEvent == 4 )
        {
          VadEvent = (unsigned __int64)MiLocateVadEvent(a3, 4);
          _bittestandset64(*(signed __int64 **)(VadEvent + 24), v4);
        }
      }
    }
  }
  return VadEvent;
}
