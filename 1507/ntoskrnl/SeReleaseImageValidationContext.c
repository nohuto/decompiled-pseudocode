/*
 * XREFs of SeReleaseImageValidationContext @ 0x14051ABE4
 * Callers:
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_14032C188 )
    qword_14032C188();
  else
    ExFreePoolWithTag(a1, 0);
}
