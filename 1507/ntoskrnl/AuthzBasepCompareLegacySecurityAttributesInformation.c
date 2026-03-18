/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404104AC
 * Callers:
 *     NtCompareTokens @ 0x1404107DC (NtCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14002CCFC (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14041056C (AuthzBasepIsCompareRelevantAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140410598 (AuthzBasepCompareSecurityAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, __int64 a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // esi
  _QWORD *v6; // r14
  _QWORD *i; // rdi
  _QWORD *SecurityAttribute; // rax
  _QWORD *j; // rdi

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = a1 + 2;
  for ( i = (_QWORD *)*((_QWORD *)a1 + 1); i != v6; i = (_QWORD *)*i )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(a2, (__int64)(i + 4));
      if ( !SecurityAttribute || !(unsigned __int8)AuthzBasepCompareSecurityAttribute(i, SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  for ( j = *(_QWORD **)(a2 + 8); j != (_QWORD *)(a2 + 8); j = (_QWORD *)*j )
  {
    if ( !(unsigned __int8)AuthzBasepIsCompareRelevantAttribute(j) )
      --v4;
  }
  return v2 == v4;
}
