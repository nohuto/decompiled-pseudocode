/*
 * XREFs of ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140254470
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402542F0 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x1402552A0 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 *     StEtaCheckForRefresh @ 0x140256BF8 (StEtaCheckForRefresh.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmEtaRefresh(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // r14d
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int *i; // rcx
  unsigned int j; // edi
  int v8; // eax
  int v9; // ecx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0xFFFF;
  if ( *(_DWORD *)(a1 + 136) <= 0xFFFFu )
    v1 = *(_DWORD *)(a1 + 136);
  v3 = 0;
  while ( 2 )
  {
    v4 = *(_QWORD *)(a1 + 440);
    if ( (unsigned int)StEtaCheckForRefresh(v4, &v13, &v12, &v11) )
    {
      v5 = v11;
      if ( v12 )
        v5 = v12 + ((v11 - v12) >> 1);
      if ( v5 >= v1 )
        v5 = v1;
      if ( *(int *)(v4 + 8) > 0 )
        return (unsigned int)-1073741637;
      _m_prefetchw((const void *)(v4 + 48));
      if ( (_InterlockedOr((volatile signed __int32 *)(v4 + 48), 1u) & 1) != 0 )
        return (unsigned int)-1073741637;
      for ( i = *(unsigned int **)(v4 + 8LL * v13 + 16); *i < v5; i += 8 )
        ;
      i[1] = 112;
      for ( j = 0; j < 0x20; ++j )
      {
        v8 = ST_STORE<SM_TRAITS>::StDmPickRandomRegion(a1);
        if ( v8 == -1 )
        {
          v9 = -1073741448;
LABEL_22:
          _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 440) + 48LL), 0xFFFFFFFE);
          return (unsigned int)v9;
        }
        v9 = ST_STORE<SM_TRAITS>::StDmEtaPerformIo(a1, v8, v5);
        if ( v9 < 0 )
          goto LABEL_22;
      }
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 440) + 48LL), 0xFFFFFFFE);
      if ( (unsigned int)++v3 < 0xA )
        continue;
    }
    break;
  }
  return 0;
}
