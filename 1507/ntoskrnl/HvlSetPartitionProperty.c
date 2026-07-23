/*
 * XREFs of HvlSetPartitionProperty @ 0x1401EA49C
 * Callers:
 *     HvlResumePartition @ 0x1401E9F70 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1401EA9D4 (HvlSuspendPartition.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlSetPartitionProperty(_SLIST_ENTRY *a1, __int64 a2, _SLIST_ENTRY *a3)
{
  char v3; // si
  __int16 v7; // di
  bool v8; // di
  _SLIST_ENTRY *HypercallCachedPages; // rax
  _SLIST_ENTRY *Next; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _SLIST_ENTRY *v12; // r15
  char v13; // bp
  __int16 v14; // ax
  __int16 v15; // bx
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _SLIST_HEADER *v18; // [rsp+28h] [rbp-40h]
  _SLIST_ENTRY *v19; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v20; // [rsp+38h] [rbp-30h]
  __int16 v21; // [rsp+60h] [rbp-8h]

  v3 = 4;
  if ( (HvlpFlags & 4) == 0 )
    return 3221225506LL;
  if ( (HvlpFlags & 0x10) == 0 )
  {
    v7 = v21;
    _disable();
    v8 = (v7 & 0x200) != 0;
    LOBYTE(v18) = v8;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
    Next = HypercallCachedPages[1].Next;
LABEL_8:
    v12 = v19;
    v13 = 1;
    HIDWORD(v18) = 1;
    goto LABEL_9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
  if ( !HypercallCachedPages )
  {
    v14 = v21;
    _disable();
    Next = v20;
    v8 = (v14 & 0x200) != 0;
    LOBYTE(v18) = v8;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_8;
  }
  Next = HypercallCachedPages[1].Next;
  v3 = 1;
  v18 = (_SLIST_HEADER *)CurrentPrcb;
  v12 = HypercallCachedPages;
  v13 = BYTE4(CurrentPrcb);
  v8 = (char)CurrentPrcb;
LABEL_9:
  HypercallCachedPages->Next = a1;
  *((_DWORD *)&HypercallCachedPages->Next + 2) = 0x20000;
  HypercallCachedPages[1].Next = a3;
  v15 = HvlpHypercallCodeVa(69LL, Next, 0LL);
  v16 = 0LL;
  if ( (v3 & 1) != 0 )
  {
    v12[1].Next = Next;
    RtlpInterlockedPushEntrySList(v18 + 1535, v12);
  }
  else
  {
    v17 = KeGetCurrentPrcb();
    if ( (v13 & 1) != 0 )
    {
      v16 = (__int64)v17->HypercallCachedPages;
    }
    else if ( (v13 & 2) != 0 )
    {
      v16 = (__int64)v17->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v16 + 16) = Next;
    if ( v8 )
      _enable();
  }
  return v15 != 0 ? 0xC0000001 : 0;
}
