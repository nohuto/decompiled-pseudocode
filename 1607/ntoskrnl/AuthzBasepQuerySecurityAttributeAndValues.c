/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x14000DE00
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x14000DD40 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14021A7F8 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     AuthzBasepGetNextValue @ 0x14023533C (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402356A8 (AuthzBasepRestartOperandValueEnumeration.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 SecurityAttribute; // rax
  __int64 v7; // rcx

  v1 = a1[6];
  v2 = 0;
  if ( v1 )
  {
    v7 = *(_QWORD *)a1[7];
    if ( v7 == v1 + 72 )
      return (unsigned int)-2147483622;
    goto LABEL_7;
  }
  v4 = *a1;
  if ( v4 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(v4, a1 + 1);
    if ( SecurityAttribute )
    {
      v7 = *(_QWORD *)(SecurityAttribute + 72);
      *((_DWORD *)a1 + 8) = *(_DWORD *)(SecurityAttribute + 60);
      *((_WORD *)a1 + 12) = *(_WORD *)(SecurityAttribute + 48);
      *((_DWORD *)a1 + 7) = *(_DWORD *)(SecurityAttribute + 52);
      a1[6] = SecurityAttribute;
LABEL_7:
      a1[7] = v7;
      a1[5] = v7 + 40;
      return v2;
    }
  }
  return (unsigned int)-1073741275;
}
