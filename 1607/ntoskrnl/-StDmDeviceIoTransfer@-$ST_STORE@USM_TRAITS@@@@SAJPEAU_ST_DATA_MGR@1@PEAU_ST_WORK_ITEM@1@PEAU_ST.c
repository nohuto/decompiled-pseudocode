/*
 * XREFs of ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x14021E100
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011D0D0 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int *v5; // r9
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r15
  char *v13; // rcx
  __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 792);
  v5 = *(unsigned int **)(a3 + 8);
  v8 = v5 + 3;
  v9 = 16 * (v5[3] & *(_DWORD *)(a1 + 808));
  v10 = (unsigned __int64)&v5[4 * *v5 + 3];
  v11 = v9 - ((unsigned int)v9 & ~((_DWORD)v3 - 1)) + (~(v3 - 1) & ((unsigned __int64)&v5[4 * *v5 + 2] + v3 + 3));
  if ( (unsigned __int64)(v5 + 3) >= v10 )
    return 0LL;
  v12 = (*(unsigned __int8 *)(a3 + 20) >> 3) & 2;
  while ( 1 )
  {
    v13 = a2 ? *(char **)(a2 + 16) : *(char **)a3;
    result = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
               a1,
               *(_QWORD *)(a1 + 896),
               (v11 + (unsigned int)(16 * (*v8 - *(_DWORD *)(a3 + 16)))) | v12,
               a2,
               v13,
               (__int64)v8,
               0LL);
    if ( (int)result < 0 )
      break;
    v8 += 4;
    if ( (unsigned __int64)v8 >= v10 )
      return 0LL;
  }
  return result;
}
