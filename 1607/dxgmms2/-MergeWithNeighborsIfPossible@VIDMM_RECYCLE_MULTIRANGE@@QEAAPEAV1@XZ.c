/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005E2A0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060D60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005E9B8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F410 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F7CC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005F838 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F8D4 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0060820 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0061180 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _SLIST_ENTRY *Next; // rax
  PSLIST_ENTRY Multirange; // rbx
  struct _SLIST_ENTRY *v6; // r14
  struct _SLIST_ENTRY *v7; // rsi
  unsigned int v8; // ebp
  struct _SLIST_ENTRY *v9; // rdx
  _QWORD *v10; // rdx
  char v11; // r15
  __int64 v12; // rax
  PSLIST_ENTRY v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  char v18; // al
  unsigned int v19; // r15d
  struct _SLIST_ENTRY *v20; // rcx
  struct _SLIST_ENTRY *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rbx
  __int64 v24; // rbx
  struct _SLIST_ENTRY *v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rdi
  unsigned int v30; // r12d
  struct _SLIST_ENTRY *v31; // r13
  struct _SLIST_ENTRY *v32; // rcx
  __int64 v33; // r15
  __int64 v34; // r15
  struct _SLIST_ENTRY *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rsi
  struct _SLIST_ENTRY *v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rbx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  struct VIDMM_RECYCLE_RANGE *v43; // rdi
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(__int64, __int64, __int64, __int64); // rax
  __int64 v46; // r8
  __int64 v47; // rcx
  struct _SLIST_ENTRY *v48; // [rsp+70h] [rbp+8h]
  __int64 v49; // [rsp+70h] [rbp+8h]
  __int64 v50; // [rsp+78h] [rbp+10h]
  struct _SLIST_ENTRY *v51; // [rsp+78h] [rbp+10h]
  __int64 v52; // [rsp+80h] [rbp+18h]

  Next = ListEntry[4].Next;
  Multirange = ListEntry;
  v6 = ListEntry[5].Next;
  v7 = 0LL;
  v8 = *((_DWORD *)&ListEntry[13].Next + 2);
  v9 = Next[8].Next;
  if ( v9 == (struct _SLIST_ENTRY *)(*((_QWORD *)&Next[4].Next + 1) + 72LL) )
    goto LABEL_8;
  v10 = &v9[-8].Next + 1;
  if ( !v10 )
    goto LABEL_8;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v7 = (struct _SLIST_ENTRY *)v10[18];
    }
    else
    {
      if ( v8 != 2 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8 - 1, v10, a3, a4);
        v41[3] = 270LL;
        v41[4] = 52LL;
        v41[5] = 10LL;
        v41[6] = 0LL;
        v41[7] = 0LL;
        WdLogEvent5_WdCriticalError(v41);
        goto LABEL_8;
      }
      v7 = (struct _SLIST_ENTRY *)v10[19];
    }
  }
  else
  {
    v7 = (struct _SLIST_ENTRY *)v10[17];
  }
  if ( v7 )
  {
    v11 = 1;
    goto LABEL_9;
  }
LABEL_8:
  v11 = 0;
LABEL_9:
  v12 = *((_QWORD *)&Multirange[4].Next + 1);
  v13 = 0LL;
  v14 = *(_QWORD *)(v12 + 120);
  if ( v14 == *(_QWORD *)(v12 + 72) + 72LL )
    goto LABEL_16;
  v15 = (_QWORD *)(v14 - 120);
  if ( !v15 )
    goto LABEL_16;
  v16 = *((_DWORD *)&Multirange[13].Next + 2);
  if ( v16 )
  {
    v17 = (unsigned int)(v16 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 != 1 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15, a3, a4);
        v42[3] = 270LL;
        v42[4] = 52LL;
        v42[5] = 10LL;
        v42[6] = 0LL;
        v42[7] = 0LL;
        WdLogEvent5_WdCriticalError(v42);
        goto LABEL_16;
      }
      v13 = (PSLIST_ENTRY)v15[19];
    }
    else
    {
      v13 = (PSLIST_ENTRY)v15[18];
    }
  }
  else
  {
    v13 = (PSLIST_ENTRY)v15[17];
  }
  if ( !v13 )
  {
LABEL_16:
    v18 = 0;
    goto LABEL_17;
  }
  v18 = 1;
