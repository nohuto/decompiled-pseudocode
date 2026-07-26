/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C00140B4
 * Callers:
 *     ndisCalculateRssProcessorCount @ 0x1C0021DD0 (ndisCalculateRssProcessorCount.c)
 *     ndisPopulateRssProcessorSet @ 0x1C0021E88 (ndisPopulateRssProcessorSet.c)
 *     ndisReadRssKeywords @ 0x1C009F89C (ndisReadRssKeywords.c)
 *     ndisCompareProcNumInit @ 0x1C01024D0 (ndisCompareProcNumInit.c)
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
