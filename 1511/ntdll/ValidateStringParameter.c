/*
 * XREFs of ValidateStringParameter @ 0x18004D7AC
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004D290 (RtlCreateProcessParametersEx.c)
 *     ValidateOptionalString @ 0x18004D798 (ValidateOptionalString.c)
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
