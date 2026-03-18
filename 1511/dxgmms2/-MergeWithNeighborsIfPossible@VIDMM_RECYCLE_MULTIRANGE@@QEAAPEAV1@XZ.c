/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005B2C0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C9D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0059D04 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0059F78 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A014 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005B8F8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005C380 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDEC (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        struct _SLIST_ENTRY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _SLIST_ENTRY *Next; // rax
  PSLIST_ENTRY v5; // rbx
  struct _SLIST_ENTRY *v6; // rsi
  struct _SLIST_ENTRY *v7; // r12
  unsigned int v8; // edi
  struct _SLIST_ENTRY *v9; // rdx
  _QWORD *v10; // rdx
  char v11; // bp
  __int64 v12; // rax
  PSLIST_ENTRY v13; // r13
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  char v18; // al
  unsigned int v19; // r14d
  struct _SLIST_ENTRY *v20; // rcx
  struct _SLIST_ENTRY *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rbx
  struct _SLIST_ENTRY *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbp
  unsigned int v29; // r15d
  struct _SLIST_ENTRY *v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdi
  PSLIST_ENTRY Multirange; // rdi
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  struct _SLIST_ENTRY *v37; // rbx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 (__fastcall *v40)(__int64, __int64, __int64, __int64); // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  struct _SLIST_ENTRY *v43; // rdi
  __int64 v44; // r8
  unsigned int v45; // [rsp+70h] [rbp+8h]
  __int64 v46; // [rsp+70h] [rbp+8h]
  struct _SLIST_ENTRY *v47; // [rsp+78h] [rbp+10h]
  struct _SLIST_ENTRY *v48; // [rsp+78h] [rbp+10h]
  __int64 v49; // [rsp+80h] [rbp+18h]

  Next = this[4].Next;
  v5 = this;
  v6 = this[5].Next;
  v7 = 0LL;
  v8 = *((_DWORD *)&this[13].Next + 2);
  v47 = v6;
  v9 = Next[8].Next;
  v45 = v8;
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
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8 - 1, v10, a3, a4);
        v35[3] = 270LL;
        v35[4] = 52LL;
        v35[5] = 10LL;
        v35[6] = 0LL;
        v35[7] = 0LL;
        WdLogEvent5_WdCriticalError(v35);
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
  v12 = *((_QWORD *)&v5[4].Next + 1);
  v13 = 0LL;
  v14 = *(_QWORD *)(v12 + 120);
  if ( v14 == *(_QWORD *)(v12 + 72) + 72LL )
    goto LABEL_16;
  v15 = (_QWORD *)(v14 - 120);
  if ( !v15 )
    goto LABEL_16;
  v16 = *((_DWORD *)&v5[13].Next + 2);
  if ( v16 )
  {
    v17 = (unsigned int)(v16 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 != 1 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v15, a3, a4);
        v36[3] = 270LL;
        v36[4] = 52LL;
        v36[5] = 10LL;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
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
  if ( !v11 )
  {
    if ( !v18 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v5;
    v7 = v5;
LABEL_20:
    v19 = *((_DWORD *)&v5[5].Next + 2);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v5[5].Next[2].Next, v19, v7);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v5[5].Next[2].Next, v19, v13);
    v20 = v7[6].Next;
    v21 = v7[2].Next;
    v46 = *((_QWORD *)&v13[2].Next + 1);
    v48 = v7[4].Next;
    v49 = *((_QWORD *)&v13[4].Next + 1);
    v22 = *((_QWORD *)&v6[2].Next->Next + 1);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      v7[6].Next = 0LL;
    }
    --*((_QWORD *)&v7[5].Next->Next + 1);
    v23 = *(_QWORD *)(v22 + 408);
    ++*(_DWORD *)(v23 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v23) >= *(_WORD *)(v23 + 16) )
    {
      ++*(_DWORD *)(v23 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v23 + 56))(v7, v23);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v23, v7);
    }
    v24 = v13[6].Next;
    v25 = *((_QWORD *)&v6[2].Next->Next + 1);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      v13[6].Next = 0LL;
    }
    --*((_QWORD *)&v13[5].Next->Next + 1);
    v26 = *(_QWORD *)(v25 + 408);
    ++*(_DWORD *)(v26 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v26) >= *(_WORD *)(v26 + 16) )
    {
      ++*(_DWORD *)(v26 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v26 + 56))(v13, v26);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v26, v13);
    }
    v27 = *(_QWORD *)(*((_QWORD *)&v6[2].Next->Next + 1) + 408LL);
    ++*(_DWORD *)(v27 + 20);
    v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v27);
    if ( v5
      || (v39 = *(unsigned int *)(v27 + 44),
          v40 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v27 + 48),
          v41 = *(unsigned int *)(v27 + 40),
          v42 = *(unsigned int *)(v27 + 36),
          ++*(_DWORD *)(v27 + 24),
          (v5 = (PSLIST_ENTRY)v40(v42, v39, v41, v27)) != 0LL) )
    {
      VIDMM_RECYCLE_MULTIRANGE::Init(v5, v8, v6, v21, v46);
    }
    v5[4].Next = v48;
    *((_QWORD *)&v5[4].Next + 1) = v49;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v5);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v6[2].Next, v19, v5);
    if ( v6->Next == (struct _SLIST_ENTRY *)1 && !v8 )
    {
      v43 = v5[4].Next;
      if ( !LODWORD(v43[4].Next) )
      {
        VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v6[2].Next, 2LL, v5);
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v6[2].Next->Next + 1), v5);
        VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v6[2].Next->Next + 1), v43, v44);
      }
    }
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v5;
  }
  if ( !v18 )
  {
    v13 = v5;
    goto LABEL_20;
  }
  v29 = *((_DWORD *)&v5[5].Next + 2);
  v30 = v7[4].Next;
  v31 = *((_QWORD *)&v13[4].Next + 1);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v5[5].Next[2].Next, v29, v7);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v5[5].Next[2].Next, v29, v5);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v5[5].Next[2].Next, v29, v13);
  v32 = (__int64)v7[2].Next;
  v33 = *((_QWORD *)&v13[2].Next + 1);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v47[2].Next->Next + 1), v7);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v47[2].Next->Next + 1), v5);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v47[2].Next->Next + 1), v13);
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 *((_QWORD *)&v47[2].Next->Next + 1),
                 v45,
                 (__int64)v47,
                 v32,
                 v33);
  Multirange[4].Next = v30;
  *((_QWORD *)&Multirange[4].Next + 1) = v31;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v47[2].Next, v29, Multirange);
  if ( v47->Next == (struct _SLIST_ENTRY *)1 && !v45 )
  {
    v37 = Multirange[4].Next;
    if ( !LODWORD(v37[4].Next) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v47[2].Next, 2LL, Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v47[2].Next->Next + 1), Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v47[2].Next->Next + 1), v37, v38);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
