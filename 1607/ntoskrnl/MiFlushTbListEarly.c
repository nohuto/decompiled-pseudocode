/*
 * XREFs of MiFlushTbListEarly @ 0x140089820
 * Callers:
 *     MiReplenishBitMap @ 0x140089320 (MiReplenishBitMap.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140129C50 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 * Callees:
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9

  v2 = qword_140326A18;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[14] )
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
