/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x140001514
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C854 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140233F9C (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x14007C7CC (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 *v4; // r11
  __int64 *i; // rdx
  int v6; // eax
  __int64 result; // rax

  LOBYTE(a2) = 1;
  AuthzBasepFreeSecurityAttributeValues(a1, a2);
  v4 = (__int64 *)(a1 + 72);
  for ( i = *(__int64 **)(a1 + 72); i != v4; i = (__int64 *)*i )
  {
    v6 = *((_DWORD *)i + 8);
    if ( (v6 & 2) == 0 )
    {
      LOBYTE(v3) = 1;
      *((_DWORD *)i + 8) = v6 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, i, 0LL, v3);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
