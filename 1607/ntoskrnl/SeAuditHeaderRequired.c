/*
 * XREFs of SeAuditHeaderRequired @ 0x140011A90
 * Callers:
 *     ObpAllocateObject @ 0x14041BB10 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140300BE2 || byte_140300BE3 || byte_140300BFA || byte_140300BFB);
}
