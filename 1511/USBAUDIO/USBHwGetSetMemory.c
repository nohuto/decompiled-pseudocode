/*
 * XREFs of USBHwGetSetMemory @ 0x1C001B7A8
 * Callers:
 *     USBParseGetMicArrayDescriptor @ 0x1C001CAFC (USBParseGetMicArrayDescriptor.c)
 *     USBCntrlGetSetMem @ 0x1C001F820 (USBCntrlGetSetMem.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C001B4E8 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetMemory(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        int a7,
        __int64 a8)
{
  return USBHwGetSetProperty(a1, (a3 != 0) + 27, a2 >> 7, a2, 0, a6, a4, a5, a8, a7);
}
