/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1401E65FC
 * Callers:
 *     sub_1401E60EC @ 0x1401E60EC (sub_1401E60EC.c)
 *     HvlHalGetVpIndexFromApicId @ 0x1401E81EC (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  char v2; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *p_Next; // r14
  _SLIST_ENTRY *Next; // r13
  PSLIST_ENTRY v6; // rax
  char v7; // bp
  bool v8; // di
  _SLIST_ENTRY *v9; // r15
  _SLIST_ENTRY *v10; // rax
  PSLIST_ENTRY v11; // rax
  unsigned int v12; // r14d
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _SLIST_ENTRY *v18; // [rsp+20h] [rbp-A8h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-A0h]
  struct _KPRCB *v20; // [rsp+30h] [rbp-98h]
  PSLIST_ENTRY v21; // [rsp+30h] [rbp-98h]
  __int64 v22; // [rsp+38h] [rbp-90h]
  _SLIST_HEADER *v23; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *v24; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v25; // [rsp+58h] [rbp-70h]
  _SLIST_HEADER *v26; // [rsp+68h] [rbp-60h]
  _SLIST_ENTRY *v27; // [rsp+70h] [rbp-58h]
  _SLIST_ENTRY *v28; // [rsp+78h] [rbp-50h]
  __int16 v29; // [rsp+C0h] [rbp-8h]
  char v32; // [rsp+E0h] [rbp+18h]

  v2 = 4;
  LODWORD(v22) = 154;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v6->Next;
    if ( v6 )
    {
      Next = v6[1].Next;
      v23 = (_SLIST_HEADER *)CurrentPrcb;
      v7 = BYTE4(CurrentPrcb);
      v32 = 1;
      ListEntry = v6;
      goto LABEL_7;
    }
    v32 = 4;
    _disable();
    Next = v25;
    LOBYTE(CurrentPrcb) = (v29 & 0x200) != 0;
    LOBYTE(v23) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v24;
  }
  else
  {
    v32 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v29 & 0x200) != 0;
    LOBYTE(v23) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v24;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  v7 = 1;
  HIDWORD(v23) = 1;
LABEL_7:
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v20 = KeGetCurrentPrcb();
    v11 = RtlpInterlockedPopEntrySList(&v20->HypercallPageList);
    v9 = v11;
    if ( v11 )
    {
      v2 = 1;
      v26 = (_SLIST_HEADER *)v20;
      v10 = v11[1].Next;
      v8 = (char)v20;
      v21 = v9;
      goto LABEL_13;
    }
    _disable();
    v8 = (v29 & 0x200) != 0;
    v10 = v28;
    v9 = (_SLIST_ENTRY *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
  }
  else
  {
    _disable();
    v8 = (v29 & 0x200) != 0;
    v9 = (_SLIST_ENTRY *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
    v10 = v9[1].Next;
  }
  v21 = v27;
  HIDWORD(v26) = 2;
  LOBYTE(v26) = v8;
LABEL_13:
  *p_Next = -1LL;
  p_Next[1] = 0LL;
  *((_DWORD *)p_Next + 4) = a1;
  HIDWORD(v22) = 1;
  v18 = v10;
  if ( (unsigned __int16)HvlpHypercallCodeVa(v22, Next, v10) )
  {
    v12 = -1073741823;
  }
  else
  {
    v12 = 0;
    *a2 = v9->Next;
  }
  HypercallCachedPages = 0LL;
  if ( (v32 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v23 + 1535, ListEntry);
  }
  else if ( (v32 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    if ( (v7 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages;
    }
    else if ( (v7 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v15 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v21[1].Next = v18;
    RtlpInterlockedPushEntrySList(v26 + 1535, v21);
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (BYTE4(v26) & 1) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages;
    }
    else if ( (BYTE4(v26) & 2) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v15 + 16) = v18;
    if ( v8 )
      _enable();
  }
  return v12;
}
