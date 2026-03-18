/*
 * XREFs of AuthzBasepCompareSecurityAttribute @ 0x140410598
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404104AC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140708600 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepFindSecurityAttributeValue @ 0x14002BEC0 (AuthzBasepFindSecurityAttributeValue.c)
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
          goto LABEL_8;
        if ( *(unsigned __int16 *)(a1 + 48) <= 5u )
          goto LABEL_14;
        if ( v8 == 6 )
        {
LABEL_8:
          v5 = (__int16 *)i[5];
          goto LABEL_9;
        }
        if ( v8 == 16 )
LABEL_14:
          v5 = (__int16 *)(i + 5);
      }
LABEL_9:
      if ( !AuthzBasepFindSecurityAttributeValue(a2, v5, v8) )
        return v2;
    }
  }
  return v2;
}
