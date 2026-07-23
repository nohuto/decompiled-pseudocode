/*
 * XREFs of KsepDbFreeDriverShims @ 0x140513C9C
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405139C0 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     KseDriverUnloadImage @ 0x140546D94 (KseDriverUnloadImage.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v5; // rdi

  if ( a1 )
  {
    v2 = 0LL;
    if ( a2 )
    {
      v5 = a1 + 3;
      do
      {
        if ( v5[2] )
          KsepStringFree(&a1[10 * v2 + 4]);
        if ( *v5 )
          KsepStringFree(&a1[10 * v2 + 2]);
        if ( v5[4] )
          KsepStringFree(&a1[10 * v2 + 6]);
        v2 = (unsigned int)(v2 + 1);
        v5 += 10;
      }
      while ( (unsigned int)v2 < a2 );
    }
    KsepPoolFreePaged(a1);
  }
}
