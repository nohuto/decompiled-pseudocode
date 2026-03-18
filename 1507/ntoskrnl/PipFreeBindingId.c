/*
 * XREFs of PipFreeBindingId @ 0x14067BEA0
 * Callers:
 *     PipDeleteBindingId @ 0x14067BD20 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x14067BDA4 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *a1)
{
  RtlFreeAnsiString(a1 + 1);
  ExFreePoolWithTag(a1, 0x53706E50u);
}
