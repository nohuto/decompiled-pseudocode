/*
 * XREFs of AuthzBasepRestartOperandValueEnumeration @ 0x14023587C
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x140235104 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepValueInSet @ 0x1402358C8 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000E280 (AuthzBasepQuerySecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepRestartOperandValueEnumeration(__int64 a1)
{
  bool v1; // zf
  __int64 i; // rdx
  __int64 *v3; // rcx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12) == 1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v1 && *(_QWORD *)(a1 + 16) )
  {
    for ( i = 48LL; i < 64; i += 8LL )
      *(_QWORD *)(i + *(_QWORD *)(a1 + 16)) = 0LL;
    v1 = *(_DWORD *)(a1 + 12) == 6;
    v3 = *(__int64 **)(a1 + 16);
    if ( v1 )
      return AuthzBasepQuerySystemSecurityAttributeAndValues(v3);
    else
      return AuthzBasepQuerySecurityAttributeAndValues(v3);
  }
  return result;
}
