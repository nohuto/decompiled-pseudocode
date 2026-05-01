/*
 * XREFs of RmpClientCallbackCompareForHashTable @ 0x180009D6C
 * Callers:
 *     RmpClientSubscriptionFindCallbackContext @ 0x18000A24C (RmpClientSubscriptionFindCallbackContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpClientCallbackCompareForHashTable(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a2 - *(_QWORD *)(a1 + 32);
  if ( *a2 == *(_QWORD *)(a1 + 32) )
    v2 = a2[1] - *(_QWORD *)(a1 + 40);
  return v2 == 0;
}
