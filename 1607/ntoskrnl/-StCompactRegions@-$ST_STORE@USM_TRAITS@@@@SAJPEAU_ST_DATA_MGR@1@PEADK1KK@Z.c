/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14011D884
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140004700 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14011F95C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021D600 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14021F33C (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14000295C (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1400044B8 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140004548 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140117528 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14011C75C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14011C820 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14011CB48 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DEF8 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14011E100 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14011E168 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14011E848 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14021B74C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v8; // rcx
  _WORD *v9; // rax
  int v10; // r13d
  _QWORD *v11; // rdi
  int v12; // ebx
  unsigned __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 LeafSibling; // rax
  _DWORD *Chunk; // rax
  int v18; // r9d
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // r10d
  unsigned int v25; // r8d
  __int64 v26; // rdx
  int v27; // eax
  int v28; // edx
  __int64 v29; // rbx
  _DWORD *v30; // rbx
  int v31; // eax
  __int64 v32; // r8
  _DWORD **v33; // rax
  _DWORD **v34; // rax
  int v35; // eax
  __int64 v36; // rax
  __int64 v38; // r8
  unsigned int v39; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v40; // [rsp+24h] [rbp-DCh]
  int v41; // [rsp+28h] [rbp-D8h]
  __int128 v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v43; // [rsp+40h] [rbp-C0h]
  unsigned int v44; // [rsp+44h] [rbp-BCh]
  unsigned int v45; // [rsp+48h] [rbp-B8h]
  __int64 v46; // [rsp+50h] [rbp-B0h]
  _DWORD *v47; // [rsp+58h] [rbp-A8h]
  _WORD *v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  _WORD *v50; // [rsp+70h] [rbp-90h]
  _QWORD v51[3]; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+98h] [rbp-68h]
  int v53; // [rsp+9Ch] [rbp-64h]
  char v54; // [rsp+A8h] [rbp-58h] BYREF

  v41 = 0;
  v8 = *(_QWORD *)(a1 + 1016);
  v49 = a2;
  v42 = 0uLL;
  v46 = a4;
  v9 = (_WORD *)(v8 + 2LL * a5);
  v43 = a3;
  v40 = a5;
  v50 = (_WORD *)(v8 + 2LL * a3);
  v48 = v9;
  if ( v50 == v9 )
    v10 = 0;
  else
    v10 = *v9 & 0x1FFF;
  v11 = (_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = a3 << *(_DWORD *)(a1 + 812);
  v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          (char **)(a1 + 64),
          *(_DWORD *)(a1 + 768),
          a1 + 88);
  if ( v12 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      a1 + 64,
      &v42,
      a1 + 88);
    v13 = *((_QWORD *)&v42 + 1);
    v14 = v42;
    while ( 1 )
    {
      if ( v41 )
      {
        **(_DWORD **)(a1 + 760) = v43 << *(_DWORD *)(a1 + 812);
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                (char **)(a1 + 64),
                *(_DWORD *)(a1 + 768),
                a1 + 88);
        if ( v12 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          &v42,
          a1 + 64);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          a1 + 64,
          &v42,
          a1 + 88);
        v13 = *((_QWORD *)&v42 + 1);
        v14 = v42;
      }
      if ( !v14 )
      {
LABEL_56:
        v12 = 0;
        break;
      }
      v13 += 4LL;
      v15 = (unsigned __int16)*(_DWORD *)v14 + 4LL;
      *((_QWORD *)&v42 + 1) = v13;
      if ( v13 < v14 + 4 * v15 )
        goto LABEL_12;
      if ( a1 == -64 )
        v33 = 0LL;
      else
        v33 = (_DWORD **)(a1 + 80);
      if ( **v33 == -1 )
      {
        if ( a1 == -64 )
          v34 = 0LL;
        else
          v34 = (_DWORD **)(a1 + 80);
        if ( **v34 == -1 )
          LeafSibling = *(_QWORD *)(v14 + 8);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        a1 + 64,
                        v14);
        if ( LeafSibling == -1 )
          goto LABEL_13;
      }
      if ( LeafSibling )
      {
        v13 = LeafSibling + 16;
        *(_QWORD *)&v42 = LeafSibling;
        *((_QWORD *)&v42 + 1) = LeafSibling + 16;
        v14 = LeafSibling;
LABEL_12:
        LeafSibling = v13;
      }
