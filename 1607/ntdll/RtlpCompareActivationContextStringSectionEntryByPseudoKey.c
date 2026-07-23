/*
 * XREFs of RtlpCompareActivationContextStringSectionEntryByPseudoKey @ 0x180080680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCompareActivationContextStringSectionEntryByPseudoKey(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
