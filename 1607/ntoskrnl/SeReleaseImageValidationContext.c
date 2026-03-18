/*
 * XREFs of SeReleaseImageValidationContext @ 0x1405278E0
 * Callers:
 *     MiDeleteControlArea @ 0x1400A4F50 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_140301188 )
    qword_140301188();
  else
    ExFreePoolWithTag(a1, 0);
}
