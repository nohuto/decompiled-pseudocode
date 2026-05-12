/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C003A278
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C003A290 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C003A464 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C0054D60 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
