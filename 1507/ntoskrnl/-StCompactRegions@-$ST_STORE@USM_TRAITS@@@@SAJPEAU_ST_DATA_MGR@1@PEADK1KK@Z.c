/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140140460
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400DB9F8 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140143E2C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140252EF8 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140255C60 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB88C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400DB91C (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140140290 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140140930 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x140140998 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1401421C4 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1401424F4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1401428FC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140142FB8 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14014339C (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPE.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140250D00 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // r10
  unsigned int v8; // r15d
  _WORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebx
  unsigned __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r15d
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  __int64 v24; // rdx
  int v25; // ebx
  unsigned int v26; // r15d
  int v27; // eax
  __int64 v28; // rbx
  int v29; // eax
  _DWORD **v30; // rax
  _DWORD **v31; // rax
  __int64 LeafSibling; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-48h]
  unsigned int v37; // [rsp+24h] [rbp-44h]
  __int64 v38; // [rsp+30h] [rbp-38h]
  _WORD *v39; // [rsp+38h] [rbp-30h]
  _WORD *v40; // [rsp+40h] [rbp-28h]
  _OWORD v41[2]; // [rsp+48h] [rbp-20h] BYREF
  int v42; // [rsp+B0h] [rbp+48h]

  v6 = *(_QWORD *)(a1 + 472);
  v36 = 0;
  v41[0] = 0uLL;
  v8 = a3;
  v9 = (_WORD *)(v6 + 2LL * a5);
  v39 = v9;
  v40 = (_WORD *)(v6 + 2LL * a3);
  if ( v40 == v9 )
  {
    v42 = 0;
  }
  else
  {
    v42 = *v9 & 0x1FFF;
    v8 = a3;
  }
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
  v10 = (_QWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 56) &= ~1u;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
          a1 + 64,
          v8 << *(_DWORD *)(a1 + 164),
          a1 + 88);
  if ( v11 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
      a1 + 64,
      v41,
      a1 + 88);
    v12 = *((_QWORD *)&v41[0] + 1);
    v13 = *(_QWORD *)&v41[0];
    while ( 1 )
    {
      if ( v36 )
      {
        v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
                a1 + 64,
                v8 << *(_DWORD *)(a1 + 164),
                a1 + 88);
        if ( v11 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v41, a1 + 64);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
          a1 + 64,
          v41,
          a1 + 88);
        v12 = *((_QWORD *)&v41[0] + 1);
        v13 = *(_QWORD *)&v41[0];
      }
      if ( !v13 )
      {
LABEL_56:
        v11 = 0;
        break;
      }
      v12 += 8LL;
      v14 = (unsigned __int16)*(_DWORD *)v13;
      *((_QWORD *)&v41[0] + 1) = v12;
      if ( v12 < v13 + 8 * v14 + 16 )
        goto LABEL_14;
      if ( a1 == -64 )
        v30 = 0LL;
      else
        v30 = (_DWORD **)(a1 + 80);
      if ( **v30 == -1 )
      {
        if ( a1 == -64 )
          v31 = 0LL;
        else
          v31 = (_DWORD **)(a1 + 80);
        if ( **v31 == -1 )
          LeafSibling = *(_QWORD *)(v13 + 8);
        else
          LeafSibling = 3358LL;
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindLeafSibling(
                        a1 + 64,
                        v13);
        if ( LeafSibling == -1 )
        {
          v15 = -1LL;
          goto LABEL_15;
        }
      }
      if ( LeafSibling )
      {
        v12 = LeafSibling + 16;
        *(_QWORD *)&v41[0] = LeafSibling;
        *((_QWORD *)&v41[0] + 1) = LeafSibling + 16;
        v13 = LeafSibling;
LABEL_14:
        v15 = v12;
        goto LABEL_15;
      }
      v15 = 0LL;
