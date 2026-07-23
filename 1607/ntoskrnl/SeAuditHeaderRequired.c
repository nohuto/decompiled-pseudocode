/*
 * XREFs of SeAuditHeaderRequired @ 0x140011610
 * Callers:
 *     ObpAllocateObject @ 0x14041A9D0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_140300BA2 || byte_140300BA3 || byte_140300BBA || byte_140300BBB);
}
