/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x140063A80
 * Callers:
 *     HvpFindNextDirtyRun @ 0x140062ABC (HvpFindNextDirtyRun.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     RtlFindNextForwardRunClear @ 0x140063958 (RtlFindNextForwardRunClear.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     PopGetNextTable @ 0x14014DAD8 (PopGetNextTable.c)
 *     PopGetRangeCount @ 0x14014EC20 (PopGetRangeCount.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 *     RtlFindFirstRunClear @ 0x140247454 (RtlFindFirstRunClear.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252598 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int i; // ebx
  unsigned int v6; // r8d
  const signed __int64 *v9; // r9
  _DWORD *v10; // rax
  _DWORD *v11; // r11
  unsigned int v12; // r9d
  unsigned int j; // ecx
  _DWORD *v15; // rax

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
  if ( v10 != v11 && (*v10 | dword_140295010[a2 & 0x1F]) == -1 )
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
  if ( v10 == v11 || (~dword_140295010[i & 0x1F] & *v10) != 0 )
    goto LABEL_9;
  v12 = 32 - (i & 0x1F);
  if ( v12 < a3 )
  {
    v15 = v10 + 1;
    while ( v15 < v11 )
    {
      if ( *v15 )
        break;
      ++v15;
      v12 += 32;
      if ( v12 >= a3 )
        goto LABEL_13;
    }
LABEL_9:
    for ( j = v12 + i; j < *(_DWORD *)a1; ++v12 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v12 >= a3 )
        break;
      ++j;
    }
  }
LABEL_13:
  *a4 = i;
  if ( v12 > a3 )
    return a3;
  return v12;
}
