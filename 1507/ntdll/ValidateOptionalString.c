/*
 * XREFs of ValidateOptionalString @ 0x1800466E8
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x1800461E0 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateOptionalString(__int64 a1)
{
  if ( a1 )
    return ValidateStringParameter(a1);
  else
    return 0LL;
}