LABEL_17:
  if ( v11 )
  {
    if ( v18 )
    {
      v30 = *((_DWORD *)&Multirange[5].Next + 2);
      v31 = v7[4].Next;
      v52 = *((_QWORD *)&v13[4].Next + 1);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(Multirange[5].Next[2].Next, v30, v7);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(Multirange[5].Next[2].Next, v30, Multirange);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(Multirange[5].Next[2].Next, v30, v13);
      v32 = v7[6].Next;
      v51 = v7[2].Next;
      v49 = *((_QWORD *)&v13[2].Next + 1);
      v33 = *((_QWORD *)&v6[2].Next->Next + 1);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        v7[6].Next = 0LL;
      }
      --*((_QWORD *)&v7[5].Next->Next + 1);
      v34 = *(_QWORD *)(v33 + 888);
      ++*(_DWORD *)(v34 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v34) >= *(_WORD *)(v34 + 16) )
      {
        ++*(_DWORD *)(v34 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v34 + 56))(v7, v34);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v34, v7);
      }
      v35 = Multirange[6].Next;
      v36 = *((_QWORD *)&v6[2].Next->Next + 1);
      if ( v35 )
      {
        ExFreePoolWithTag(v35, 0);
        Multirange[6].Next = 0LL;
      }
      --*((_QWORD *)&Multirange[5].Next->Next + 1);
      v37 = *(_QWORD *)(v36 + 888);
      ++*(_DWORD *)(v37 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v37) >= *(_WORD *)(v37 + 16) )
      {
        ++*(_DWORD *)(v37 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v37 + 56))(Multirange, v37);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v37, Multirange);
      }
      v38 = v13[6].Next;
      v39 = *((_QWORD *)&v6[2].Next->Next + 1);
      if ( v38 )
      {
        ExFreePoolWithTag(v38, 0);
        v13[6].Next = 0LL;
      }
      --*((_QWORD *)&v13[5].Next->Next + 1);
      v40 = *(_QWORD *)(v39 + 888);
      ++*(_DWORD *)(v40 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v40) >= *(_WORD *)(v40 + 16) )
      {
        ++*(_DWORD *)(v40 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v40 + 56))(v13, v40);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v40, v13);
      }
      Multirange = (PSLIST_ENTRY)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                   *((_QWORD *)&v6[2].Next->Next + 1),
                                   v8,
                                   v6,
                                   v51,
                                   v49);
      Multirange[4].Next = v31;
      *((_QWORD *)&Multirange[4].Next + 1) = v52;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v6[2].Next, v30, Multirange);
      if ( v6->Next == (struct _SLIST_ENTRY *)1 && !v8 )
      {
        v43 = (struct VIDMM_RECYCLE_RANGE *)Multirange[4].Next;
        if ( !*((_DWORD *)v43 + 16) )
          goto LABEL_68;
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
    }
    v13 = Multirange;
  }
  else
  {
    if ( !v18 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
    v7 = Multirange;
  }
  v19 = *((_DWORD *)&Multirange[5].Next + 2);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(Multirange[5].Next[2].Next, v19, v7);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(Multirange[5].Next[2].Next, v19, v13);
  v20 = v7[6].Next;
  v21 = v7[2].Next;
  v22 = *((_QWORD *)&v13[2].Next + 1);
  v48 = v7[4].Next;
  v50 = *((_QWORD *)&v13[4].Next + 1);
  v23 = *((_QWORD *)&v6[2].Next->Next + 1);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    v7[6].Next = 0LL;
  }
  --*((_QWORD *)&v7[5].Next->Next + 1);
  v24 = *(_QWORD *)(v23 + 888);
  ++*(_DWORD *)(v24 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v24) >= *(_WORD *)(v24 + 16) )
  {
    ++*(_DWORD *)(v24 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v24 + 56))(v7, v24);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, v7);
  }
  v25 = v13[6].Next;
  v26 = *((_QWORD *)&v6[2].Next->Next + 1);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0);
    v13[6].Next = 0LL;
  }
  --*((_QWORD *)&v13[5].Next->Next + 1);
  v27 = *(_QWORD *)(v26 + 888);
  ++*(_DWORD *)(v27 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v27) >= *(_WORD *)(v27 + 16) )
  {
    ++*(_DWORD *)(v27 + 32);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v27 + 56))(v13, v27);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v27, v13);
  }
  v28 = *(_QWORD *)(*((_QWORD *)&v6[2].Next->Next + 1) + 888LL);
  ++*(_DWORD *)(v28 + 20);
  Multirange = ExpInterlockedPopEntrySList((PSLIST_HEADER)v28);
  if ( Multirange
    || (v44 = *(unsigned int *)(v28 + 44),
        v45 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v28 + 48),
        v46 = *(unsigned int *)(v28 + 40),
        v47 = *(unsigned int *)(v28 + 36),
        ++*(_DWORD *)(v28 + 24),
        (Multirange = (PSLIST_ENTRY)v45(v47, v44, v46, v28)) != 0LL) )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(Multirange, v8, v6, v21, v22);
  }
  Multirange[4].Next = v48;
  *((_QWORD *)&Multirange[4].Next + 1) = v50;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v6[2].Next, v19, Multirange);
  if ( v6->Next == (struct _SLIST_ENTRY *)1 && !v8 )
  {
    v43 = (struct VIDMM_RECYCLE_RANGE *)Multirange[4].Next;
    if ( !*((_DWORD *)v43 + 16) )
    {
LABEL_68:
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v6[2].Next, 2LL, Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
        *((VIDMM_RECYCLE_HEAP_MGR **)&v6[2].Next->Next + 1),
        (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v6[2].Next->Next + 1), v43);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
