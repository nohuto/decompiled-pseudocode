/*
 * XREFs of RtlSetInformationAcl @ 0x1800D0BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetInformationAcl(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225485LL;
  if ( a4 != 1 )
    return 3221225475LL;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( *a2 < (unsigned int)(unsigned __int8)*a1 )
    return 3221225485LL;
  *a1 = *(_BYTE *)a2;
  return 0LL;
}
