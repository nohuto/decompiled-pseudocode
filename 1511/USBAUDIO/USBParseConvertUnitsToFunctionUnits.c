/*
 * XREFs of USBParseConvertUnitsToFunctionUnits @ 0x1C001E5E0
 * Callers:
 *     <none>
 * Callees:
 *     USBParseConvertControlUnits @ 0x1C001E3F8 (USBParseConvertControlUnits.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C001E4C8 (USBParseConvertMIDIJacksAndElements.c)
 */

__int64 __fastcall USBParseConvertUnitsToFunctionUnits(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 5LL) )
    return USBParseConvertMIDIJacksAndElements(a1);
  result = USBParseConvertControlUnits(a1);
  if ( (int)result >= 0 )
    return USBParseConvertMIDIJacksAndElements(a1);
  return result;
}
