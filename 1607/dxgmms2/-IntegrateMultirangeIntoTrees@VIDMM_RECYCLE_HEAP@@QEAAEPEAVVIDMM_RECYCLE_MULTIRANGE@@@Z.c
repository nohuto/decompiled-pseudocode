/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060D60
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005F10C (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C006096C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005E2A0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F410 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F7CC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F838 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060820 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00617A8 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0062120 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006213C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0095318 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
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
  struct _SLIST_ENTRY *v9; // r8
  __int64 *v10; // r9
  struct _SLIST_ENTRY *v11; // rax
  struct _SLIST_ENTRY *v12; // rcx
  _QWORD *v13; // rdx
  struct _SLIST_ENTRY *v14; // rcx
  struct VIDMM_RECYCLE_RANGE *v15; // rsi
  __int64 *NextRange; // rdi
  VIDMM_RECYCLE_HEAP *v17; // r13
  __int64 v18; // r13
  PSLIST_ENTRY v19; // rsi
  struct _SLIST_ENTRY *v20; // rax
  struct _SLIST_ENTRY *v21; // rsi
  __int64 v22; // rsi
  PSLIST_ENTRY v23; // rdi
  struct _SLIST_ENTRY *v24; // rax
  _QWORD **v25; // rsi
  _QWORD **v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  struct _RTL_BALANCED_NODE *v29; // rbx
  __int64 v30; // rax
  struct _RTL_BALANCED_NODE *v31; // rax
  struct _SLIST_ENTRY *v32; // rcx
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  VIDMM_RECYCLE_MULTIRANGE *v37; // rdi
  __int64 v38; // r9
  __int64 v39; // rdx
  struct _SLIST_ENTRY *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v45; // rdx
  __int64 (__fastcall *v46)(__int64, __int64, __int64, __int64); // rax
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 (__fastcall *v51)(__int64, __int64, __int64, __int64); // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 (__fastcall *v55)(__int64, __int64, __int64, __int64); // rax
  __int64 v56; // r8
  __int64 v57; // rcx
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v59; // r8
  struct _SLIST_ENTRY *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rdi
  struct _SLIST_ENTRY *v63; // rdx
  struct VIDMM_RECYCLE_RANGE *v64; // rdi
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // [rsp+30h] [rbp-38h]
  _QWORD *v69; // [rsp+38h] [rbp-30h] BYREF
  struct _SLIST_ENTRY *v70; // [rsp+40h] [rbp-28h]
  _QWORD v71[2]; // [rsp+48h] [rbp-20h] BYREF
  char v72; // [rsp+58h] [rbp-10h]
  __int64 v75; // [rsp+C0h] [rbp+58h]
  __int64 v76; // [rsp+C0h] [rbp+58h]
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // [rsp+C0h] [rbp+58h]
  __int64 v78; // [rsp+C8h] [rbp+60h]
  __int64 v79; // [rsp+C8h] [rbp+60h]

  v70 = (struct _SLIST_ENTRY *)&v69;
  v69 = &v69;
  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (__int64 *)*((_QWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 4);
  v5 = v3[5];
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 888LL);
  v7 = *((_QWORD *)v2 + 9);
  ++*(_DWORD *)(v6 + 20);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  if ( !v8 )
  {
    v54 = *(unsigned int *)(v6 + 44);
    v55 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 48);
    v56 = *(unsigned int *)(v6 + 40);
    v57 = *(unsigned int *)(v6 + 36);
    ++*(_DWORD *)(v6 + 24);
    v8 = (PSLIST_ENTRY)v55(v57, v54, v56, v6);
    if ( !v8 )
      goto LABEL_51;
  }
  VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v8, 0LL, v7, v4, v5);
  v8[4].Next = (struct _SLIST_ENTRY *)v2;
  *((_QWORD *)&v8[4].Next + 1) = v3;
  v11 = (PSLIST_ENTRY)((char *)v8 + 200);
  *((_DWORD *)&v8[5].Next + 2) = 2;
  v12 = v70;
  if ( v70->Next != (struct _SLIST_ENTRY *)&v69 )
    __fastfail(3u);
  v8[13].Next = v70;
  v13 = &v69;
  v11->Next = (struct _SLIST_ENTRY *)&v69;
  v12->Next = v11;
  v70 = (PSLIST_ENTRY)((char *)v8 + 200);
  v14 = *(struct _SLIST_ENTRY **)(*((_QWORD *)a2 + 10) + 32LL);
  if ( (unsigned int)(LODWORD(v14->Next) - 3) > 3 )
  {
    v15 = v2;
    NextRange = 0LL;
    while ( !*((_DWORD *)v15 + 16) )
    {
      if ( !NextRange )
        goto LABEL_8;
      v17 = this;
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v15);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     1u,
                     *((_QWORD *)v2 + 9),
                     NextRange[4],
                     *((_QWORD *)PreviousRange + 5));
      v59 = Multirange;
      if ( !Multirange )
        goto LABEL_52;
      v10 = (__int64 *)PreviousRange;
      *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
      Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_DWORD *)&Multirange[5].Next + 2) = 1;
      while ( 1 )
      {
        NextRange[18] = (__int64)v59;
        if ( NextRange == v10 )
          break;
        NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      v60 = v70;
      v9 = (PSLIST_ENTRY)((char *)v59 + 200);
      if ( v70->Next != (struct _SLIST_ENTRY *)&v69 )
        __fastfail(3u);
      *((_QWORD *)&v9->Next + 1) = v70;
      v14 = (struct _SLIST_ENTRY *)&v69;
      v9->Next = (struct _SLIST_ENTRY *)&v69;
      NextRange = 0LL;
      v60->Next = v9;
      v70 = v9;
LABEL_9:
      if ( v15 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      {
        if ( !NextRange )
          goto LABEL_16;
        v75 = v3[5];
        v78 = NextRange[4];
        v68 = *((_QWORD *)v2 + 9);
        v18 = *(_QWORD *)(*((_QWORD *)v17 + 1) + 888LL);
        ++*(_DWORD *)(v18 + 20);
        v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v18);
        if ( v19
          || (v45 = *(unsigned int *)(v18 + 44),
              v46 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v18 + 48),
              v47 = *(unsigned int *)(v18 + 40),
              v48 = *(unsigned int *)(v18 + 36),
              ++*(_DWORD *)(v18 + 24),
              (v19 = (PSLIST_ENTRY)v46(v48, v45, v47, v18)) != 0LL) )
        {
          VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v19, 1LL, v68, v78, v75);
          v19[4].Next = (struct _SLIST_ENTRY *)NextRange;
          *((_QWORD *)&v19[4].Next + 1) = v3;
          *((_DWORD *)&v19[5].Next + 2) = 1;
          while ( 1 )
          {
            NextRange[18] = (__int64)v19;
            if ( NextRange == v3 )
              break;
            NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
          }
          v20 = v70;
          v21 = (PSLIST_ENTRY)((char *)v19 + 200);
          if ( v70->Next != (struct _SLIST_ENTRY *)&v69 )
            __fastfail(3u);
          *((_QWORD *)&v21->Next + 1) = v70;
          v14 = (struct _SLIST_ENTRY *)&v69;
          v21->Next = (struct _SLIST_ENTRY *)&v69;
          v20->Next = v21;
          v70 = v21;
          goto LABEL_16;
        }
