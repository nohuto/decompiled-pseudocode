/*
 * XREFs of ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x14021F270
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // rbx
  const signed __int64 *v5; // rdx
  unsigned __int64 v6; // r10
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // r9
  int v9; // ebx
  unsigned __int64 v10; // rax

  v3 = a2;
  if ( a3 )
  {
    v5 = *(const signed __int64 **)(a1 + 848);
    if ( _bittest64(v5, v3) )
    {
      v6 = v3 & 0x1F;
      LOBYTE(v7) = 1;
      v8 = (volatile signed __int32 *)v5 + ((unsigned __int64)(unsigned int)v3 >> 5);
      if ( v6 + 1 > 0x20 )
      {
        v9 = v3 & 0x1F;
        if ( !v9 )
          goto LABEL_10;
        _InterlockedAnd(v8++, ~(((1 << (32 - v9)) - 1) << v6));
        v7 = 1 - (32 - v9);
        if ( v7 >= 0x20 )
        {
          v10 = (unsigned __int64)v7 >> 5;
          do
          {
            *v8 = 0;
            v7 -= 32;
            ++v8;
            --v10;
          }
          while ( v10 );
        }
        if ( v7 )
LABEL_10:
          _InterlockedAnd(v8, ~((1 << v7) - 1));
      }
      else
      {
        _InterlockedAnd(v8, ~(1 << v6));
      }
      ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 864);
    }
  }
  else
  {
    _bittestandset(*(signed __int32 **)(a1 + 848), a2);
  }
}
