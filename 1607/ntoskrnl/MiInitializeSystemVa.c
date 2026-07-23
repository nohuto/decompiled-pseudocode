/*
 * XREFs of MiInitializeSystemVa @ 0x1407AA428
 * Callers:
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 * Callees:
 *     MiAssignSharedUserRanges @ 0x14013D710 (MiAssignSharedUserRanges.c)
 *     MiAssignSessionRanges @ 0x1407AAAD8 (MiAssignSessionRanges.c)
 *     MiAssignTopLevelRanges @ 0x1407AACF4 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x1407AB088 (MiInitializeTopLevelBitmap.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // eax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 8) != 0 )
    MiFlags |= 0x200000u;
  v2 = 16;
  v3 = 8;
  do
  {
    while ( 1 )
    {
      MiInitializeTopLevelBitmap();
      v4 = MiAssignTopLevelRanges(v2);
      if ( v4 )
        goto LABEL_5;
      if ( !v3 )
        break;
      --v3;
    }
    v3 = 8;
LABEL_5:
    v2 >>= 1;
  }
  while ( !v4 );
  MiAssignSessionRanges();
  MiAssignSharedUserRanges(a1);
  return MiRebaseDynamicRelocationRegions(a1);
}
