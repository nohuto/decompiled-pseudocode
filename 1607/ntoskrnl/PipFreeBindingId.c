/*
 * XREFs of PipFreeBindingId @ 0x14062B390
 * Callers:
 *     PipDeleteBindingId @ 0x14062B210 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x14062B294 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *a1)
{
  RtlFreeAnsiString(a1 + 1);
  ExFreePoolWithTag(a1, 0x53706E50u);
}
