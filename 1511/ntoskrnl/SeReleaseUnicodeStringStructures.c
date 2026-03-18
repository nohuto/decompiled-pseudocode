/*
 * XREFs of SeReleaseUnicodeStringStructures @ 0x1406518DC
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x140433B60 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseUnicodeStringStructures(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
