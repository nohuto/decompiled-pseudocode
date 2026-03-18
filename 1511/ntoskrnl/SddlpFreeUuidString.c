/*
 * XREFs of SddlpFreeUuidString @ 0x140687B58
 * Callers:
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
