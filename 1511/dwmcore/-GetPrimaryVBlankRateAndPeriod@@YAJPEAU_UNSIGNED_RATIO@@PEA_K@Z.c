/*
 * XREFs of ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B1F38
 * Callers:
 *     ?Initialize@CRateInfo@@QEAAJ_K@Z @ 0x1800B1E74 (-Initialize@CRateInfo@@QEAAJ_K@Z.c)
 *     ??0CAnalogExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x18013B178 (--0CAnalogExclusiveView@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     GetPrimaryVBlankRate @ 0x1800B1FAC (GetPrimaryVBlankRate.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall GetPrimaryVBlankRateAndPeriod(struct _UNSIGNED_RATIO *a1, unsigned __int64 *a2)
{
  if ( !(unsigned __int8)GetPrimaryVBlankRate(0xFFFFFFFF) )
    GetPrimaryVBlankRate(0xFFFFFFFE);
  *a2 = 166666LL;
  *a1 = (struct _UNSIGNED_RATIO)0x10000003CLL;
  return 0LL;
}
