/*
 * XREFs of SeReleaseUnicodeStringStructures @ 0x140690B64
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x140411D10 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseUnicodeStringStructures(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
