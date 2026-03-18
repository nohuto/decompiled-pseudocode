/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1403F5EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     RtlFindExportedRoutineByName @ 0x1403F5F04 (RtlFindExportedRoutineByName.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F7370 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  const UNICODE_STRING *i; // rdx
  void *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  for ( i = SystemRoutineName; RtlUnicodeStringToAnsiString(&DestinationString, i, 1u) < 0; i = SystemRoutineName )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  return ExportedRoutineByName;
}
