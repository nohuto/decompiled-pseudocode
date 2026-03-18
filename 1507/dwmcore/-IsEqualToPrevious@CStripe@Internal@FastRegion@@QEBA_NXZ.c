/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180088FB4
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180088530 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800889AC (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18015124C (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // r8
  char *v2; // r9
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9

  v1 = (char *)this + *((int *)this + 1);
  v2 = (char *)this + *((int *)this - 1) - 8;
  v3 = (*((int *)this + 1) - (*((int *)this - 1) - 8LL)) >> 2;
  if ( (int)v3 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  v5 = 0LL;
  if ( (int)v3 > 0 )
  {
    v6 = v2 - v1;
    while ( *(_DWORD *)v1 == *(_DWORD *)&v1[v6] )
    {
      ++v5;
      v1 += 4;
      if ( v5 >= (int)v3 )
        return 1;
    }
    return 0;
  }
  return 1;
}
