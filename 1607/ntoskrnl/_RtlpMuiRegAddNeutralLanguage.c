/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x140561AC4
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1405612B0 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1405619FC (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_WORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  return result;
}
