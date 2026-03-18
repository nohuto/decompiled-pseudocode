/*
 * XREFs of MiSetInPagePriority @ 0x1400FDEE4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiSetInPagePrefetchPriority @ 0x1400FE6DC (MiSetInPagePrefetchPriority.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 * Callees:
 *     <none>
 */

char __fastcall MiSetInPagePriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  char result; // al

  if ( a2 > a3 && a3 < 5 )
    *(_BYTE *)(a1 + 191) |= 4u;
  else
    *(_BYTE *)(a1 + 191) &= ~4u;
  result = (16 * (a3 & 7)) | a3 & 7 | *(_BYTE *)(a1 + 190) & 0x88;
  *(_BYTE *)(a1 + 190) = result;
  return result;
}
