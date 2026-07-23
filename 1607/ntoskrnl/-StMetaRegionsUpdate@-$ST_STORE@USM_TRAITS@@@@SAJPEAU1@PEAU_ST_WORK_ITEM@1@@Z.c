/*
 * XREFs of ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021F4D0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400A6598 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x14021C548 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021FB54 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  struct NP_CONTEXT **v4; // rbx
  int v5; // r13d
  __int64 v6; // r14
  unsigned int v7; // r8d
  __int64 v8; // r11
  int v9; // ebp
  int v10; // edi
  struct NP_CONTEXT::NP_CTX *v11; // r15
  struct NP_CONTEXT **v12; // rdx
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]

  v15 = a2;
  v2 = a1 + 1968;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 1968, &v14, 0LL);
  v7 = *(_DWORD *)(a1 + 2824) - v14;
  if ( (*(_DWORD *)(v8 + 16) & 1) != 0 )
  {
    v9 = 2;
    if ( v7 < 2 )
    {
      v11 = (struct NP_CONTEXT::NP_CTX *)(a1 + 80);
      v14 = 0;
      v6 = v2;
      goto LABEL_9;
    }
    goto LABEL_3;
  }
  if ( v7 < 8 )
  {
LABEL_3:
    v10 = 1075380276;
    goto LABEL_12;
  }
  v6 = a1 + 80;
  v11 = (struct NP_CONTEXT::NP_CTX *)v2;
  v9 = *(_DWORD *)(a1 + 2824) - v14;
  if ( *(_DWORD *)(v2 + 856) == v7 )
    v9 = v7 - 1;
  v14 = 0;
  if ( v9 )
  {
LABEL_9:
    while ( 1 )
    {
      v10 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v11, &v14);
      if ( v10 < 0 )
        break;
      ++v5;
      *(_BYTE *)(((unsigned __int64)v14 >> 3) + *(_QWORD *)(v6 + 848)) |= 1 << (v14 & 7);
      ++*(_DWORD *)(v6 + 856);
      if ( !--v9 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v10 = 0;
  }
LABEL_12:
  ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, v15);
  if ( v6 == v2 && v5 && v10 != -1073741818 )
  {
    v12 = (struct NP_CONTEXT **)(a1 + 96);
    if ( a1 == -80 )
      v12 = 0LL;
    if ( *((_DWORD *)*v12 + 10) > *(_DWORD *)*v12 )
      NP_CONTEXT::NpiPerformPageOut(*v12, (struct NP_CONTEXT::NP_CTX *)v12);
    if ( a1 != -144 )
      v4 = (struct NP_CONTEXT **)(a1 + 160);
    if ( *((_DWORD *)*v4 + 10) > *(_DWORD *)*v4 )
      NP_CONTEXT::NpiPerformPageOut(*v4, (struct NP_CONTEXT::NP_CTX *)v4);
  }
  return (unsigned int)v10;
}
