/*
 * XREFs of FsRtlLookupBaseMcbEntry @ 0x14008FE10
 * Callers:
 *     FsRtlLookupLargeMcbEntry @ 0x1401B8310 (FsRtlLookupLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupBaseMcbEntry(
        PBASE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  int v7; // ebp
  signed int v8; // r11d
  signed int v11; // r10d
  ULONG v12; // eax
  _DWORD *Mapping; // rcx
  int v14; // r8d
  int v15; // ecx
  LONGLONG v17; // r9

  v7 = 0;
  v8 = Mcb->PairCount - 1;
  v11 = 0;
  if ( v8 < 0 )
    return 0;
  while ( 1 )
  {
    v12 = (v8 + v11) / 2;
    if ( v12 && (unsigned int)Vbn < *((_DWORD *)Mcb->Mapping + 2 * (int)(v12 - 1)) )
    {
      v8 = v12 - 1;
      goto LABEL_18;
    }
    Mapping = Mcb->Mapping;
    if ( (unsigned int)Vbn <= Mapping[2 * v12] - 1 )
      break;
    v11 = v12 + 1;
LABEL_18:
    if ( v11 > v8 )
      return 0;
  }
  if ( Lbn )
  {
    v14 = Mapping[2 * v12 + 1];
    if ( v14 == -1 )
    {
      *Lbn = -1LL;
    }
    else
    {
      if ( v12 )
        v15 = Mapping[2 * v12 - 2];
      else
        v15 = 0;
      *Lbn = (unsigned int)(Vbn + v14 - v15);
    }
  }
  if ( SectorCountFromLbn )
    *SectorCountFromLbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * v12) - Vbn);
  if ( StartingLbn )
  {
    v17 = *((unsigned int *)Mcb->Mapping + 2 * v12 + 1);
    if ( (_DWORD)v17 == -1 )
      *StartingLbn = -1LL;
    else
      *StartingLbn = v17;
  }
  if ( SectorCountFromStartingLbn )
  {
    if ( v12 )
      v7 = *((_DWORD *)Mcb->Mapping + 2 * v12 - 2);
    *SectorCountFromStartingLbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * v12) - v7);
  }
  if ( Index )
    *Index = v12;
  return 1;
}
