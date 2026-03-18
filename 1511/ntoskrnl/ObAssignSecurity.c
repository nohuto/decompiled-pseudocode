/*
 * XREFs of ObAssignSecurity @ 0x14050D10C
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x14046E22C (ObpAssignSecurity.c)
 */

int __fastcall ObAssignSecurity(struct _SECURITY_SUBJECT_CONTEXT *a1, __int64 a2, void *a3, struct _OBJECT_TYPE *a4)
{
  return ObpAssignSecurity(a1, a2, a3, a4, 0, 0);
}
