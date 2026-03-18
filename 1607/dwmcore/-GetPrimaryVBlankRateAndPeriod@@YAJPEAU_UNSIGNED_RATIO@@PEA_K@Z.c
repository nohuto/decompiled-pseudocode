/*
 * XREFs of ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B5A8C
 * Callers:
 *     ?Initialize@CRateInfo@@QEAAJ_K@Z @ 0x1800B59C8 (-Initialize@CRateInfo@@QEAAJ_K@Z.c)
 *     ??0CAnalogExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x180165318 (--0CAnalogExclusiveView@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     GetPrimaryVBlankRate @ 0x1800B5B00 (GetPrimaryVBlankRate.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall GetPrimaryVBlankRateAndPeriod(struct _UNSIGNED_RATIO *a1, unsigned __int64 *a2)
{
  if ( !(unsigned __int8)GetPrimaryVBlankRate(0xFFFFFFFF) )
    GetPrimaryVBlankRate(0xFFFFFFFE);
  *a2 = 166666LL;
  *a1 = (struct _UNSIGNED_RATIO)0x10000003CLL;
  return 0LL;
}