LABEL_13:
      if ( LeafSibling == -1 )
        goto LABEL_72;
      if ( !LeafSibling )
        goto LABEL_56;
      v44 = *(_DWORD *)LeafSibling;
      Chunk = (_DWORD *)SmHpIdGetChunk((_DWORD *)(a1 + 192), v44);
      v18 = *Chunk & *(_DWORD *)(a1 + 808);
      v19 = *Chunk >> *(_DWORD *)(a1 + 812);
      v47 = Chunk;
      if ( v19 != v43 )
        goto LABEL_56;
      v20 = *(_DWORD *)(a1 + 824);
      v21 = 4096;
      if ( (Chunk[1] & 0xFFF) != 0 )
        v21 = Chunk[1] & 0xFFF;
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 8LL);
      v23 = (unsigned int)(v21 + v20 + 15) >> 4;
      v45 = v23;
      v24 = v20 + (~(v22 - 1) & (v21 + v22 - 1));
      v25 = v40;
      if ( v40 == v43 || v23 + (*v48 & 0x1FFF) <= *(_DWORD *)(a1 + 816) )
      {
        v26 = v46;
      }
      else
      {
        v10 = 0;
        v26 = v49;
        v25 = v43;
        v41 = 0;
        v48 = v50;
        v46 = v49;
        v40 = v43;
      }
      if ( v18 != v10 || v43 != v25 )
      {
        if ( !v26 )
        {
          v12 = -1073741802;
          break;
        }
        memmove((void *)(v26 + (unsigned int)(16 * v10)), (const void *)(v49 + (unsigned int)(16 * v18)), v24);
        v27 = *(_DWORD *)(a1 + 112);
        v28 = v10 | (v40 << *(_DWORD *)(a1 + 812));
        v39 = v28;
        if ( v27 == -1 || !v27 )
          v29 = a1 + 96;
        else
          v29 = *v11 + 16LL * (unsigned int)(v27 - 1);
        if ( *(_QWORD *)v29 == v14 )
        {
          *(_QWORD *)(v29 + 8) = v13;
        }
        else
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (__int64 *)(a1 + 64),
            a1 + 88);
          if ( *(_DWORD *)(a1 + 112) == -1 )
          {
            *(_OWORD *)v29 = v42;
          }
          else
          {
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              (char **)(a1 + 64),
              *(_DWORD *)(v14 + 16),
              a1 + 88);
            v35 = *(_DWORD *)(a1 + 112);
            if ( v35 == -1 || !v35 )
              v36 = a1 + 96;
            else
              v36 = *v11 + 16LL * (unsigned int)(v35 - 1);
            *(_QWORD *)(v36 + 8) = v13;
          }
          v28 = v39;
        }
        if ( v41 )
        {
LABEL_29:
          v30 = v47;
          **(_DWORD **)(a1 + 760) = *v47;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            *(unsigned int *)(a1 + 768));
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
            &v42,
            a1 + 64);
          v13 = 0LL;
          *v30 = v39;
          v39 = v44;
          v14 = 0LL;
          v42 = 0uLL;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            v51,
            0);
          v52 = 0;
          v51[0] = &v54;
          v53 = 8;
          v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                  (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                  &v39,
                  (__int64)v51);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
            a1 + 64,
            (__int64)v51,
            1);
          if ( v12 < 0 )
          {
            v38 = v44;
            *v47 = **(_DWORD **)(a1 + 760);
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              a1 + 64,
              a1 + 88,
              v38);
            break;
          }
          v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDelete(
                  (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                  *(unsigned int *)(a1 + 768),
                  a1 + 88);
          if ( v12 == -1073741818 )
            break;
        }
        else
        {
          **(_DWORD **)(a1 + 760) = v28;
          v31 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  *(unsigned int *)(a1 + 768));
          if ( !v31 )
          {
            v41 = 1;
            goto LABEL_29;
          }
          if ( v31 == -1 )
          {
LABEL_72:
            v12 = -1073741818;
            break;
          }
          v32 = v44;
          *v47 = v39;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            v32);
        }
        v23 = v45;
        if ( v43 != v40 )
        {
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v43, -v45, 1);
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v40, v23, 0);
        }
      }
      v10 += v23;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL) != 2 )
      {
        v12 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    &v42,
    a1 + 64);
  return (unsigned int)v12;
}
