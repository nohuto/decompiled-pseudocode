/*
 * XREFs of ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DB5BC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140255CF0 (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB88C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400DB9AC (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     RtlNumberOfClearBits @ 0x1400EF684 (RtlNumberOfClearBits.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1402510C4 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, int a2)
{
  int v2; // esi
  void *v4; // rcx
  _QWORD *v5; // rdi
  void *v6; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  _QWORD **v9; // rdi
  _QWORD *v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // r9
  __int16 v13; // cx
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rbp
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  _QWORD *v21; // r8
  _QWORD *v22; // r8
  unsigned int v23; // ebp
  __int64 v24; // r11
  int v25; // r9d
  unsigned int v26; // ecx
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // r11
  unsigned int v30; // r14d
  unsigned int v31; // edx
  _QWORD *v32; // r8
  __int64 i; // rax
  int v34; // r8d
  unsigned int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 j; // rdi

  v2 = a2;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(a1, a1 + 24);
  if ( *(_DWORD *)(a1 + 48) != -1 )
  {
    v4 = *(void **)(a1 + 24);
    if ( v4 )
    {
      if ( !v2 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  if ( *(_QWORD *)a1 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNodeFree(a1);
  v5 = (_QWORD *)(a1 + 64);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(a1 + 64, a1 + 88);
  if ( *(_DWORD *)(a1 + 112) != -1 )
  {
    v6 = *(void **)(a1 + 88);
    if ( v6 )
    {
      if ( !v2 )
        ExFreePoolWithTag(v6, 0);
    }
  }
  if ( *v5 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeNodeFree(a1 + 64);
  if ( v2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *v5 = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
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
      v21 = *v7;
      *v7 = (_QWORD *)**v7;
      if ( v21 == v8 )
      {
        *v7 = 0LL;
        *(_QWORD *)(a1 + 848) = a1 + 840;
      }
      else
      {
        --*v8;
      }
      ExFreePoolWithTag(v21, 0);
    }
    v9 = (_QWORD **)(a1 + 976);
    while ( 1 )
    {
      v10 = *(_QWORD **)(a1 + 984);
      if ( v10 == v9 )
        break;
      v22 = *v9;
      *v9 = (_QWORD *)**v9;
      if ( v22 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 984) = a1 + 976;
      }
      else
      {
        --*v10;
      }
      ExFreePoolWithTag(v22, 0);
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
      v23 = *(_DWORD *)(a1 + 192);
      v24 = *(_QWORD *)(a1 + 200);
      v25 = v11 + 1 < v23 ? v11 + 1 : 0;
      v26 = v23 - 1;
      if ( (v24 & 4) != 0 )
      {
        v27 = 1LL;
        v28 = 32;
      }
      else
      {
        v27 = 0LL;
        v28 = 0;
      }
      v29 = v24 - 4 * v27;
      while ( 1 )
      {
        v30 = v28 + v26;
        v31 = v28 + v25;
        if ( v26 - v25 == -1 )
          goto LABEL_62;
        v32 = (_QWORD *)(v29 + 8 * ((unsigned __int64)v31 >> 6));
        for ( i = ((1LL << (v31 & 0x3F)) - 1) | ~*v32; i == -1; i = ~*v32 )
        {
          if ( (unsigned __int64)++v32 > v29 + 8 * ((unsigned __int64)v30 >> 6) )
            goto LABEL_62;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v34 = i + ((unsigned int)(((__int64)v32 - v29) >> 3) << 6);
        if ( v34 > v30 )
        {
LABEL_62:
          v34 = -1;
          goto LABEL_63;
        }
        if ( v34 != -1 )
          break;
LABEL_63:
        if ( !v25 )
          goto LABEL_73;
        v35 = v11 + 2;
        if ( v11 + 2 > v23 )
          v35 = *(_DWORD *)(a1 + 192);
        v26 = v35 - 1;
        v25 = 0;
      }
      v34 -= v28;
LABEL_73:
      if ( v34 <= (int)v11 )
        v34 = *(_DWORD *)(a1 + 140);
      v11 = v34;
LABEL_18:
      if ( v11 == *(_DWORD *)(a1 + 140) )
      {
        v2 = a2;
        if ( (*(_DWORD *)(a1 + 128) & 0x40000) != 0 && !a2 && RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 192)) )
          ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL);
        v14 = *(_QWORD *)(a1 + 472);
        v15 = (unsigned int *)(a1 + 504);
        v16 = 6LL;
        while ( a2 )
        {
          v38 = *v15;
          if ( (_DWORD)v38 == -1 )
            goto LABEL_29;
          if ( (*(_WORD *)(v14 + 2 * v38) & 0xC000) == 0 )
            break;
LABEL_31:
          v15 += 6;
          if ( !--v16 )
            goto LABEL_32;
        }
        if ( *v15 != -1 )
        {
          ExFreePoolWithTag(*((PVOID *)v15 + 1), 0);
          ExFreePoolWithTag(*((PVOID *)v15 + 2), 0);
        }
LABEL_29:
        if ( a2 )
        {
          *(_QWORD *)v15 = 0LL;
          *((_QWORD *)v15 + 1) = 0LL;
          *((_QWORD *)v15 + 2) = 0LL;
          *v15 = -1;
        }
        goto LABEL_31;
      }
      v12 = *(_QWORD *)(a1 + 472);
      v13 = *(_WORD *)(v12 + 2LL * v11);
      if ( (v13 & 0x1FFF) != 0 )
      {
        v36 = -(v13 & 0x1FFF);
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v37 = 0LL;
        else
          v37 = *(unsigned __int16 *)(v12 + 2LL * v11) >> 13;
        *(_WORD *)(v12 + 2LL * v11) += v36;
        *(_DWORD *)(a1 + 8 * v37 + 1092) += v36;
        if ( v36 <= 0 )
        {
          if ( (*(_WORD *)(v12 + 2LL * v11) & 0x1FFF) == 0 && v11 != *(_DWORD *)(a1 + 16LL * (unsigned int)v37 + 648) )
            ST_STORE<SM_TRAITS>::StReleaseRegion(a1, v11);
        }
        else
        {
          *(_DWORD *)(a1 + 16LL * (unsigned int)v37 + 652) += v36;
        }
      }
    }
  }
LABEL_32:
  if ( !v2 )
  {
    v17 = *(void **)(a1 + 200);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    v18 = *(void **)(a1 + 1056);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    v19 = *(void **)(a1 + 1064);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    v20 = *(void **)(a1 + 1072);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( *(_QWORD *)(a1 + 256) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 300); j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8 * j) )
          (*(void (**)(void))(a1 + 288))();
      }
      if ( (*(_DWORD *)(a1 + 320) & 2) == 0 )
        (*(void (__fastcall **)(_QWORD))(a1 + 288))(*(_QWORD *)(a1 + 256));
    }
  }
}
