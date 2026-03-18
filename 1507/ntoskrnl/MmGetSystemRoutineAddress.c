/*
 * XREFs of MmGetSystemRoutineAddress @ 0x140541B4C
 * Callers:
 *     VerifierMmGetSystemRoutineAddress @ 0x14075389C (VerifierMmGetSystemRoutineAddress.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x140541BB0 (RtlFindExportedRoutineByName.c)
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
