/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@@Z @ 0x14013C3B0
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14013C228 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14013F4E8 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int v7; // esi
  unsigned int v8; // r12d
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r13d
  struct _EX_RUNDOWN_REF *v18; // rdx
  struct _EX_RUNDOWN_REF *v19; // r15
  unsigned __int64 v20; // rtt
  unsigned __int64 Count; // rax
  __int64 v22; // rax
  int v24; // r9d
  unsigned __int64 v25; // rtt
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-58h]
  unsigned int v28; // [rsp+90h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+98h] [rbp+10h]

  v5 = 0;
  v6 = *a2;
  v7 = 0;
  v28 = *a3;
  v8 = 32;
  v9 = *a3 + *a2 - 1;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL>::BTreeIteratorFromSearchResult(
    a1,
    &v26,
    a5);
  v11 = v27;
  v12 = v26;
  while ( 1 )
  {
    if ( !v12 )
    {
      v14 = 0LL;
LABEL_28:
      v15 = v9;
      v24 = 1;
      goto LABEL_29;
    }
    v11 += 8LL;
    v13 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
    v27 = v11;
    if ( v11 < v12 + 8 * v13 )
      goto LABEL_4;
    v22 = *(_QWORD *)(v12 + 8);
    if ( v22 )
    {
      v11 = v22 + 16;
      v26 = *(_QWORD *)(v12 + 8);
      v27 = v22 + 16;
      v12 = v22;
LABEL_4:
      v14 = v11;
      goto LABEL_5;
    }
    v14 = 0LL;
LABEL_5:
    if ( !v14 )
      goto LABEL_28;
    v15 = *(_DWORD *)v14;
    if ( v6 < *(_DWORD *)v14 || (*(_BYTE *)(v14 + 7) & 1) != 0 )
      break;
LABEL_8:
    if ( v8 != 32 && v8 != *(unsigned __int16 *)(v14 + 4) )
      goto LABEL_26;
    if ( *(_BYTE *)(v14 + 6) != 2 )
    {
      if ( v5 )
      {
        if ( v8 == 32 )
          goto LABEL_26;
LABEL_13:
        *(_BYTE *)(v14 + 6) = 2;
        goto LABEL_14;
      }
      v16 = *(unsigned __int16 *)(v14 + 4);
      if ( (unsigned int)v16 >= 0x20 )
        goto LABEL_25;
      _mm_lfence();
      v17 = v16 | (32 * (*((_WORD *)&SmGlobals + 88 * v16 + 12) & 0x7FF));
      v18 = (struct _EX_RUNDOWN_REF *)((char *)&SmGlobals + 176 * (v16 & 0x1F));
      v29 = v18;
      v19 = v18 + 1;
      _m_prefetchw(&v18[1]);
      v20 = v18[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)&v18[1], v20 + 2, v20) )
      {
LABEL_18:
        if ( (v18[3].Count & 0x7FF) == v17 >> 5 )
        {
          Count = v18->Count;
LABEL_20:
          if ( !Count )
            goto LABEL_25;
          v8 = *(unsigned __int16 *)(v14 + 4);
          v11 = v27;
          v12 = v26;
          v10 = v28;
          goto LABEL_13;
        }
        _m_prefetchw(v19);
        v25 = v19->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v25 != _InterlockedCompareExchange64((volatile signed __int64 *)v19, v25 - 2, v25) )
          ExfReleaseRundownProtection(v19);
      }
      else if ( ExfAcquireRundownProtection(v18 + 1) )
      {
        v18 = v29;
        goto LABEL_18;
      }
      Count = 0LL;
      goto LABEL_20;
    }
    if ( v8 != 32 )
      goto LABEL_26;
LABEL_14:
    ++v5;
    ++v7;
    if ( v5 == v10 )
      goto LABEL_26;
    ++v6;
  }
  if ( v9 < v15 )
    goto LABEL_28;
  v24 = 0;
LABEL_29:
  v7 += v15 - v6;
  if ( !v5 )
  {
    if ( v24 )
      goto LABEL_25;
    v5 = v15 - v6;
    v6 = v15;
    if ( (*(_BYTE *)(v14 + 7) & 1) != 0 )
      goto LABEL_14;
    goto LABEL_8;
  }
  if ( v24 )
LABEL_25:
    ++v7;
LABEL_26:
  *a3 = v5;
  *a4 = v7;
  return v8;
}
