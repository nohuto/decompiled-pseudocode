/*
 * XREFs of AuthzBasepCompareSecurityAttributesInformation @ 0x140708600
 * Callers:
 *     SepCompareClaimAttributes @ 0x14041044C (SepCompareClaimAttributes.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14002CCFC (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140410598 (AuthzBasepCompareSecurityAttribute.c)
 */

char __fastcall AuthzBasepCompareSecurityAttributesInformation(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  _QWORD *v4; // rsi
  _QWORD *i; // rdi
  _QWORD *SecurityAttribute; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 == *a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = (_QWORD *)(a1 + 8);
      for ( i = *(_QWORD **)(a1 + 8); i != v4; i = (_QWORD *)*i )
      {
        SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a2, (__int64)(i + 4));
        if ( !SecurityAttribute || !AuthzBasepCompareSecurityAttribute((__int64)i, (__int64)SecurityAttribute) )
          return v2;
      }
    }
    return 1;
  }
  return v2;
}
