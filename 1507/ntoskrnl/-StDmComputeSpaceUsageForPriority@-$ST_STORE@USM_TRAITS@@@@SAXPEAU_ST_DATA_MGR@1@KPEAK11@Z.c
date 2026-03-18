/*
 * XREFs of ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x140140B08
 * Callers:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
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
  int v7; // ebx
  unsigned int v8; // edi
  int v9; // r11d
  unsigned int v10; // r9d
  int v11; // r14d
  unsigned int v12; // r8d
  _DWORD *result; // rax

  v7 = *(_DWORD *)(a1 + 8LL * a2 + 1088);
  v8 = *(_DWORD *)(a1 + 8LL * a2 + 1092);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
    v9 = v7 << *(_DWORD *)(a1 + 164);
  else
    v9 = *(_DWORD *)(a1 + 8LL * a2 + 1092);
  v10 = *(_DWORD *)(a1 + 168);
  v11 = *(_DWORD *)(a1 + 172);
  v12 = v7 * (v10 - v11 + 1) - v8;
  if ( v12 < v10 || v7 * (*(_DWORD *)(a1 + 168) - v11 + 1) < v8 )
    goto LABEL_4;
  if ( *(_DWORD *)(a1 + 16LL * a2 + 648) != -1 )
    v12 = v11
        + (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * *(unsigned int *)(a1 + 16LL * a2 + 648)) & 0x1FFF)
        - v10
        + v12
        - 1;
  if ( v12 < v10 )
LABEL_4:
    v12 = 0;
  *a3 += v7;
  *a4 += v9;
  result = a5;
  *a5 += v12;
  return result;
}