LABEL_51:
        v17 = this;
LABEL_52:
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v49);
        v61[3] = *((_QWORD *)a2 + 10);
        v61[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
        v61[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
        WdLogEvent5_WdWarning(v61);
        v62 = v69;
        while ( v62 != &v69 )
        {
          v63 = (struct _SLIST_ENTRY *)(v62 - 25);
          v62 = (_QWORD *)*v62;
          VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v17 + 1), v63);
        }
        v64 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
        while ( 2 )
        {
          v65 = *((_DWORD *)v64 + 16);
          *((_QWORD *)v64 + 17) = 0LL;
          *((_QWORD *)v64 + 18) = 0LL;
          *((_QWORD *)v64 + 19) = 0LL;
          if ( v65 )
          {
            v66 = v65 - 4;
            if ( v66 )
            {
              if ( v66 == 1 )
              {
                v67 = 1LL;
                break;
              }
LABEL_62:
              if ( v64 == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
                return 0;
              v64 = VIDMM_RECYCLE_RANGE::GetNextRange(v64);
              continue;
            }
            v67 = 0LL;
          }
          else
          {
            v67 = 2LL;
          }
          break;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(v17, v67, v64);
        goto LABEL_62;
      }
      v15 = VIDMM_RECYCLE_RANGE::GetNextRange(v15);
    }
    if ( !NextRange )
      NextRange = (__int64 *)v15;
