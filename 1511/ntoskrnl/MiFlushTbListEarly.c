/*
 * XREFs of MiFlushTbListEarly @ 0x140015ED0
 * Callers:
 *     MiReplenishBitMap @ 0x140013C80 (MiReplenishBitMap.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, __int64 a2, _KPROCESS *Process)
{
  unsigned __int64 v3; // r9

  v3 = qword_1402FE720;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[12] )
      v3 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v3 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v3 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1, a2, Process);
  }
  return 1LL;
}
