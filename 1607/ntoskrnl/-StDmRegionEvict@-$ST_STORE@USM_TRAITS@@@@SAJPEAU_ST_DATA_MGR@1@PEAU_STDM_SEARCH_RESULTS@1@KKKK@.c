/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14021ECFC
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140118274 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14021EE98 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x140220258 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  int v5; // ebx
  __int64 v6; // r13
  ULONGLONG *v8; // rax
  int v9; // r9d
  __int64 v10; // rdx
  char v11; // r8
  void *v12; // rsp
  int Keys; // esi
  __int64 v14; // rbx
  int v15; // eax
  int *v16; // rbx
  int *v17; // rdi
  int v18; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  _DWORD v22[8]; // [rsp+428h] [rbp+8h] BYREF
  __int64 v23; // [rsp+448h] [rbp+28h]

  v5 = a2;
  v23 = a2;
  v6 = a3;
  memset(v22, 0, sizeof(v22));
  v22[4] |= 1u;
  v22[0] = v22[0] & 0xFFFFFFF8 | 1;
  v8 = SmEtwEnabled(0);
  if ( v8 )
  {
    v10 = *((_QWORD *)a1 + 129);
    if ( v10 )
      v11 = *(_BYTE *)(v6 + v10);
    else
      v11 = 0;
    SmEtwLogRegionOp((_DWORD)v8, 3, (_DWORD)a1, v6, 0, *(_WORD *)(*((_QWORD *)a1 + 127) + 2 * v6), v11);
  }
  v12 = alloca(1024LL);
  do
  {
    LODWORD(NumOfElements) = 256;
    Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys((_DWORD)a1, v5, v6, v9, a5, (__int64)Base, (__int64)&NumOfElements);
    if ( Keys < 0 || !(_DWORD)NumOfElements )
      break;
    v14 = (unsigned int)NumOfElements;
    qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
    v15 = Base[0];
    v16 = &Base[v14];
    v22[2] = Base[0];
    v17 = Base;
    v18 = 0;
LABEL_10:
    if ( v15 != *v17 )
      goto LABEL_13;
    while ( 1 )
    {
      ++v18;
      if ( ++v17 < v16 )
      {
        ++v15;
        goto LABEL_10;
      }
      if ( v17 != v16 )
        break;
LABEL_13:
      v22[3] = v18;
      Keys = ST_STORE<SM_TRAITS>::StDmPageRemove(a1, (__int64)v22);
      if ( Keys < 0 )
        return (unsigned int)Keys;
      v15 = *v17;
      v18 = 0;
      v22[2] = *v17;
    }
    v5 = v23;
  }
  while ( (unsigned int)NumOfElements >= 0x100 );
  return (unsigned int)Keys;
}
