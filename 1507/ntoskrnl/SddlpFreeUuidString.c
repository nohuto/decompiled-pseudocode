/*
 * XREFs of SddlpFreeUuidString @ 0x14070A4F8
 * Callers:
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
