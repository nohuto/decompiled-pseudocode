/*
 * XREFs of FsRtlLookupLastBaseMcbEntryAndIndex @ 0x1400A9E90
 * Callers:
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401B8420 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupLastBaseMcbEntryAndIndex(
        PBASE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  int v4; // r10d
  ULONG PairCount; // ecx
  BOOLEAN result; // al
  _DWORD *Mapping; // rdx
  __int64 v10; // rax
  int v11; // edi
  int v12; // ecx
  int v13; // eax

  v4 = 0;
  PairCount = OpaqueMcb->PairCount;
  result = 0;
  if ( PairCount )
  {
    Mapping = OpaqueMcb->Mapping;
    v10 = PairCount - 1;
    v11 = Mapping[2 * v10 + 1];
    if ( v11 == -1 )
    {
      v13 = -1;
    }
    else
    {
      if ( (_DWORD)v10 )
        v12 = Mapping[2 * PairCount - 4];
      else
        v12 = 0;
      v13 = v11 + Mapping[2 * v10] - v12 - 1;
    }
    *(_DWORD *)LargeLbn = v13;
    *(_DWORD *)LargeVbn = *((_DWORD *)OpaqueMcb->Mapping + 2 * (OpaqueMcb->PairCount - 1)) - 1;
    *Index = OpaqueMcb->PairCount - 1;
    result = 1;
  }
  *((_DWORD *)LargeVbn + 1) = (*(_DWORD *)LargeVbn != -1) - 1;
  LOBYTE(v4) = *(_DWORD *)LargeLbn != -1;
  *((_DWORD *)LargeLbn + 1) = v4 - 1;
  return result;
}
