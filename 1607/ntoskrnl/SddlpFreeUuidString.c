/*
 * XREFs of SddlpFreeUuidString @ 0x1406CC3D8
 * Callers:
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
