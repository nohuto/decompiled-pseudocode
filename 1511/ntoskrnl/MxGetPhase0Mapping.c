/*
 * XREFs of MxGetPhase0Mapping @ 0x140748514
 * Callers:
 *     MxCopyPage @ 0x140747934 (MxCopyPage.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140748414 (MxFillPhysicalPage.c)
 * Callees:
 *     <none>
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx

  if ( MiHalScratchPte )
    return MiHalScratchPte << 25 >> 16;
  v1 = (((unsigned __int64)MiLowHalVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_9:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v2 = (__int64)(v1 << 25) >> 16;
  while ( *(_QWORD *)v2 )
  {
    v2 += 8LL;
    if ( (v2 & 0xFFF) == 0 )
      goto LABEL_9;
  }
  MiHalScratchPte = v2;
  return v2 << 25 >> 16;
}