LABEL_15:
      if ( v15 == -1 )
        goto LABEL_75;
      if ( !v15 )
        goto LABEL_56;
      v16 = *(_DWORD *)v15 & *(_DWORD *)(a1 + 160);
      if ( *(_DWORD *)v15 >> *(_DWORD *)(a1 + 164) != a3 )
        goto LABEL_56;
      v11 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
              a1,
              *(unsigned int *)(v15 + 4),
              a1 + 24);
      if ( v11 == -1073741818 )
        break;
      v17 = *(_DWORD *)(a1 + 48);
      if ( v17 == -1 || !v17 )
        v18 = a1 + 32;
      else
        v18 = *(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(v17 - 1);
      v19 = 4096;
      v20 = *(_DWORD *)(a1 + 176);
      v21 = a5;
      v38 = *(_QWORD *)(v18 + 8);
      if ( (*(_DWORD *)(v38 + 8) & 0xFFF) != 0 )
        v19 = *(_DWORD *)(v38 + 8) & 0xFFF;
      v22 = (unsigned int)(v19 + v20 + 15) >> 4;
      v37 = v22;
      v23 = v20
          + (~(*(_DWORD *)(*(_QWORD *)(a1 + 456) + 8LL) - 1) & (v19 + *(_DWORD *)(*(_QWORD *)(a1 + 456) + 8LL) - 1));
      if ( a5 == a3 || v22 + (*v39 & 0x1FFF) <= *(_DWORD *)(a1 + 168) )
      {
        v24 = a4;
        v25 = v42;
      }
      else
      {
        v25 = 0;
        v24 = a2;
        v21 = a3;
        v36 = 0;
        v39 = v40;
        a4 = a2;
        v42 = 0;
        a5 = a3;
      }
      if ( v16 != v25 || a3 != v21 )
      {
        if ( !v24 )
        {
          v11 = -1073741802;
          break;
        }
        memmove((void *)(v24 + (unsigned int)(16 * v25)), (const void *)(a2 + (unsigned int)(16 * v16)), v23);
        v26 = v25 | (a5 << *(_DWORD *)(a1 + 164));
        if ( v36 )
        {
LABEL_30:
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(
            v41,
            a1 + 64);
          v12 = 0LL;
          v41[0] = 0uLL;
          v13 = 0LL;
          v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeInsert((struct NP_CONTEXT::NP_CTX *)(a1 + 64));
          if ( v11 < 0 )
            break;
          v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDelete(
                  (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                  *(unsigned int *)(v38 + 4),
                  a1 + 88);
          if ( v11 == -1073741818 )
            break;
        }
        else
        {
          v27 = *(_DWORD *)(a1 + 112);
          if ( v27 == -1 || !v27 )
            v28 = a1 + 96;
          else
            v28 = *v10 + 16LL * (unsigned int)(v27 - 1);
          if ( *(_QWORD *)v28 == v13 )
          {
            *(_QWORD *)(v28 + 8) = v12;
          }
          else
          {
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchResultDeref(
              (__int64 *)(a1 + 64),
              a1 + 88);
            if ( *(_DWORD *)(a1 + 112) == -1 )
            {
              *(_OWORD *)v28 = v41[0];
            }
            else
            {
              B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
                a1 + 64,
                *(unsigned int *)(v13 + 16),
                a1 + 88);
              v34 = *(_DWORD *)(a1 + 112);
              if ( v34 == -1 || !v34 )
                v35 = a1 + 96;
              else
                v35 = *v10 + 16LL * (unsigned int)(v34 - 1);
              *(_QWORD *)(v35 + 8) = v12;
            }
          }
          v29 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  v26);
          if ( ((v29 + 1) & 0xFFFFFFFE) == 0 )
          {
            if ( v29 == -1 )
            {
LABEL_75:
              v11 = -1073741818;
              break;
            }
            v36 = 1;
            goto LABEL_30;
          }
        }
        v22 = v37;
        v25 = v42;
        *(_DWORD *)(v38 + 4) = v26;
        v8 = a3;
        if ( a3 != a5 )
        {
          *v40 ^= (*v40 ^ (*v40 - v37)) & 0x1FFF;
          *v39 ^= (*v39 ^ (v37 + *v39)) & 0x1FFF;
        }
        goto LABEL_34;
      }
      v8 = a3;
LABEL_34:
      v42 = v22 + v25;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL) != 2 )
      {
        v11 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v41, a1 + 64);
  return (unsigned int)v11;
}
