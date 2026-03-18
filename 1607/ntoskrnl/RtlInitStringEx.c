/*
 * XREFs of RtlInitStringEx @ 0x14021132C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInitStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
