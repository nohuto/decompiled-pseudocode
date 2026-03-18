/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x140255608
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140255918 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x140256650 (-StStagingRegionMap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z.c)
 * Callees:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401413D0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x140255790 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x1402572A0 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 v6; // r13
  int v8; // r9d
  __int64 v9; // rcx
  char v10; // r8
  void *v11; // rsp
  int Keys; // r14d
  __int64 v13; // rbx
  int v14; // eax
  int *v15; // rbx
  int *v16; // rdi
  int v17; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  _DWORD v21[8]; // [rsp+428h] [rbp+8h] BYREF
  __int64 v22; // [rsp+448h] [rbp+28h]

  v5 = a2;
  v22 = a2;
  v6 = a3;
  memset(v21, 0, sizeof(v21));
  v21[4] |= 1u;
  v21[0] = v21[0] & 0xFFFFFFF8 | 1;
  if ( (dword_140353094 & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 488);
    if ( v9 )
      v10 = *(_BYTE *)(v6 + v9);
    else
      v10 = 0;
    SmEtwLogRegionOp((unsigned int)&qword_140353088, 3, a1, v6, 0, *(_WORD *)(*(_QWORD *)(a1 + 472) + 2 * v6), v10);
  }
  v11 = alloca(1024LL);
  do
  {
    LODWORD(NumOfElements) = 256;
    Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys(a1, v5, v6, v8, a5, (__int64)Base, (__int64)&NumOfElements);
    if ( Keys < 0 || !(_DWORD)NumOfElements )
      break;
    v13 = (unsigned int)NumOfElements;
    qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
    v14 = Base[0];
    v15 = &Base[v13];
    v21[2] = Base[0];
    v16 = Base;
    v17 = 0;
LABEL_10:
    if ( v14 != *v16 )
      goto LABEL_13;
    while ( 1 )
    {
      ++v17;
      if ( ++v16 < v15 )
      {
        ++v14;
        goto LABEL_10;
      }
      if ( v16 != v15 )
        break;
LABEL_13:
      v21[3] = v17;
      Keys = ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)a1, (__int64)v21);
      if ( Keys < 0 )
        return (unsigned int)Keys;
      v14 = *v16;
      v17 = 0;
      v21[2] = *v16;
    }
    v5 = v22;
  }
  while ( (unsigned int)NumOfElements >= 0x100 );
  return (unsigned int)Keys;
}
