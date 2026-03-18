/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x1400EF48C
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiMakeCombineCandidateClean @ 0x14012A4AC (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 */

char __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 VadEvent; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // r10

  LODWORD(VadEvent) = *(_DWORD *)(a1 + 772);
  if ( (VadEvent & 0x20) == 0 )
  {
    if ( a3 || (VadEvent = MiLocateAddress(a2), (a3 = VadEvent) != 0) )
    {
      LODWORD(VadEvent) = MiVadDeleted(a3);
      if ( (_DWORD)VadEvent != 1 )
      {
        LOBYTE(VadEvent) = *(_DWORD *)(v4 + 48) & 7;
        if ( (_BYTE)VadEvent == 4 )
        {
          VadEvent = (unsigned __int64)MiLocateVadEvent(v4, 4);
          _bittestandset64(*(signed __int64 **)(VadEvent + 24), v5);
        }
      }
    }
  }
  return VadEvent;
}
