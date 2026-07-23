/*
 * XREFs of ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021E2F4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14021E1F8 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x14021EC84 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtaRefresh(__int64 a1)
{
  unsigned int v1; // r14d
  int v3; // ebp
  __int64 v4; // rdx
  int v5; // r10d
  __int64 v6; // r9
  unsigned __int64 *i; // r8
  unsigned __int64 j; // rax
  int v9; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int *k; // rcx
  unsigned int m; // edi
  int v15; // eax

  v1 = 0xFFFF;
  if ( *(_DWORD *)(a1 + 784) <= 0xFFFFu )
    v1 = *(_DWORD *)(a1 + 784);
  v3 = 0;
  while ( 2 )
  {
    v4 = *(_QWORD *)(a1 + 984);
    v5 = 0;
    v6 = 0LL;
    for ( i = (unsigned __int64 *)(v4 + 16); !*i; ++i )
    {
LABEL_11:
      ++v5;
      if ( ++v6 >= 2 )
        return 0;
    }
    for ( j = *i; *(_WORD *)(j + 4) <= 0x80u || !*(_QWORD *)(j + 8); j += 32LL )
    {
      if ( *(_DWORD *)j == -1 )
        goto LABEL_11;
    }
    if ( j <= *i )
      v11 = 0;
    else
      v11 = *(_DWORD *)(j - 32) + 1;
    v12 = *(_DWORD *)j;
    if ( v11 )
      v12 = v11 + ((v12 - v11) >> 1);
    if ( v12 >= v1 )
      v12 = v1;
    if ( *(int *)(v4 + 8) <= 0 )
    {
      _m_prefetchw((const void *)(v4 + 48));
      if ( (_InterlockedOr((volatile signed __int32 *)(v4 + 48), 1u) & 1) == 0 )
      {
        for ( k = *(unsigned int **)(v4 + 8LL * v5 + 16); *k < v12; k += 8 )
          ;
        k[1] = 112;
        for ( m = 0; m < 0x20; ++m )
        {
          v15 = ST_STORE<SM_TRAITS>::StDmPickRandomRegion(a1, v4, i, v6);
          if ( v15 == -1 )
          {
            v9 = -1073741448;
LABEL_33:
            _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 984) + 48LL), 0xFFFFFFFE);
            return (unsigned int)v9;
          }
          v9 = ST_STORE<SM_TRAITS>::StDmEtaPerformIo(a1, v15, v12);
          if ( v9 < 0 )
            goto LABEL_33;
        }
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 984) + 48LL), 0xFFFFFFFE);
        if ( (unsigned int)++v3 < 0xA )
          continue;
        return 0;
      }
    }
    break;
  }
  return (unsigned int)-1073741637;
}
