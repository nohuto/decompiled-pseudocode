/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C9D0
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005C204 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0059F78 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005B2C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005C380 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005DBFC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005EF78 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062264 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081D50 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  PSLIST_ENTRY v8; // r15
  struct _SLIST_ENTRY *v9; // rcx
  _QWORD *v10; // rdx
  _DWORD *v11; // rcx
  struct VIDMM_RECYCLE_RANGE *v12; // rsi
  __int64 *NextRange; // rdi
  VIDMM_RECYCLE_HEAP *v14; // r13
  __int64 v15; // r13
  PSLIST_ENTRY v16; // rsi
  struct _SLIST_ENTRY *v17; // rax
  struct _SLIST_ENTRY *v18; // rsi
  __int64 v19; // rsi
  PSLIST_ENTRY v20; // rdi
  struct _SLIST_ENTRY *v21; // rdi
  struct _SLIST_ENTRY *v22; // rax
  _QWORD **v23; // rsi
  _QWORD **v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r8
  struct _RTL_BALANCED_NODE *v27; // rbx
  __int64 v28; // rax
  struct _RTL_BALANCED_NODE *v29; // rax
  struct _SLIST_ENTRY *v30; // rcx
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct VIDMM_RECYCLE_MULTIRANGE *v35; // rdi
  __int64 v36; // rdx
  struct _SLIST_ENTRY *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v42; // rdx
  __int64 (__fastcall *v43)(__int64, __int64, __int64, __int64); // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 (__fastcall *v48)(__int64, __int64, __int64, __int64); // rax
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 (__fastcall *v52)(__int64, __int64, __int64, __int64); // rax
  __int64 v53; // r8
  __int64 v54; // rcx
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v56; // r8
  __int64 *v57; // r9
  struct _SLIST_ENTRY *v58; // rax
  struct _SLIST_ENTRY *v59; // r8
  _QWORD *v60; // rax
  _QWORD *i; // rdi
  struct VIDMM_RECYCLE_RANGE *v62; // rdi
  int v63; // ecx
  int v64; // ecx
  __int64 v65; // rdx
  __int64 v66[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v67; // [rsp+40h] [rbp-18h] BYREF
  struct _SLIST_ENTRY *v68; // [rsp+48h] [rbp-10h]
  __int64 v71; // [rsp+B0h] [rbp+58h]
  __int64 v72; // [rsp+B0h] [rbp+58h]
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // [rsp+B0h] [rbp+58h]
  __int64 v74; // [rsp+B8h] [rbp+60h]
  __int64 v75; // [rsp+B8h] [rbp+60h]

  v68 = (struct _SLIST_ENTRY *)&v67;
  v67 = &v67;
  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (__int64 *)*((_QWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 4);
  v5 = v3[5];
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 408LL);
  v7 = *((_QWORD *)v2 + 9);
  ++*(_DWORD *)(v6 + 20);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  if ( !v8 )
  {
    v51 = *(unsigned int *)(v6 + 44);
    v52 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 48);
    v53 = *(unsigned int *)(v6 + 40);
    v54 = *(unsigned int *)(v6 + 36);
    ++*(_DWORD *)(v6 + 24);
    v8 = (PSLIST_ENTRY)v52(v54, v51, v53, v6);
    if ( !v8 )
      goto LABEL_51;
  }
  VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v8, 0LL, v7, v4, v5);
  v8[4].Next = (struct _SLIST_ENTRY *)v2;
  *((_QWORD *)&v8[4].Next + 1) = v3;
  *((_DWORD *)&v8[5].Next + 2) = 2;
  v9 = v68;
  *((_QWORD *)&v8[12].Next + 1) = &v67;
  v10 = &v67;
  v8[13].Next = v9;
  if ( v9->Next != (struct _SLIST_ENTRY *)&v67 )
    __fastfail(3u);
  v9->Next = (PSLIST_ENTRY)((char *)v8 + 200);
  v68 = (PSLIST_ENTRY)((char *)v8 + 200);
  v11 = *(_DWORD **)(*((_QWORD *)a2 + 10) + 32LL);
  if ( (unsigned int)(*v11 - 3) > 3 )
  {
    v12 = v2;
    NextRange = 0LL;
    while ( !*((_DWORD *)v12 + 16) )
    {
      if ( !NextRange )
        goto LABEL_8;
      v14 = this;
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v12);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     1u,
                     *((_QWORD *)v2 + 9),
                     NextRange[4],
                     *((_QWORD *)PreviousRange + 5));
      v56 = Multirange;
      if ( !Multirange )
        goto LABEL_52;
      v57 = (__int64 *)PreviousRange;
      *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
      Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_DWORD *)&Multirange[5].Next + 2) = 1;
      while ( 1 )
      {
        NextRange[18] = (__int64)v56;
        if ( NextRange == v57 )
          break;
        NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      v58 = v68;
      v59 = (PSLIST_ENTRY)((char *)v56 + 200);
      v59->Next = (struct _SLIST_ENTRY *)&v67;
      v11 = &v67;
      *((_QWORD *)&v59->Next + 1) = v58;
      if ( v58->Next != (struct _SLIST_ENTRY *)&v67 )
        __fastfail(3u);
      v58->Next = v59;
      NextRange = 0LL;
      v68 = v59;
LABEL_9:
      if ( v12 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      {
        if ( !NextRange )
          goto LABEL_16;
        v71 = v3[5];
        v74 = NextRange[4];
        v66[0] = *((_QWORD *)v2 + 9);
        v15 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 408LL);
        ++*(_DWORD *)(v15 + 20);
        v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v15);
        if ( v16
          || (v42 = *(unsigned int *)(v15 + 44),
              v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v15 + 48),
              v44 = *(unsigned int *)(v15 + 40),
              v45 = *(unsigned int *)(v15 + 36),
              ++*(_DWORD *)(v15 + 24),
              (v16 = (PSLIST_ENTRY)v43(v45, v42, v44, v15)) != 0LL) )
        {
          VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v16, 1LL, v66[0], v74, v71);
          v16[4].Next = (struct _SLIST_ENTRY *)NextRange;
          *((_QWORD *)&v16[4].Next + 1) = v3;
          *((_DWORD *)&v16[5].Next + 2) = 1;
          while ( 1 )
          {
            NextRange[18] = (__int64)v16;
            if ( NextRange == v3 )
              break;
            NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
          }
          v17 = v68;
          v18 = (PSLIST_ENTRY)((char *)v16 + 200);
          v18->Next = (struct _SLIST_ENTRY *)&v67;
          v11 = &v67;
          *((_QWORD *)&v18->Next + 1) = v17;
          if ( v17->Next != (struct _SLIST_ENTRY *)&v67 )
            __fastfail(3u);
          v17->Next = v18;
          v68 = v18;
          goto LABEL_16;
        }
