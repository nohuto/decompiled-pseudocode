/*
 * XREFs of AuthzBasepRestartOperandValueEnumeration @ 0x1402356A8
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x140234F30 (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepValueInSet @ 0x1402356F4 (AuthzBasepValueInSet.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000DE00 (AuthzBasepQuerySecurityAttributeAndValues.c)
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
