/*
 * XREFs of MiFlushTbListEarly @ 0x1401118F0
 * Callers:
 *     MiReplenishBitMap @ 0x140012E20 (MiReplenishBitMap.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9

  v2 = qword_14034EBD8;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11] )
    v2 = -1LL;
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1);
  }
  return 1LL;
}
