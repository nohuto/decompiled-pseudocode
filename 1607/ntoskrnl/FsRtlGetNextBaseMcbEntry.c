/*
 * XREFs of FsRtlGetNextBaseMcbEntry @ 0x140092290
 * Callers:
 *     FsRtlGetNextLargeMcbEntry @ 0x1401B8248 (FsRtlGetNextLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlGetNextBaseMcbEntry(
        PBASE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  int v7; // r11d
  int v8; // r8d
  int v9; // eax
  __int64 v10; // r8
  int v11; // ecx

  if ( RunIndex >= Mcb->PairCount )
    return 0;
  v7 = 0;
  if ( RunIndex )
  {
    v8 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex - 2);
    *(_DWORD *)Vbn = v8;
    if ( v8 == -1 )
    {
      v9 = -1;
      goto LABEL_5;
    }
  }
  else
  {
    *(_DWORD *)Vbn = 0;
  }
  v9 = 0;
LABEL_5:
  *((_DWORD *)Vbn + 1) = v9;
  v10 = 8LL * RunIndex;
  v11 = *(_DWORD *)((char *)Mcb->Mapping + v10 + 4);
  *(_DWORD *)Lbn = v11;
  *((_DWORD *)Lbn + 1) = (v11 != -1) - 1;
  if ( RunIndex )
    v7 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex - 2);
  *SectorCount = (unsigned int)(*(_DWORD *)((char *)Mcb->Mapping + v10) - v7);
  return 1;
}
