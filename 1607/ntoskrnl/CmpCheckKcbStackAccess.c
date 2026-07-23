/*
 * XREFs of CmpCheckKcbStackAccess @ 0x1401B4C64
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1404BBE90 (CmpGetSecurityDescriptorForKcbStack.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2)
{
  void *SecurityDescriptorForKcbStack; // rax

  SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a2);
  return CmpCheckKeySecurityDescriptorAccess(SecurityDescriptorForKcbStack);
}
