/*
 * XREFs of sub_140183648 @ 0x140183648
 * Callers:
 *     SepFreeResourceInfo @ 0x14009C168 (SepFreeResourceInfo.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 */

void __fastcall sub_140183648(_DWORD *a1)
{
  AuthzBasepFreeSecurityAttributesList(a1);
  ExFreePoolWithTag(a1, 0);
}
