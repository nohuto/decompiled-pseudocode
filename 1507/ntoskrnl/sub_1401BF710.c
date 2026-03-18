/*
 * XREFs of sub_1401BF710 @ 0x1401BF710
 * Callers:
 *     SepFreeResourceInfo @ 0x14010D734 (SepFreeResourceInfo.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 */

void __fastcall sub_1401BF710(_DWORD *a1)
{
  AuthzBasepFreeSecurityAttributesList(a1);
  ExFreePoolWithTag(a1, 0);
}
