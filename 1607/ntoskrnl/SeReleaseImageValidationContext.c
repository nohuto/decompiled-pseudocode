/*
 * XREFs of SeReleaseImageValidationContext @ 0x14050A940
 * Callers:
 *     MiDeleteControlArea @ 0x1400A34C8 (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
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
