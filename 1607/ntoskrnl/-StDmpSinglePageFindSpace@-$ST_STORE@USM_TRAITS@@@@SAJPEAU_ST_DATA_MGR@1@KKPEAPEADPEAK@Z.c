/*
 * XREFs of ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140118E04
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118AB4 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1401161E8 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(
        __int64 a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        int *a5)
{
  __int64 v8; // rdi
  int v9; // edx
  __int64 result; // rax
  _DWORD *Compact; // rax
  __int64 v12; // rax

  v8 = 2 * (a2 + 76LL);
  if ( *(_DWORD *)(a1 + 16 * (a2 + 76LL)) == -1
    || (unsigned int)(a3 + *(_DWORD *)(a1 + 16 * (a2 + 76LL) + 4)) > *(_DWORD *)(a1 + 816) )
  {
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
      ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, 0xFFFFFFFF);
    while ( 1 )
    {
      Compact = ST_STORE<SM_TRAITS>::StRegionFindCompact(a1, a2);
      if ( !Compact )
        return 3221225599LL;
      v12 = ((__int64)Compact - *(_QWORD *)(a1 + 1016)) >> 1;
      if ( (_DWORD)v12 == -1 )
        return 3221225599LL;
      result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, v12);
      if ( (int)result >= 0 )
        goto LABEL_3;
      if ( (_DWORD)result != -1073741267 )
        return result;
    }
  }
  else
  {
LABEL_3:
    v9 = *(_DWORD *)(a1 + 8 * v8);
    *a4 = *(_QWORD *)(a1 + 8 * v8 + 8) + (unsigned int)(16 * *(_DWORD *)(a1 + 8 * v8 + 4));
    *a5 = *(_DWORD *)(a1 + 8 * v8 + 4) | (v9 << *(_DWORD *)(a1 + 812));
    return 0LL;
  }
}
