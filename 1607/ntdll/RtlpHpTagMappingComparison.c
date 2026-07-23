/*
 * XREFs of RtlpHpTagMappingComparison @ 0x180076F88
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227B0 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTagMappingComparison(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a2 - *(_QWORD *)(a1 + 16);
  if ( *a2 == *(_QWORD *)(a1 + 16) )
    v2 = a2[1] - *(_QWORD *)(a1 + 24);
  return v2 == 0;
}
