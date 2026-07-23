/*
 * XREFs of HvlPrepareForHibernate @ 0x1401ECF1C
 * Callers:
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall HvlPrepareForHibernate(_OWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v5; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _OWORD *HypercallCachedPages; // rbp
  PSLIST_ENTRY v8; // rax
  char v9; // r12
  bool v10; // bl
  _QWORD *p_Next; // r14
  _SLIST_ENTRY *v12; // rax
  struct _KPRCB *v13; // r13
  PSLIST_ENTRY v14; // rax
  char v15; // r13
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  char v23; // [rsp+20h] [rbp-B8h]
  _SLIST_ENTRY *v24; // [rsp+28h] [rbp-B0h]
  _SLIST_ENTRY *Next; // [rsp+30h] [rbp-A8h]
  PSLIST_ENTRY v26; // [rsp+38h] [rbp-A0h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-90h]
  _SLIST_HEADER *v28; // [rsp+58h] [rbp-80h]
  _SLIST_ENTRY *v29; // [rsp+60h] [rbp-78h]
  _SLIST_ENTRY *v30; // [rsp+68h] [rbp-70h]
  _SLIST_HEADER *v31; // [rsp+78h] [rbp-60h]
  _SLIST_ENTRY *v32; // [rsp+80h] [rbp-58h]
  _SLIST_ENTRY *v33; // [rsp+88h] [rbp-50h]
  __int16 v34; // [rsp+D0h] [rbp-8h]

  v5 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v8;
    if ( v8 )
    {
      v28 = (_SLIST_HEADER *)CurrentPrcb;
      v9 = BYTE4(CurrentPrcb);
      Next = v8[1].Next;
      v23 = 1;
      ListEntry = v8;
      goto LABEL_7;
    }
    v23 = 4;
    _disable();
    ListEntry = v29;
    LOBYTE(CurrentPrcb) = (v34 & 0x200) != 0;
    LOBYTE(v28) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = v30;
  }
  else
  {
    v23 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v34 & 0x200) != 0;
    LOBYTE(v28) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v29;
    Next = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  }
  v9 = 1;
  HIDWORD(v28) = 1;
LABEL_7:
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v13 = KeGetCurrentPrcb();
    v14 = RtlpInterlockedPopEntrySList(&v13->HypercallPageList);
    p_Next = &v14->Next;
    if ( v14 )
    {
      v31 = (_SLIST_HEADER *)v13;
      v5 = 1;
      v15 = BYTE4(v13);
      v10 = (char)v31;
      v26 = v14;
      v24 = v14[1].Next;
      goto LABEL_13;
    }
    _disable();
    v10 = (v34 & 0x200) != 0;
    v12 = v33;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
  }
  else
  {
    _disable();
    v10 = (v34 & 0x200) != 0;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v12 = (_SLIST_ENTRY *)p_Next[2];
  }
  v24 = v12;
  v15 = 2;
  v26 = v32;
  HIDWORD(v31) = 2;
  LOBYTE(v31) = v10;
LABEL_13:
  memset(HypercallCachedPages, 0, 0x58uLL);
  *HypercallCachedPages = *a1;
  HypercallCachedPages[1] = a1[1];
  HypercallCachedPages[2] = a1[2];
  HypercallCachedPages[3] = a1[3];
  HypercallCachedPages[4] = a1[4];
  *((_BYTE *)HypercallCachedPages + 80) = 0;
  if ( (unsigned __int16)HvlpHypercallCodeVa(134LL, Next, v24) )
  {
    v16 = -1073741823;
  }
  else
  {
    *a2 = *p_Next;
    *a3 = p_Next[1];
    *a4 = p_Next[2];
    v17 = p_Next[3];
    v16 = 0;
    *a5 = v17;
  }
  v18 = 0LL;
  if ( (v23 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v28 + 1535, ListEntry);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v18 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v20 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v26[1].Next = v24;
    RtlpInterlockedPushEntrySList(v31 + 1535, v26);
  }
  else
  {
    v21 = KeGetCurrentPrcb();
    if ( (v15 & 1) != 0 )
    {
      v20 = (__int64)v21->HypercallCachedPages;
    }
    else if ( (v15 & 2) != 0 )
    {
      v20 = (__int64)v21->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v20 + 16) = v24;
    if ( v10 )
      _enable();
  }
  return v16;
}
