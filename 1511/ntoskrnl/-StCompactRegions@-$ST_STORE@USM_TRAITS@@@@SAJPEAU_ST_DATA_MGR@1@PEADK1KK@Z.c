/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14010DAF0
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1400F6B80 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401111E8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140203C50 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140206A08 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F7010 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400F70A0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010A3E4 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14010CA4C (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14010CD88 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14010DFDC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14010E2F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14010E53C (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14010EA10 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14010EF44 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140201C6C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@.c)
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
  __int64 v38; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v39; // [rsp+30h] [rbp-38h]
  _WORD *v40; // [rsp+38h] [rbp-30h]
  _WORD *v41; // [rsp+40h] [rbp-28h]
  _OWORD v42[2]; // [rsp+48h] [rbp-20h] BYREF
  int v43; // [rsp+B0h] [rbp+48h]

  v6 = *(_QWORD *)(a1 + 472);
  v36 = 0;
  v38 = 0LL;
  v42[0] = 0uLL;
  v8 = a3;
  v9 = (_WORD *)(v6 + 2LL * a5);
  v40 = v9;
  v41 = (_WORD *)(v6 + 2LL * a3);
  if ( v41 == v9 )
  {
    v43 = 0;
  }
  else
  {
    v43 = *v9 & 0x1FFF;
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
          (char **)(a1 + 64),
          v8 << *(_DWORD *)(a1 + 164),
          a1 + 88);
  if ( v11 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
      a1 + 64,
      v42,
      a1 + 88);
    v12 = *((_QWORD *)&v42[0] + 1);
    v13 = *(_QWORD *)&v42[0];
    while ( 1 )
    {
      if ( v36 )
      {
        v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
                (char **)(a1 + 64),
                v8 << *(_DWORD *)(a1 + 164),
                a1 + 88);
        if ( v11 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v42, a1 + 64);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorFromSearchResult(
          a1 + 64,
          v42,
          a1 + 88);
        v12 = *((_QWORD *)&v42[0] + 1);
        v13 = *(_QWORD *)&v42[0];
      }
      if ( !v13 )
      {
LABEL_58:
        v11 = 0;
        break;
      }
      v12 += 8LL;
      v14 = (unsigned __int16)*(_DWORD *)v13;
      *((_QWORD *)&v42[0] + 1) = v12;
      if ( v12 < v13 + 8 * v14 + 16 )
        goto LABEL_12;
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
          goto LABEL_13;
        }
      }
      if ( LeafSibling )
      {
        v12 = LeafSibling + 16;
        *(_QWORD *)&v42[0] = LeafSibling;
        *((_QWORD *)&v42[0] + 1) = LeafSibling + 16;
        v13 = LeafSibling;
LABEL_12:
        v15 = v12;
        goto LABEL_13;
      }
      v15 = 0LL;
LABEL_13:
      if ( v15 == -1 )
        goto LABEL_76;
      if ( !v15 )
        goto LABEL_58;
      v16 = *(_DWORD *)v15 & *(_DWORD *)(a1 + 160);
      if ( *(_DWORD *)v15 >> *(_DWORD *)(a1 + 164) != a3 )
        goto LABEL_58;
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
      v39 = *(_DWORD **)(v18 + 8);
      if ( (v39[2] & 0xFFF) != 0 )
        v19 = v39[2] & 0xFFF;
      v22 = (unsigned int)(v19 + v20 + 15) >> 4;
      v37 = v22;
      v23 = v20
          + (~(*(_DWORD *)(*(_QWORD *)(a1 + 456) + 8LL) - 1) & (v19 + *(_DWORD *)(*(_QWORD *)(a1 + 456) + 8LL) - 1));
      if ( a5 == a3 || v22 + (*v40 & 0x1FFF) <= *(_DWORD *)(a1 + 168) )
      {
        v24 = a4;
        v25 = v43;
      }
      else
      {
        v25 = 0;
        v24 = a2;
        v21 = a3;
        v36 = 0;
        v40 = v41;
        a4 = a2;
        v43 = 0;
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
        if ( !v36 )
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
              *(_OWORD *)v28 = v42[0];
            }
            else
            {
              B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeSearchKey(
                (char **)(a1 + 64),
                *(_DWORD *)(v13 + 16),
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
          if ( ((v29 + 1) & 0xFFFFFFFE) != 0 )
          {
LABEL_33:
            v22 = v37;
            v25 = v43;
            v39[1] = v26;
            v8 = a3;
            if ( a3 != a5 )
            {
              *v41 ^= (*v41 ^ (*v41 - v37)) & 0x1FFF;
              *v40 ^= (*v40 ^ (v37 + *v40)) & 0x1FFF;
            }
            goto LABEL_35;
          }
          if ( v29 == -1 )
          {
LABEL_76:
            v11 = -1073741818;
            break;
          }
          v36 = 1;
        }
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v42, a1 + 64);
        v12 = 0LL;
        LODWORD(v38) = v26;
        v42[0] = 0uLL;
        v13 = 0LL;
        HIDWORD(v38) = *v39;
        v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeInsert(
                (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                (unsigned int *)&v38,
                a1 + 88);
        if ( v11 < 0 )
          break;
        v11 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeDelete(
                (struct NP_CONTEXT::NP_CTX *)(a1 + 64),
                (unsigned int)v39[1],
                a1 + 88);
        if ( v11 == -1073741818 )
          break;
        goto LABEL_33;
      }
      v8 = a3;
LABEL_35:
      v43 = v22 + v25;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL) != 2 )
      {
        v11 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeIteratorCleanup(v42, a1 + 64);
  return (unsigned int)v11;
}
