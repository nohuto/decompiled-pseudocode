/*
 * XREFs of SeReleaseImageValidationContext @ 0x1404AF3A4
 * Callers:
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_1402DBE28 )
    qword_1402DBE28();
  else
    ExFreePoolWithTag(a1, 0);
}
