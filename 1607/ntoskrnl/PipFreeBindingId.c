/*
 * XREFs of PipFreeBindingId @ 0x14062B2DC
 * Callers:
 *     PipDeleteBindingId @ 0x14062B15C (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x14062B1E0 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *a1)
{
  RtlFreeAnsiString(a1 + 1);
  ExFreePoolWithTag(a1, 0x53706E50u);
}
