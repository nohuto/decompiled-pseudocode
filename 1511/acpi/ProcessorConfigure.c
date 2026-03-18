/*
 * XREFs of ProcessorConfigure @ 0x1C0086A14
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00866F8 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     <none>
 */

__int64 ProcessorConfigure()
{
  MinimumIdtEntry = 48;
  ProcessorReserveIdtEntries = (__int64)ProcessorpReserveIdtEntriesApic;
  ProcessorFindIdtEntries = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD))ProcessorpFindIdtEntriesApic;
  return KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)ProcessorpAddInstanceCallback, 0LL, 0) == 0LL
       ? 0xC0000001
       : 0;
}
