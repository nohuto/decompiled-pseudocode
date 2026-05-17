/*
 * XREFs of ValidateOptionalString @ 0x18004D798
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
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
