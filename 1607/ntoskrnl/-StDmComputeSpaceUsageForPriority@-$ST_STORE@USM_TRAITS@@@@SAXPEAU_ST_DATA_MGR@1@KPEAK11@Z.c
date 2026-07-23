/*
 * XREFs of ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x14011E2D4
 * Callers:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14011E168 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v6; // rbp
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  int v13; // r14d
  unsigned int v14; // r8d
  _DWORD *result; // rax
  __int64 v16; // rcx

  v6 = a2;
  v9 = *(_DWORD *)(a1 + 8LL * a2 + 1792);
  v10 = *(_DWORD *)(a1 + 8LL * a2 + 1796);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    v11 = v9 << *(_DWORD *)(a1 + 812);
  else
    v11 = v10;
  v12 = *(_DWORD *)(a1 + 816);
  v13 = *(_DWORD *)(a1 + 820);
  v14 = v9 * (v12 - v13 + 1) - v10;
  if ( v14 < v12 || v9 * (*(_DWORD *)(a1 + 816) - v13 + 1) < v10 )
    goto LABEL_4;
  v16 = *(unsigned int *)(a1 + 16 * (v6 + 76));
  if ( (_DWORD)v16 != -1 )
    v14 = v13 + (*(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v16) & 0x1FFF) - v12 + v14 - 1;
  if ( v14 < v12 )
LABEL_4:
    v14 = 0;
  *a3 += v9;
  *a4 += v11;
  result = a5;
  *a5 += v14;
  return result;
}
