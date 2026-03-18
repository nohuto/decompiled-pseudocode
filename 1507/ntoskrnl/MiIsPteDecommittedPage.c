/*
 * XREFs of MiIsPteDecommittedPage @ 0x14010ECB0
 * Callers:
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(__int64 *a1)
{
  __int64 PteShadow; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, *a1);
  return (PteShadow & 0x3E0) == 0x200
      && (PteShadow & 1) == 0
      && ((PteShadow & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(PteShadow));
}
