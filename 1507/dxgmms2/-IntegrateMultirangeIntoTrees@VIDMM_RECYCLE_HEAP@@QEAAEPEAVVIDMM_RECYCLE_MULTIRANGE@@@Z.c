/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066F60
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00668E0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064DA0 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D64 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00686A4 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *v2; // rdi
  __int64 *v3; // r13
  __int64 v6; // rcx
  PSLIST_ENTRY Multirange; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PSLIST_ENTRY v10; // r8
  PSLIST_ENTRY v11; // rbx
  struct _SLIST_ENTRY *v12; // rcx
  struct _SLIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  struct VIDMM_RECYCLE_RANGE *v15; // r15
  __int64 *NextRange; // rbx
  PSLIST_ENTRY v17; // rax
  __int64 *v18; // r10
  char v19; // r9
  struct _SLIST_ENTRY *v20; // rcx
  PSLIST_ENTRY v21; // rax
  char v22; // r9
  struct _SLIST_ENTRY *v23; // rax
  struct _SLIST_ENTRY *v24; // r8
  PSLIST_ENTRY v25; // rax
  struct _SLIST_ENTRY *v26; // rax
  struct _SLIST_ENTRY *v27; // rcx
  _QWORD **v28; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v29; // rbx
  _QWORD *v30; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v31; // r15
  VIDMM_RECYCLE_MULTIRANGE *v32; // rbx
  __int64 v33; // rdx
  _QWORD *v35; // rax
  _QWORD *i; // rbx
  struct VIDMM_RECYCLE_RANGE *j; // rbx
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // rdx
  _QWORD *v41; // [rsp+30h] [rbp-10h] BYREF
  struct _SLIST_ENTRY *v42; // [rsp+38h] [rbp-8h]
  PSLIST_ENTRY v43; // [rsp+80h] [rbp+40h]
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // [rsp+88h] [rbp+48h]

  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (__int64 *)*((_QWORD *)a2 + 9);
  v42 = (struct _SLIST_ENTRY *)&v41;
  v6 = *((_QWORD *)this + 1);
  v41 = &v41;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(v6, 0, *((_QWORD *)v2 + 9), *((_QWORD *)v2 + 4), v3[5]);
  v43 = Multirange;
  v11 = Multirange;
  if ( !Multirange )
  {
LABEL_44:
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v35[3] = *((_QWORD *)a2 + 10);
    v35[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
    v35[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
    WdLogEvent5_WdWarning(v35);
    for ( i = v41; i != &v41; i = (_QWORD *)*i )
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), (struct _SLIST_ENTRY *)(i - 25));
    for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      v38 = *((_DWORD *)j + 16);
      *((_QWORD *)j + 17) = 0LL;
      *((_QWORD *)j + 18) = 0LL;
      *((_QWORD *)j + 19) = 0LL;
      if ( v38 )
      {
        v39 = v38 - 4;
        if ( v39 )
        {
          if ( v39 != 1 )
            goto LABEL_55;
          v40 = 1LL;
        }
        else
        {
          v40 = 0LL;
        }
      }
      else
      {
        v40 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v40, (__int64)j);
LABEL_55:
      if ( j == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        return 0;
    }
  }
  Multirange[4].Next = (struct _SLIST_ENTRY *)v2;
  v12 = (PSLIST_ENTRY)((char *)Multirange + 200);
  *((_QWORD *)&Multirange[4].Next + 1) = v3;
  *((_DWORD *)&Multirange[5].Next + 2) = 2;
  v13 = v42;
  *((_QWORD *)&Multirange[12].Next + 1) = &v41;
  Multirange[13].Next = v13;
  if ( v13->Next != (struct _SLIST_ENTRY *)&v41 )
    __fastfail(3u);
  v13->Next = v12;
  v14 = *((_QWORD *)a2 + 10);
  v42 = v12;
  if ( (unsigned int)(**(_DWORD **)(v14 + 32) - 3) > 3 )
  {
    v15 = v2;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v15 + 16) )
      {
        if ( !NextRange )
          NextRange = (__int64 *)v15;
      }
      else if ( NextRange )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v15);
        v17 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                *((_QWORD *)this + 1),
                1u,
                *((_QWORD *)v2 + 9),
                NextRange[4],
                *((_QWORD *)PreviousRange + 5));
        v10 = v17;
        if ( !v17 )
          goto LABEL_44;
        v18 = (__int64 *)PreviousRange;
        *((_QWORD *)&v17[4].Next + 1) = PreviousRange;
        v17[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_DWORD *)&v17[5].Next + 2) = 1;
        do
        {
          NextRange[18] = (__int64)v10;
          if ( NextRange == v18 )
            v19 = 1;
          else
            NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
        }
        while ( !v19 );
        v20 = v42;
        v10[13].Next = v42;
        *((_QWORD *)&v10[12].Next + 1) = &v41;
        if ( v20->Next != (struct _SLIST_ENTRY *)&v41 )
          __fastfail(3u);
        v20->Next = (PSLIST_ENTRY)((char *)v10 + 200);
        NextRange = 0LL;
        v42 = (PSLIST_ENTRY)((char *)v10 + 200);
      }
      if ( v15 == (struct VIDMM_RECYCLE_RANGE *)v3 )
        break;
      v15 = VIDMM_RECYCLE_RANGE::GetNextRange(v15);
    }
    if ( !NextRange )
    {
LABEL_32:
      v11 = v43;
      goto LABEL_33;
    }
    v21 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*((_QWORD *)this + 1), 1u, *((_QWORD *)v2 + 9), NextRange[4], v3[5]);
    v10 = v21;
    if ( v21 )
    {
      v21[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&v21[4].Next + 1) = v3;
      *((_DWORD *)&v21[5].Next + 2) = 1;
      do
      {
        NextRange[18] = (__int64)v10;
        if ( NextRange == v3 )
          v22 = 1;
        else
          NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      while ( !v22 );
      v23 = v42;
      v24 = (PSLIST_ENTRY)((char *)v10 + 200);
      v24->Next = (struct _SLIST_ENTRY *)&v41;
      *((_QWORD *)&v24->Next + 1) = v23;
      if ( v23->Next != (struct _SLIST_ENTRY *)&v41 )
        __fastfail(3u);
      v23->Next = v24;
      v42 = v24;
      goto LABEL_32;
    }
    goto LABEL_44;
  }
  while ( 1 )
  {
LABEL_33:
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v25 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2u,
              *((_QWORD *)v2 + 9),
              *((_QWORD *)v2 + 4),
              *((_QWORD *)v2 + 5));
      if ( !v25 )
        goto LABEL_44;
      v25[4].Next = (struct _SLIST_ENTRY *)v2;
      *((_QWORD *)&v25[4].Next + 1) = v2;
      *((_QWORD *)v2 + 19) = v25;
      *((_DWORD *)&v25[5].Next + 2) = 0;
      v26 = (PSLIST_ENTRY)((char *)v25 + 200);
      v27 = v42;
      v26->Next = (struct _SLIST_ENTRY *)&v41;
      *((_QWORD *)&v26->Next + 1) = v27;
      if ( v27->Next != (struct _SLIST_ENTRY *)&v41 )
        __fastfail(3u);
      v27->Next = v26;
      v42 = v26;
    }
    *((_QWORD *)v2 + 20) = 0LL;
    *((_QWORD *)v2 + 17) = v11;
    if ( v2 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v28 = (_QWORD **)v41;
  v29 = (VIDMM_RECYCLE_MULTIRANGE *)(v41 - 25);
  *((_DWORD *)v29 + 22) = 3;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, (__int64)v29);
  v30 = *v28;
  v31 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v29);
  while ( v30 != &v41 )
  {
    v32 = (VIDMM_RECYCLE_MULTIRANGE *)(v30 - 25);
    v33 = *((unsigned int *)v30 - 28);
    *((_DWORD *)v30 - 28) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v33, (__int64)(v30 - 25));
    v30 = (_QWORD *)*v30;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v32);
  }
  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v31);
}