LABEL_8:
    v17 = this;
    goto LABEL_9;
  }
  while ( 1 )
  {
LABEL_16:
    v17 = this;
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v76 = *((_QWORD *)v2 + 5);
      v79 = *((_QWORD *)v2 + 4);
      v68 = *((_QWORD *)v2 + 9);
      v22 = *(_QWORD *)(*((_QWORD *)this + 1) + 888LL);
      ++*(_DWORD *)(v22 + 20);
      v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
      if ( !v23 )
      {
        v50 = *(unsigned int *)(v22 + 44);
        v51 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v22 + 48);
        v52 = *(unsigned int *)(v22 + 40);
        v53 = *(unsigned int *)(v22 + 36);
        ++*(_DWORD *)(v22 + 24);
        v23 = (PSLIST_ENTRY)v51(v53, v50, v52, v22);
        if ( !v23 )
          goto LABEL_52;
      }
      VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v23, 2LL, v68, v79, v76);
      v23[4].Next = (struct _SLIST_ENTRY *)v2;
      *((_QWORD *)&v23[4].Next + 1) = v2;
      v24 = (PSLIST_ENTRY)((char *)v23 + 200);
      *((_QWORD *)v2 + 19) = v23;
      *((_DWORD *)&v23[5].Next + 2) = 0;
      v14 = v70;
      if ( v70->Next != (struct _SLIST_ENTRY *)&v69 )
        __fastfail(3u);
      v23[13].Next = v70;
      v13 = &v69;
      v24->Next = (struct _SLIST_ENTRY *)&v69;
      v14->Next = v24;
      v70 = (PSLIST_ENTRY)((char *)v23 + 200);
    }
    *((_QWORD *)v2 + 17) = v8;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v25 = (_QWORD **)v69;
  *((_DWORD *)v69 - 28) = 3;
  v26 = v25 - 25;
  v27 = WdLogNewEntry5_WdEvent(v14, v13, v9, v10);
  *(_QWORD *)(v27 + 24) = v25 - 25;
  *(_QWORD *)(v27 + 32) = 2LL;
  WdLogEvent5_WdEvent(v27);
  LOBYTE(v28) = 0;
  v29 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  v30 = (__int64)*(v25 - 18);
  v71[0] = (char *)v26[5] - (char *)v26[4];
  v71[1] = v30;
  v72 = 0;
  if ( v29 )
  {
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v71, v29) < 0 )
      {
        v31 = v29->Children[0];
        if ( !v29->Children[0] )
        {
          LOBYTE(v28) = 0;
          break;
        }
      }
      else
      {
        v31 = v29->Children[1];
        if ( !v31 )
        {
          LOBYTE(v28) = 1;
          break;
        }
      }
      v29 = v31;
    }
  }
  RtlAvlInsertNodeEx((char *)this + 64, v29, v28, v25 - 25);
  *((_DWORD *)v26 + 22) = 2;
  v32 = (struct _SLIST_ENTRY *)(v25 - 25);
  v33 = *v25;
  v37 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v32, v34, v35, v36);
  while ( v33 != &v69 )
  {
    v39 = *((unsigned int *)v33 - 28);
    v40 = (struct _SLIST_ENTRY *)(v33 - 25);
    *((_DWORD *)v33 - 28) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v39, (__int64)(v33 - 25), v38);
    v33 = (_QWORD *)*v33;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v40, v41, v42, v43);
  }
  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v37, 0);
}
