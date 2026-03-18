/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C0024C6E
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C006E5D0 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
