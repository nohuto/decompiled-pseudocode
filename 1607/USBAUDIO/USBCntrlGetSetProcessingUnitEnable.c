/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C0020F10
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0017F70 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0018070 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C0020E90 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
