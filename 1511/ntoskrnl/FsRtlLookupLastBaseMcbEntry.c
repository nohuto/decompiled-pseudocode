/*
 * XREFs of FsRtlLookupLastBaseMcbEntry @ 0x1400DF210
 * Callers:
 *     FsRtlLookupLastLargeMcbEntry @ 0x1401AC644 (FsRtlLookupLastLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntry(PBASE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ULONG PairCount; // ecx
  __int64 v6; // r10
  _DWORD *Mapping; // rbx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ecx

  PairCount = Mcb->PairCount;
  if ( !PairCount )
    return 0;
  v6 = PairCount - 1;
  Mapping = Mcb->Mapping;
  v8 = -1;
  v9 = Mapping[2 * v6 + 1];
  if ( v9 != -1 )
  {
    if ( PairCount == 1 )
      v10 = 0;
    else
      v10 = Mapping[2 * PairCount - 4];
    v8 = v9 - v10 + Mapping[2 * v6] - 1;
  }
  *Lbn = v8;
  *Vbn = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * (Mcb->PairCount - 1)) - 1);
  return 1;
}
