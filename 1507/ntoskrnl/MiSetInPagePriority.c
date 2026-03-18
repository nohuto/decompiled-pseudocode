/*
 * XREFs of MiSetInPagePriority @ 0x1400619CC
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiSetInPagePrefetchPriority @ 0x14012B688 (MiSetInPagePrefetchPriority.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 * Callees:
 *     <none>
 */

char __fastcall MiSetInPagePriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  char result; // al

  if ( a3 < 5 && a2 > a3 )
    *(_BYTE *)(a1 + 191) |= 4u;
  else
    *(_BYTE *)(a1 + 191) &= ~4u;
  result = (16 * (a3 & 7)) | a3 & 7 | *(_BYTE *)(a1 + 190) & 0x88;
  *(_BYTE *)(a1 + 190) = result;
  return result;
}
