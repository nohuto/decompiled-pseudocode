/*
 * XREFs of ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400041D8
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004130 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StEmptyStore@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14021F3CC (-StEmptyStore@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 * Callees:
 *     SmHpChunkHeapInitialize @ 0x140002818 (SmHpChunkHeapInitialize.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x140004408 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004428 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1400044B8 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400045D8 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     SmHpChunkHeapCleanup @ 0x140004668 (SmHpChunkHeapCleanup.c)
 *     ?StDmInvalidateCurrentRegions@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x1400046B4 (-StDmInvalidateCurrentRegions@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     RtlNumberOfClearBits @ 0x140076ADC (RtlNumberOfClearBits.c)
 *     SmHpChunkFree @ 0x140117B64 (SmHpChunkFree.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14011C75C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14021BF80 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCleanup(__int64 a1, unsigned int a2)
{
  void *v4; // rcx
  PVOID *v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rsi
  __int16 v8; // r8
  __int64 v9; // r14
  unsigned int *v10; // rsi
  __int64 v11; // rbp
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 760) )
  {
    SmHpChunkFree(a1 + 192);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 760) = 0LL;
      *(_DWORD *)(a1 + 768) = 0;
    }
  }
  v18 = *(_QWORD *)(a1 + 464);
  SmHpChunkHeapCleanup(a1 + 192);
  if ( a2 )
    SmHpChunkHeapInitialize((char *)(a1 + 192), (__int64)&v18);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    a1,
    a1 + 24);
  if ( *(_DWORD *)(a1 + 48) != -1 )
  {
    v4 = *(void **)(a1 + 24);
    if ( v4 )
    {
      if ( !a2 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  if ( *(_QWORD *)a1 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    a1 + 88,
    a2);
  if ( *(_QWORD *)(a1 + 64) )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1 + 64);
  v5 = (PVOID *)(a1 + 152);
  v6 = (_QWORD *)(a1 + 128);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
    a1 + 128,
    a1 + 152);
  if ( *(_DWORD *)(a1 + 176) != -1 && *v5 && !a2 )
    ExFreePoolWithTag(*v5, 0);
  if ( *v6 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(a1 + 128);
  if ( a2 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *v6 = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1344), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1480), a2);
  NP_CONTEXT::NpCleanup((struct NP_CONTEXT *)(a1 + 1616), a2);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = a1 + 1344;
    *(_QWORD *)(a1 + 80) = a1 + 1480;
    *(_QWORD *)(a1 + 144) = a1 + 1616;
  }
  if ( *(_QWORD *)(a1 + 1016) )
  {
    ST_STORE<SM_TRAITS>::StDmInvalidateCurrentRegions(a1);
    LODWORD(v7) = -1;
    while ( 1 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (_DWORD)v7 == *(_DWORD *)(a1 + 788) )
        break;
      v8 = *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * v7);
      if ( (v8 & 0x1FFF) != 0 )
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, (unsigned int)v7, -(v8 & 0x1FFF), 0LL);
    }
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && !a2 && RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 840)) )
      ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(a1, 1LL, a1 + 864);
    v9 = *(_QWORD *)(a1 + 1016);
    v10 = (unsigned int *)(a1 + 1072);
    v11 = 6LL;
    while ( a2 )
    {
      v17 = *v10;
      if ( (_DWORD)v17 == -1 )
        goto LABEL_31;
      if ( (*(_WORD *)(v9 + 2 * v17) & 0xC000) == 0 )
        break;
LABEL_33:
      v10 += 6;
      if ( !--v11 )
        goto LABEL_34;
    }
    if ( *v10 != -1 )
    {
      ExFreePoolWithTag(*((PVOID *)v10 + 1), 0);
      ExFreePoolWithTag(*((PVOID *)v10 + 2), 0);
    }
LABEL_31:
    if ( a2 )
    {
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *v10 = -1;
    }
    goto LABEL_33;
  }
LABEL_34:
  if ( !a2 )
  {
    v12 = *(void **)(a1 + 848);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    v13 = *(void **)(a1 + 1048);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v14 = *(void **)(a1 + 1760);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v15 = *(void **)(a1 + 1768);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v16 = *(void **)(a1 + 1776);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
  }
}
