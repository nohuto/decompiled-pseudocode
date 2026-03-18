/*
 * XREFs of SeAuditHeaderRequired @ 0x140045F90
 * Callers:
 *     ObpAllocateObject @ 0x14048B260 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_14032BC00 || byte_14032BC01 || byte_14032BC18 || byte_14032BC19);
}
