/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140102160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  unsigned __int16 Group; // ax
  unsigned __int8 Number; // dl
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !ProcNumber->Group && !ProcNumber->Number )
    return 0;
  if ( Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  if ( !result )
    return -1;
  return result;
}
