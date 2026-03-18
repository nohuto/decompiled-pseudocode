/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1401228AC
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiMakeCombineCandidateClean @ 0x14022AB3C (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 */

char __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 VadEvent; // rax
  unsigned __int64 v5; // rbx

  LODWORD(VadEvent) = *(_DWORD *)(a1 + 772);
  if ( (VadEvent & 0x20) == 0 )
  {
    if ( a3 || (VadEvent = (__int64)MiLocateAddress(a2), (a3 = VadEvent) != 0) )
    {
      LODWORD(VadEvent) = *(_DWORD *)(a3 + 48);
      if ( (int)VadEvent >= 0 )
      {
        LOBYTE(VadEvent) = VadEvent & 7;
        if ( (_BYTE)VadEvent == 4 )
        {
          v5 = (a2 >> 12) - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32));
          VadEvent = MiLocateVadEvent(a3, 4LL);
          _bittestandset64(*(signed __int64 **)(VadEvent + 24), v5);
        }
      }
    }
  }
  return VadEvent;
}
