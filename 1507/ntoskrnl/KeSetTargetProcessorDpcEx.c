/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x140128F58
 * Callers:
 *     KeMaskInterrupt @ 0x14014B230 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x140204098 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  int v2; // r8d
  unsigned __int16 Group; // ax
  unsigned __int8 Number; // r9

  LOWORD(v2) = 0;
  if ( ProcNumber->Reserved )
    return -1073741811;
  Group = ProcNumber->Group;
  if ( !ProcNumber->Group && !ProcNumber->Number )
    goto LABEL_9;
  if ( Group >= (unsigned __int16)KiMaximumGroups || (Number = ProcNumber->Number, Number >= 0x40u) )
  {
    v2 = -1;
  }
  else
  {
    if ( !KiProcessorNumberToIndexMappingTable[64 * Group + Number] )
      return -1073741811;
    v2 = KiProcessorNumberToIndexMappingTable[64 * Group + Number];
  }
  if ( v2 != -1 )
  {
LABEL_9:
    Dpc->Number = v2 + 640;
    return 0;
  }
  return -1073741811;
}
