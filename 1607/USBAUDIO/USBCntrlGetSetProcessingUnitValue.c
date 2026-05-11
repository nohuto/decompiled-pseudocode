/*
 * XREFs of USBCntrlGetSetProcessingUnitValue @ 0x1C0020E90
 * Callers:
 *     USBCntrlGetSetProcessingUnitEnable @ 0x1C0020F10 (USBCntrlGetSetProcessingUnitEnable.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C001C5E8 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitValue(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int16 a4,
        __int64 a5,
        int a6)
{
  return USBHwGetSetProperty(
           a1,
           27,
           a3 >> 7,
           a3,
           a4,
           0,
           *(_WORD *)(a2 + 80),
           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 48LL) + 2LL),
           a5,
           a6);
}
