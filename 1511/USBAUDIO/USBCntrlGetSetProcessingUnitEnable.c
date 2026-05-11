/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C001F5B0
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0016F20 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0017020 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C001F530 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
