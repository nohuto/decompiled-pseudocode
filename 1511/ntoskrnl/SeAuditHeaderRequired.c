/*
 * XREFs of SeAuditHeaderRequired @ 0x140041E40
 * Callers:
 *     ObpAllocateObject @ 0x1404065F0 (ObpAllocateObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall SeAuditHeaderRequired(POBJECT_TYPE *a1)
{
  return a1 == IoFileObjectType && (byte_1402DB8A0 || byte_1402DB8A1 || byte_1402DB8B8 || byte_1402DB8B9);
}
