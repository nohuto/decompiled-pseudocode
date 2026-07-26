/*
 * XREFs of NdisUpcaseUnicodeString @ 0x1C00D00E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisUpcaseUnicodeString(_UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  return RtlUpcaseUnicodeString(a1, a2, 0);
}
