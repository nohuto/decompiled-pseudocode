/*
 * XREFs of PipFreeBindingId @ 0x140601290
 * Callers:
 *     PipDeleteBindingId @ 0x140601110 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140601194 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *a1)
{
  RtlFreeAnsiString(a1 + 1);
  ExFreePoolWithTag(a1, 0x53706E50u);
}