LABEL_51:
        v14 = this;
LABEL_52:
        v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v46);
        v60[3] = *((_QWORD *)a2 + 10);
        v60[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
        v60[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
        WdLogEvent5_WdWarning(v60);
        for ( i = v67; i != &v67; i = (_QWORD *)*i )
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
            *((VIDMM_RECYCLE_HEAP_MGR **)v14 + 1),
            (struct _SLIST_ENTRY *)(i - 25));
        v62 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        while ( 2 )
        {
          v63 = *((_DWORD *)v62 + 16);
          *((_QWORD *)v62 + 17) = 0LL;
          *((_QWORD *)v62 + 18) = 0LL;
          *((_QWORD *)v62 + 19) = 0LL;
          if ( v63 )
          {
            v64 = v63 - 4;
            if ( v64 )
            {
              if ( v64 == 1 )
              {
                v65 = 1LL;
                break;
              }
LABEL_62:
              if ( v62 == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
                return 0;
              v62 = VIDMM_RECYCLE_RANGE::GetNextRange(v62);
              continue;
            }
            v65 = 0LL;
          }
          else
          {
            v65 = 2LL;
          }
          break;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(v14, v65, v62);
        goto LABEL_62;
      }
      v12 = VIDMM_RECYCLE_RANGE::GetNextRange(v12);
    }
    if ( !NextRange )
      NextRange = (__int64 *)v12;
LABEL_8:
    v14 = this;
    goto LABEL_9;
  }
  while ( 1 )
  {
LABEL_16:
    v14 = this;
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v72 = *((_QWORD *)v2 + 5);
      v75 = *((_QWORD *)v2 + 4);
      v66[0] = *((_QWORD *)v2 + 9);
      v19 = *(_QWORD *)(*((_QWORD *)this + 1) + 408LL);
      ++*(_DWORD *)(v19 + 20);
      v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v19);
      if ( !v20 )
      {
        v47 = *(unsigned int *)(v19 + 44);
        v48 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v19 + 48);
        v49 = *(unsigned int *)(v19 + 40);
        v50 = *(unsigned int *)(v19 + 36);
        ++*(_DWORD *)(v19 + 24);
        v20 = (PSLIST_ENTRY)v48(v50, v47, v49, v19);
        if ( !v20 )
          goto LABEL_52;
      }
      VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v20, 2LL, v66[0], v75, v72);
      v20[4].Next = (struct _SLIST_ENTRY *)v2;
      *((_QWORD *)&v20[4].Next + 1) = v2;
      *((_QWORD *)v2 + 19) = v20;
      *((_DWORD *)&v20[5].Next + 2) = 0;
      v21 = (PSLIST_ENTRY)((char *)v20 + 200);
      v22 = v68;
      v21->Next = (struct _SLIST_ENTRY *)&v67;
      v11 = &v67;
      *((_QWORD *)&v21->Next + 1) = v22;
      if ( v22->Next != (struct _SLIST_ENTRY *)&v67 )
        __fastfail(3u);
      v22->Next = v21;
      v68 = v21;
    }
    *((_QWORD *)v2 + 17) = v8;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v23 = (_QWORD **)v67;
  *((_DWORD *)v67 - 28) = 3;
  v24 = v23 - 25;
  v25 = WdLogNewEntry5_WdEvent(v11, v10);
  *(_QWORD *)(v25 + 24) = v23 - 25;
  *(_QWORD *)(v25 + 32) = 2LL;
  WdLogEvent5_WdEvent(v25);
  LOBYTE(v26) = 0;
  v27 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  v28 = (__int64)*(v23 - 18);
  v66[0] = (char *)v24[5] - (char *)v24[4];
  v66[1] = v28;
  if ( v27 )
  {
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v66, v27) < 0 )
      {
        v29 = v27->Children[0];
        if ( !v27->Children[0] )
        {
          LOBYTE(v26) = 0;
          break;
        }
      }
      else
      {
        v29 = v27->Children[1];
        if ( !v29 )
        {
          LOBYTE(v26) = 1;
          break;
        }
      }
      v27 = v29;
    }
  }
  RtlAvlInsertNodeEx((char *)this + 56, v27, v26, v23 - 25);
  *((_DWORD *)v24 + 22) = 2;
  v30 = (struct _SLIST_ENTRY *)(v23 - 25);
  v31 = *v23;
  v35 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v30, v32, v33, v34);
  while ( v31 != &v67 )
  {
    v36 = *((unsigned int *)v31 - 28);
    v37 = (struct _SLIST_ENTRY *)(v31 - 25);
    *((_DWORD *)v31 - 28) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v36, (__int64)(v31 - 25));
    v31 = (_QWORD *)*v31;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v37, v38, v39, v40);
  }
  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((struct _SLIST_ENTRY *)v35, 0);
}
