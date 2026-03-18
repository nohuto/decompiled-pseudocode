/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x1401366E8
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCreateClaimAttributes @ 0x1403C23C0 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14052ED4C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140656110 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140006788 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

_QWORD *__fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = AuthzBasepMemAlloc(0x30uLL, a2, 0x74416553u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x30uLL);
    v3[2] = v3 + 1;
    v3[1] = v3 + 1;
    *(_DWORD *)v3 = 0;
    v3[5] = v3 + 4;
    v3[4] = v3 + 4;
    *((_DWORD *)v3 + 6) = 0;
  }
  return v3;
}
