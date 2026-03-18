/*
 * XREFs of SeReleaseUnicodeStringStructures @ 0x1406D3FDC
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x140485B70 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseUnicodeStringStructures(void *a1, char a2)
{
  if ( a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
