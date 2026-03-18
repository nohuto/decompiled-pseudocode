/*
 * XREFs of CmpAssignSecurityDescriptor @ 0x1403FCD7C
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x1403FD450 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptor(__int64 a1, __int64 a2)
{
  return CmpGetSecurityDescriptorNode(a1, a2);
}
