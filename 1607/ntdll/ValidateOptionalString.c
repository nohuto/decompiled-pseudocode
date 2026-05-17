/*
 * XREFs of ValidateOptionalString @ 0x18005EE08
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18005E900 (RtlCreateProcessParametersEx.c)
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
