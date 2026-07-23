/*
 * XREFs of EtwpGetImageSize @ 0x1404B4DE0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetImageSize(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int16 v3; // ax

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  *a2 = 0LL;
  v3 = *(_WORD *)(a1 + 24);
  if ( v3 == 267 || v3 == 523 )
    *a2 = *(unsigned int *)(a1 + 80);
  else
    *a2 = 0LL;
  if ( !*a2 )
    return (unsigned int)-1073741701;
  return v2;
}
