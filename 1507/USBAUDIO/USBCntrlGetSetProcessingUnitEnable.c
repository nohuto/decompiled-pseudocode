/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C0020EA0
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0017F40 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0018040 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C0020E20 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
