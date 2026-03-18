/*
 * XREFs of AuthzBasepCompareSecurityAttribute @ 0x1403B4E90
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404C288C (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x14068395C (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140005D48 (AuthzBasepFindSecurityAttributeValue.c)
 */

char __fastcall AuthzBasepCompareSecurityAttribute(__int64 a1, __int64 a2)
{
  char v2; // di
  __int16 *v5; // r15
  _QWORD *v6; // r14
  _QWORD *i; // rbx
  int v8; // eax

  v2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 60) == *(_DWORD *)(a2 + 60)
    && *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 48)
    && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52) )
  {
    v6 = (_QWORD *)(a1 + 72);
    for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
    {
      if ( i == v6 )
        return 1;
      v8 = *(unsigned __int16 *)(a1 + 48);
      if ( *(_WORD *)(a1 + 48) )
      {
        if ( *(unsigned __int16 *)(a1 + 48) <= 2u )
          goto LABEL_12;
        if ( *(unsigned __int16 *)(a1 + 48) <= 5u )
          goto LABEL_6;
        if ( v8 == 6 )
        {
LABEL_12:
          v5 = (__int16 *)i[5];
        }
        else if ( v8 == 16 )
        {
LABEL_6:
          v5 = (__int16 *)(i + 5);
        }
      }
      if ( !AuthzBasepFindSecurityAttributeValue(a2, v5, v8) )
        return v2;
    }
  }
  return v2;
}
