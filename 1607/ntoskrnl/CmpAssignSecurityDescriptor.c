/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1403FBC3C
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(__int64 a1, __int64 a2)
{
  return CmpGetSecurityDescriptorNode(a1, a2);
}
