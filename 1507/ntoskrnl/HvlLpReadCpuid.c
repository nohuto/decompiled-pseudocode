/*
 * XREFs of HvlLpReadCpuid @ 0x1401E82B4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  char v6; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *p_Next; // r14
  _SLIST_ENTRY *Next; // r13
  PSLIST_ENTRY v10; // rax
  char v11; // r15
  bool v12; // bl
  char *v13; // rsi
  _SLIST_ENTRY *v14; // rax
  struct _KPRCB *v15; // r12
  PSLIST_ENTRY v16; // rax
  char v17; // r12
  unsigned int v18; // r14d
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v20; // rcx
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  char v24; // [rsp+20h] [rbp-B8h]
  _SLIST_ENTRY *v25; // [rsp+28h] [rbp-B0h]
  PSLIST_ENTRY v26; // [rsp+30h] [rbp-A8h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-A0h]
  _SLIST_HEADER *v28; // [rsp+50h] [rbp-88h]
  _SLIST_ENTRY *v29; // [rsp+58h] [rbp-80h]
  _SLIST_ENTRY *v30; // [rsp+60h] [rbp-78h]
  _SLIST_HEADER *v31; // [rsp+70h] [rbp-68h]
  _SLIST_ENTRY *v32; // [rsp+78h] [rbp-60h]
  _SLIST_ENTRY *v33; // [rsp+80h] [rbp-58h]
  __int16 v34; // [rsp+D0h] [rbp-8h]

  v6 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v10->Next;
    if ( v10 )
    {
      Next = v10[1].Next;
      v28 = (_SLIST_HEADER *)CurrentPrcb;
      v11 = BYTE4(CurrentPrcb);
      v24 = 1;
      ListEntry = v10;
      goto LABEL_7;
    }
    v24 = 4;
    _disable();
    Next = v30;
    LOBYTE(CurrentPrcb) = (v34 & 0x200) != 0;
    LOBYTE(v28) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v29;
  }
  else
  {
    v24 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v34 & 0x200) != 0;
    ListEntry = v29;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v28) = (_BYTE)CurrentPrcb;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  HIDWORD(v28) = 1;
  v11 = 1;
LABEL_7:
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v15 = KeGetCurrentPrcb();
    v16 = RtlpInterlockedPopEntrySList(&v15->HypercallPageList);
    v13 = (char *)v16;
    if ( v16 )
    {
      v31 = (_SLIST_HEADER *)v15;
      v6 = 1;
      v17 = BYTE4(v15);
      v12 = (char)v31;
      v26 = v16;
      v14 = v16[1].Next;
      goto LABEL_13;
    }
    _disable();
    v12 = (v34 & 0x200) != 0;
    v14 = v33;
    v13 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
  }
  else
  {
    _disable();
    v12 = (v34 & 0x200) != 0;
    v13 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v14 = (_SLIST_ENTRY *)*((_QWORD *)v13 + 2);
  }
  v17 = 2;
  v26 = v32;
  HIDWORD(v31) = 2;
  LOBYTE(v31) = v12;
LABEL_13:
  *((_DWORD *)p_Next + 3) = 0;
  *(_DWORD *)p_Next = a1;
  *((_DWORD *)p_Next + 2) = a2;
  v25 = v14;
  *((_DWORD *)p_Next + 1) = 0x10000;
  v18 = 0;
  if ( (unsigned __int16)HvlpHypercallCodeVa(0x100000088LL, Next, v14) )
    v18 = -1073741823;
  *a3 = *(_DWORD *)v13;
  *a4 = *((_DWORD *)v13 + 1);
  *a5 = *((_DWORD *)v13 + 2);
  *a6 = *((_DWORD *)v13 + 3);
  HypercallCachedPages = 0LL;
  if ( (v24 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v28 + 1535, ListEntry);
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (v11 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v20->HypercallCachedPages;
    }
    else if ( (v11 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v20->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v21 = 0LL;
  if ( (v6 & 1) != 0 )
  {
    v26[1].Next = v25;
    RtlpInterlockedPushEntrySList(v31 + 1535, v26);
  }
  else
  {
    v22 = KeGetCurrentPrcb();
    if ( (v17 & 1) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages;
    }
    else if ( (v17 & 2) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v21 + 16) = v25;
    if ( v12 )
      _enable();
  }
  return v18;
}
