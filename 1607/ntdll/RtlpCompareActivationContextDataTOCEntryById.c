/*
 * XREFs of RtlpCompareActivationContextDataTOCEntryById @ 0x18006CE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCompareActivationContextDataTOCEntryById(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
