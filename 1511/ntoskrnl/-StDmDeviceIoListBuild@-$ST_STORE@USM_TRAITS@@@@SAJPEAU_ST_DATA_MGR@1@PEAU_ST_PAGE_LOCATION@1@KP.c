/*
 * XREFs of ?StDmDeviceIoListBuild@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAXPEAU_PF_QUEUE@@PEAK@Z @ 0x140204C6C
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     qsort @ 0x140144B80 (qsort.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1402042A0 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402046E4 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoListBuild(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int16 *v6; // rbx
  unsigned __int64 v8; // rsi
  int v9; // r15d
  unsigned int v11; // ecx
  unsigned int *v13; // r10
  unsigned int v14; // eax
  int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // r12d
  int v18; // r11d
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 i; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 *v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 j; // rcx
  int v30; // r15d
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // r8
  _QWORD *v36; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v37; // [rsp+28h] [rbp-8h]
  int v38; // [rsp+70h] [rbp+40h]

  v36 = 0LL;
  v6 = a2 + 8;
  v8 = (unsigned __int64)&a2[8 * a3];
  v37 = (__int64 *)&v36;
  v9 = 0;
  v11 = *(_DWORD *)a2;
  v13 = (unsigned int *)(a2 + 8);
  if ( (unsigned __int64)(a2 + 8) < v8 )
  {
    do
    {
      v14 = *v13;
      if ( *v13 < v11 )
        break;
      v13 += 4;
      v11 = v14;
    }
    while ( (unsigned __int64)v13 < v8 );
    if ( (unsigned __int64)v13 < v8 )
      qsort(a2, a3, 0x10uLL, ST_STORE<SM_TRAITS>::StpLocationCompare);
  }
  v15 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 164);
  v16 = 1;
  v17 = (((unsigned int)a2[2] + *(_DWORD *)(a1 + 176) + 15) >> 4) + *(_DWORD *)a2;
  while ( (unsigned __int64)v6 < v8 )
  {
    v18 = v15;
    v19 = *(_DWORD *)v6 - v17;
    v15 = *(_DWORD *)v6 >> *(_DWORD *)(a1 + 164);
    v38 = v15;
    v17 = *(_DWORD *)v6 + (((unsigned int)v6[2] + *(_DWORD *)(a1 + 176) + 15) >> 4);
    if ( v19 <= 0x400 && v18 == v15 )
    {
      ++v16;
    }
    else
    {
      v20 = (unsigned __int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, &v6[-8 * v16], v16, a4);
      if ( !v20 )
        goto LABEL_18;
      v16 = 1;
      *(_QWORD *)v20 = *(_DWORD *)v20 & 7 | ((*v37 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      *v37 = v20 | *(_DWORD *)v37 & 7;
      v21 = *(_QWORD *)(a1 + 440);
      v37 = (__int64 *)v20;
      v22 = *(_DWORD *)(v20 + 28) >> 5;
      for ( i = *(_QWORD *)(v21 + 16); *(_DWORD *)i < v22; i += 32LL )
        ;
      ++*(_WORD *)(i + 4);
      v15 = v38;
      *(_QWORD *)(v21 + 40) = MEMORY[0xFFFFF78000000008];
      v9 += *(_DWORD *)(i + 8);
    }
    v6 += 8;
  }
  v24 = (unsigned __int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild(a1, &v6[-8 * v16], v16, a4);
  if ( v24 )
  {
    *(_QWORD *)v24 = *(_DWORD *)v24 & 7 | ((*v37 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    *v37 = v24 | *(_DWORD *)v37 & 7;
    v37 = (__int64 *)v24;
    v27 = *(_QWORD *)(a1 + 440);
    v28 = *(_DWORD *)(v24 + 28) >> 5;
    for ( j = *(_QWORD *)(v27 + 16); *(_DWORD *)j < v28; j += 32LL )
      ;
    ++*(_WORD *)(j + 4);
    *(_QWORD *)(v27 + 40) = MEMORY[0xFFFFF78000000008];
    v26 = v37;
    v30 = *(_DWORD *)(j + 8) + v9;
    v31 = (unsigned __int64)*v37 >> 3;
    if ( v31 )
    {
      v32 = **(_QWORD **)(a5 + 8);
      *v37 = *(_QWORD *)a5 | *v37 & 7;
      v33 = (v32 >> 3) + v31;
      *(_QWORD *)a5 = v36;
      if ( *(_QWORD *)(a5 + 8) == a5 )
        *(_QWORD *)(a5 + 8) = v37;
      **(_QWORD **)(a5 + 8) = **(_DWORD **)(a5 + 8) & 7 | (8 * v33);
      v26 = (__int64 *)&v36;
      v36 = 0LL;
      v37 = (__int64 *)&v36;
    }
    v25 = 0;
    *a6 = v30;
    goto LABEL_28;
  }
LABEL_18:
  v25 = -1073741670;
  while ( 1 )
  {
    v26 = v37;
LABEL_28:
    if ( v26 == (__int64 *)&v36 )
      break;
    v34 = (__int64)v36;
    v36 = (_QWORD *)(*v36 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (__int64 *)v34 == v26 )
    {
      v36 = 0LL;
      v37 = (__int64 *)&v36;
    }
    else
    {
      *v26 = *v26 & 7 | (8 * ((unsigned __int64)*v26 >> 3) - 8);
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(a1, v34);
  }
  return v25;
}
