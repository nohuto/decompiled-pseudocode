/*
 * XREFs of ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400F6DB0
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F6D04 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140206A98 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140021DFC (RtlNumberOfClearBits.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400F6B34 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401118B8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140202030 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140205848 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, int a2)
{
  int v3; // r12d
  void *v4; // rcx
  void *v5; // rcx
  unsigned int v6; // r13d
  _QWORD **v7; // rbx
  _QWORD *v8; // rcx
  _QWORD **v9; // rbx
  _QWORD *v10; // rcx
  int v11; // ebx
  _WORD *v12; // rdx
  __int64 v13; // r14
  unsigned int *v14; // rbx
  __int64 v15; // rsi
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // r8
  unsigned int v22; // esi
  __int64 v23; // r11
  int v24; // r9d
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // r10d
  __int64 v28; // r11
  unsigned int v29; // ebp
  unsigned int v30; // edx
  _QWORD *v31; // r8
  __int64 v32; // rax
  int v33; // r8d
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax

  v3 = a2;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(a1, a1 + 24);
  if ( *(_DWORD *)(a1 + 48) != -1 )
  {
    v4 = *(void **)(a1 + 24);
    if ( v4 )
    {
      if ( !v3 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  if ( *(_QWORD *)a1 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNodeFree(a1);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(a1 + 64, a1 + 88);
  if ( *(_DWORD *)(a1 + 112) != -1 )
  {
    v5 = *(void **)(a1 + 88);
    if ( v5 )
    {
      if ( !v3 )
        ExFreePoolWithTag(v5, 0);
    }
  }
  if ( *(_QWORD *)(a1 + 64) )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNodeFree(a1 + 64);
  v6 = 0;
  if ( v3 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 16) = a1 + 776;
    *(_QWORD *)(a1 + 80) = a1 + 912;
  }
  else
  {
    v7 = (_QWORD **)(a1 + 840);
    while ( 1 )
    {
      v8 = *(_QWORD **)(a1 + 848);
      if ( v8 == v7 )
        break;
      v20 = *v7;
      *v7 = (_QWORD *)**v7;
      if ( v20 == v8 )
      {
        *(_QWORD *)(a1 + 848) = a1 + 840;
        *v7 = 0LL;
      }
      else
      {
        --*v8;
      }
      ExFreePoolWithTag(v20, 0);
    }
    v9 = (_QWORD **)(a1 + 976);
    while ( 1 )
    {
      v10 = *(_QWORD **)(a1 + 984);
      if ( v10 == v9 )
        break;
      v21 = *v9;
      *v9 = (_QWORD *)**v9;
      if ( v21 == v10 )
      {
        *(_QWORD *)(a1 + 984) = a1 + 976;
        *v9 = 0LL;
      }
      else
      {
        --*v10;
      }
      ExFreePoolWithTag(v21, 0);
    }
  }
  if ( *(_QWORD *)(a1 + 472) )
  {
    ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1);
    v11 = -1;
    while ( 1 )
    {
      if ( !(unsigned __int8)*(_DWORD *)(a1 + 128) )
      {
        ++v11;
        goto LABEL_18;
      }
      v22 = *(_DWORD *)(a1 + 192);
      v23 = *(_QWORD *)(a1 + 200);
      v24 = v11 + 1;
      if ( v11 + 1 >= v22 )
        v24 = 0;
      v25 = v22 - 1;
      if ( (v23 & 4) != 0 )
      {
        v26 = 1LL;
        v27 = 32;
      }
      else
      {
        v26 = 0LL;
        v27 = 0;
      }
      v28 = v23 - 4 * v26;
      while ( 1 )
      {
        v29 = v27 + v25;
        v30 = v27 + v24;
        if ( v25 - v24 == -1 )
          goto LABEL_72;
        v31 = (_QWORD *)(v28 + 8 * ((unsigned __int64)v30 >> 6));
        v32 = ((1LL << (v30 & 0x3F)) - 1) | ~*v31;
        if ( v32 == -1 )
        {
          while ( (unsigned __int64)++v31 <= v28 + 8 * ((unsigned __int64)v29 >> 6) )
          {
            v32 = ~*v31;
            if ( *v31 )
              goto LABEL_66;
          }
LABEL_72:
          v33 = -1;
          goto LABEL_68;
        }
LABEL_66:
        _BitScanForward64((unsigned __int64 *)&v32, ~v32);
        v33 = v32 + ((unsigned int)(((__int64)v31 - v28) >> 3) << 6);
        if ( v33 > v29 )
        {
          v33 = -1;
          goto LABEL_68;
        }
        if ( v33 != -1 )
          break;
LABEL_68:
        if ( !v24 )
          goto LABEL_75;
        v34 = v11 + 2;
        v24 = 0;
        if ( v11 + 2 > v22 )
          v34 = *(_DWORD *)(a1 + 192);
        v25 = v34 - 1;
      }
      v33 -= v27;
LABEL_75:
      if ( v33 <= v11 )
        v33 = *(_DWORD *)(a1 + 140);
      v11 = v33;
LABEL_18:
      if ( v11 == *(_DWORD *)(a1 + 140) )
        break;
      v12 = (_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * (unsigned int)v11);
      if ( (*v12 & 0x1FFF) != 0 )
      {
        v35 = -(*v12 & 0x1FFF);
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v36 = 0LL;
        else
          v36 = (unsigned __int16)*v12 >> 13;
        *v12 -= *v12 & 0x1FFF;
        *(_DWORD *)(a1 + 8 * v36 + 1092) += v35;
        v37 = a1 + 16 * v36;
        if ( v35 <= 0 )
        {
          if ( (*v12 & 0x1FFF) == 0 && v11 != *(_DWORD *)(v37 + 648) )
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1);
        }
        else
        {
          *(_DWORD *)(v37 + 652) += v35;
        }
      }
    }
    v3 = a2;
    if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0 && !a2 && RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 192)) )
      ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL, a1 + 216);
    v13 = *(_QWORD *)(a1 + 472);
    v14 = (unsigned int *)(a1 + 504);
    v15 = 6LL;
    while ( a2 )
    {
      v38 = *v14;
      if ( (_DWORD)v38 == -1 )
        goto LABEL_29;
      if ( (*(_WORD *)(v13 + 2 * v38) & 0xC000) == 0 )
        break;
LABEL_31:
      v14 += 6;
      if ( !--v15 )
        goto LABEL_32;
    }
    if ( *v14 != -1 )
    {
      ExFreePoolWithTag(*((PVOID *)v14 + 1), 0);
      ExFreePoolWithTag(*((PVOID *)v14 + 2), 0);
    }
LABEL_29:
    if ( a2 )
    {
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 1) = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *v14 = -1;
    }
    goto LABEL_31;
  }
LABEL_32:
  if ( !v3 )
  {
    v16 = *(void **)(a1 + 200);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v17 = *(void **)(a1 + 1056);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    v18 = *(void **)(a1 + 1064);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    v19 = *(void **)(a1 + 1072);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( *(_QWORD *)(a1 + 256) )
    {
      if ( *(_DWORD *)(a1 + 300) )
      {
        do
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6) )
            (*(void (**)(void))(a1 + 288))();
          ++v6;
        }
        while ( v6 < *(_DWORD *)(a1 + 300) );
      }
      if ( (*(_DWORD *)(a1 + 320) & 2) == 0 )
        (*(void (__fastcall **)(_QWORD))(a1 + 288))(*(_QWORD *)(a1 + 256));
    }
  }
}
