/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C0043D94
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0043DAC (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0043F80 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C0060374 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
