/*
 * XREFs of HvlQueryNumaDistance @ 0x1401E5958
 * Callers:
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
{
  char v3; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *p_Next; // r15
  PSLIST_ENTRY v6; // rax
  char v7; // r12
  bool v8; // bl
  _QWORD *v9; // r14
  _SLIST_ENTRY *v10; // rdx
  struct _KPRCB *v11; // r13
  PSLIST_ENTRY v12; // rax
  char v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v17; // rcx
  __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  _SLIST_ENTRY *v21; // [rsp+20h] [rbp-B8h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-B0h]
  PSLIST_ENTRY v23; // [rsp+30h] [rbp-A8h]
  _SLIST_ENTRY *Next; // [rsp+38h] [rbp-A0h]
  _SLIST_HEADER *v25; // [rsp+50h] [rbp-88h]
  _SLIST_ENTRY *v26; // [rsp+58h] [rbp-80h]
  _SLIST_ENTRY *v27; // [rsp+60h] [rbp-78h]
  _SLIST_HEADER *v28; // [rsp+70h] [rbp-68h]
  _SLIST_ENTRY *v29; // [rsp+78h] [rbp-60h]
  _SLIST_ENTRY *v30; // [rsp+80h] [rbp-58h]
  __int16 v31; // [rsp+D0h] [rbp-8h]
  char v35; // [rsp+F8h] [rbp+20h]

  v3 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v6->Next;
    if ( v6 )
    {
      v25 = (_SLIST_HEADER *)CurrentPrcb;
      v7 = BYTE4(CurrentPrcb);
      Next = v6[1].Next;
      v35 = 1;
      ListEntry = v6;
      goto LABEL_7;
    }
    v35 = 4;
    _disable();
    ListEntry = v26;
    LOBYTE(CurrentPrcb) = (v31 & 0x200) != 0;
    LOBYTE(v25) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = v27;
  }
  else
  {
    v35 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v31 & 0x200) != 0;
    LOBYTE(v25) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v26;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  v7 = 1;
  HIDWORD(v25) = 1;
LABEL_7:
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v11 = KeGetCurrentPrcb();
    v12 = RtlpInterlockedPopEntrySList(&v11->HypercallPageList);
    v9 = &v12->Next;
    if ( v12 )
    {
      v10 = v12[1].Next;
      v3 = 1;
      v28 = (_SLIST_HEADER *)v11;
      v13 = BYTE4(v11);
      v8 = (char)v28;
      goto LABEL_13;
    }
    _disable();
    v10 = v30;
    v8 = (v31 & 0x200) != 0;
    v9 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
  }
  else
  {
    _disable();
    v8 = (v31 & 0x200) != 0;
    v9 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v10 = (_SLIST_ENTRY *)v9[2];
  }
  v12 = v29;
  v13 = 2;
  HIDWORD(v28) = 2;
  LOBYTE(v28) = v8;
LABEL_13:
  v23 = v12;
  v21 = v10;
  *(_DWORD *)p_Next = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[a1] + 148)] + 160);
  *((_DWORD *)p_Next + 1) = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[a2] + 148)] + 160);
  if ( (unsigned __int16)HvlpHypercallCodeVa(120LL, Next, v10) )
  {
    *a3 = -1LL;
    v14 = -1073741823;
  }
  else
  {
    v15 = *v9;
    v14 = 0;
    *a3 = v15;
  }
  HypercallCachedPages = 0LL;
  if ( (v35 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v25 + 1535, ListEntry);
  }
  else if ( (v35 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v17 = KeGetCurrentPrcb();
    if ( (v7 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v17->HypercallCachedPages;
    }
    else if ( (v7 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v17->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v18 = 0LL;
  if ( (v3 & 1) != 0 )
  {
    v23[1].Next = v21;
    RtlpInterlockedPushEntrySList(v28 + 1535, v23);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (v13 & 1) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages;
    }
    else if ( (v13 & 2) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v18 + 16) = v21;
    if ( v8 )
      _enable();
  }
  return v14;
}
