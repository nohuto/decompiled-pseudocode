/*
 * XREFs of MxGetPhase0Mapping @ 0x14079826C
 * Callers:
 *     MxCopyPage @ 0x1407977D0 (MxCopyPage.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x140798170 (MxFillPhysicalPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // r9
  __int64 v4; // r9

  if ( MiHalScratchPte )
    return MiHalScratchPte << 25 >> 16;
  v1 = (((unsigned __int64)MiLowHalVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = 0xFFFFF68000000000uLL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_9:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v3 = (__int64)((v1 << 25) - (v2 << 25)) >> 16;
  while ( MI_READ_PTE_LOCK_FREE(v3) )
  {
    v3 = v4 + 8;
    if ( (v3 & 0xFFF) == 0 )
      goto LABEL_9;
  }
  MiHalScratchPte = v4;
  return (__int64)((v4 << 25) - (v2 << 25)) >> 16;
}
