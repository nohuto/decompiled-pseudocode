/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x1400177F0
 * Callers:
 *     HvpFindNextDirtyRun @ 0x1400827F8 (HvpFindNextDirtyRun.c)
 *     RtlFindNextForwardRunClear @ 0x140082884 (RtlFindNextForwardRunClear.c)
 *     MiStoreEvictPageFile @ 0x1400AE60C (MiStoreEvictPageFile.c)
 *     PopGetNextTable @ 0x1401139EC (PopGetNextTable.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1401161E8 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     RtlFindFirstRunClear @ 0x140212694 (RtlFindFirstRunClear.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CAC8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CDC0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int i; // ebx
  unsigned int v6; // r8d
  const signed __int64 *v9; // r9
  _DWORD *v10; // rax
  _DWORD *v11; // r10
  unsigned int v12; // r9d
  _DWORD *v13; // rax
  unsigned int j; // ecx

  i = a2;
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= a2 )
  {
    *a4 = a2;
    return 0LL;
  }
  v9 = *(const signed __int64 **)(a1 + 8);
  v10 = (_DWORD *)v9 + ((unsigned __int64)a2 >> 5);
  v11 = (_DWORD *)v9 + ((unsigned __int64)(v6 - 1) >> 5);
  if ( v10 != v11 && (*v10 | dword_14026D390[a2 & 0x1F]) == -1 )
  {
    ++v10;
    for ( i = a2 - (a2 & 0x1F) + 32; v10 < v11; i += 32 )
    {
      if ( *v10 != -1 )
        break;
      ++v10;
    }
  }
  for ( ; i < v6; ++i )
  {
    if ( _bittest64(v9, i) != 1 )
      break;
  }
  v12 = 0;
  if ( v10 == v11 || (~dword_14026D390[i & 0x1F] & *v10) != 0 )
    goto LABEL_14;
  v12 = 32 - (i & 0x1F);
  if ( v12 < a3 )
  {
    v13 = v10 + 1;
    while ( v13 < v11 )
    {
      if ( *v13 )
        break;
      ++v13;
      v12 += 32;
      if ( v12 >= a3 )
        goto LABEL_18;
    }
LABEL_14:
    for ( j = v12 + i; j < *(_DWORD *)a1; ++v12 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v12 >= a3 )
        break;
      ++j;
    }
  }
LABEL_18:
  *a4 = i;
  if ( v12 > a3 )
    return a3;
  return v12;
}
