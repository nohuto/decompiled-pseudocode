/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404756B0
 * Callers:
 *     NtCompareTokens @ 0x1404748F0 (NtCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x1403E266C (AuthzBasepCompareSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140475768 (AuthzBasepIsCompareRelevantAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, __int64 a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // esi
  int *v6; // r14
  __int64 i; // rdi
  _QWORD *j; // rdi
  __int64 *SecurityAttribute; // rax

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = a1 + 2;
  for ( i = *((_QWORD *)a1 + 1); (int *)i != v6; i = *(_QWORD *)i )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(a2, (const UNICODE_STRING *)(i + 32));
      if ( !SecurityAttribute || !AuthzBasepCompareSecurityAttribute(i, (__int64)SecurityAttribute) )
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
