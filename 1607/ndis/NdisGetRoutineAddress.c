/*
 * XREFs of NdisGetRoutineAddress @ 0x1C00B1370
 * Callers:
 *     ndisVerifierGetRoutineAddress @ 0x1C00D6450 (ndisVerifierGetRoutineAddress.c)
 * Callees:
 *     FindExportedRoutineByName @ 0x1C00B13BC (FindExportedRoutineByName.c)
 */

PVOID __stdcall NdisGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  void *ExportedRoutineByName; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlUnicodeStringToAnsiString(&DestinationString, NdisRoutineName, 1u) < 0 )
    return 0LL;
  ExportedRoutineByName = (void *)FindExportedRoutineByName(*((_QWORD *)ndisDriverObject + 3), &DestinationString);
  RtlFreeAnsiString(&DestinationString);
  return ExportedRoutineByName;
}
