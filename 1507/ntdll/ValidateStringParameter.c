/*
 * XREFs of ValidateStringParameter @ 0x1800466FC
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x1800461E0 (RtlCreateProcessParametersEx.c)
 *     ValidateOptionalString @ 0x1800466E8 (ValidateOptionalString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateStringParameter(__int64 a1)
{
  if ( a1 && *(_WORD *)(a1 + 2) >= *(_WORD *)a1 && (!*(_WORD *)a1 || *(_QWORD *)(a1 + 8)) )
    return 0LL;
  else
    return 3221225485LL;
}
