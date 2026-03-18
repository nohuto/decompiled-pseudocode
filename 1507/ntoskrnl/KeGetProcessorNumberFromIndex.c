/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140117C28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x280 )
  {
    v3 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
