/*
 * XREFs of HUBDSM_QueryingRegistryValuesForDevice @ 0x1C0018B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_QueryingRegistryValuesForDevice(__int64 a1)
{
  return HUBMISC_QueryAndCacheRegistryValuesForDevice(*(_QWORD *)(a1 + 960));
}
