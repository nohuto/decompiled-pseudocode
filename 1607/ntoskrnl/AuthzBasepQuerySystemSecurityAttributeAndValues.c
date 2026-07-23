/*
 * XREFs of AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1404AF4A8
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402356A8 (AuthzBasepRestartOperandValueEnumeration.c)
 * Callees:
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1404AF514 (AuthzBasepFindSystemSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepQuerySystemSecurityAttributeAndValues(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 SystemSecurityAttribute; // rax
  __int64 v5; // rdx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v5 = **(_QWORD **)(a1 + 56);
    if ( v5 == v3 + 72 )
      return (unsigned int)-2147483622;
  }
  else
  {
    SystemSecurityAttribute = AuthzBasepFindSystemSecurityAttribute(a1 + 8);
    if ( !SystemSecurityAttribute )
      return (unsigned int)-1073741275;
    v5 = *(_QWORD *)(SystemSecurityAttribute + 72);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(SystemSecurityAttribute + 60);
    *(_WORD *)(a1 + 24) = *(_WORD *)(SystemSecurityAttribute + 48);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(SystemSecurityAttribute + 52);
    *(_QWORD *)(a1 + 48) = SystemSecurityAttribute;
  }
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a1 + 40) = v5 + 40;
  return v2;
}
