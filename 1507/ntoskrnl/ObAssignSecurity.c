/*
 * XREFs of ObAssignSecurity @ 0x14058444C
 * Callers:
 *     <none>
 * Callees:
 *     ObpAssignSecurity @ 0x140486910 (ObpAssignSecurity.c)
 */

int __fastcall ObAssignSecurity(__int64 a1, __int64 a2, void *a3, struct _OBJECT_TYPE *a4)
{
  return ObpAssignSecurity(a1, a2, a3, a4, 0, 0);
}
