/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0019228
 * Callers:
 *     ndisPopulateRssProcessorSet @ 0x1C001900C (ndisPopulateRssProcessorSet.c)
 *     ndisCalculateRssProcessorCount @ 0x1C0019170 (ndisCalculateRssProcessorCount.c)
 *     ndisReadRssKeywords @ 0x1C009D6E0 (ndisReadRssKeywords.c)
 *     ndisCompareProcNumInit @ 0x1C00FF360 (ndisCompareProcNumInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareProcNum(struct _PROCESSOR_NUMBER a1, struct _PROCESSOR_NUMBER a2)
{
  if ( a1.Group > a2.Group )
    return 1LL;
  if ( a1.Group < a2.Group || a1.Number < a2.Number )
    return 0xFFFFFFFFLL;
  return a1.Number > a2.Number;
}
