/*
 * XREFs of sub_1401E7744 @ 0x1401E7744
 * Callers:
 *     sub_1401E60EC @ 0x1401E60EC (sub_1401E60EC.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall sub_1401E7744(int a1, int a2, unsigned __int16 a3, _OWORD *a4)
{
  unsigned __int16 v4; // si
  char v5; // r13
  __int64 result; // rax
  char v7; // r15
  bool v8; // si
  _QWORD *p_Next; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v11; // rax
  char v12; // r14
  struct _KPRCB *v13; // rbp
  char *v14; // rdi
  PSLIST_ENTRY v15; // rax
  char v16; // r12
  __int16 v17; // bx
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v19; // rcx
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  _SLIST_ENTRY *Next; // [rsp+20h] [rbp-A8h]
  _SLIST_ENTRY *v23; // [rsp+28h] [rbp-A0h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-98h]
  PSLIST_ENTRY v25; // [rsp+38h] [rbp-90h]
  _SLIST_HEADER *v26; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *v27; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v28; // [rsp+58h] [rbp-70h]
  _SLIST_HEADER *v29; // [rsp+68h] [rbp-60h]
  _SLIST_ENTRY *v30; // [rsp+70h] [rbp-58h]
  _SLIST_ENTRY *v31; // [rsp+78h] [rbp-50h]
  __int16 v32; // [rsp+C0h] [rbp-8h]

  v4 = a3;
  memset(a4, 0, 0x38uLL);
  v5 = 4;
  Next = v28;
  ListEntry = v27;
  v23 = v31;
  v25 = v30;
  while ( 1 )
  {
    result = HvlpDepositPages(v4);
    if ( (_DWORD)result )
      return result;
    if ( (HvlpFlags & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      p_Next = &v11->Next;
      if ( v11 )
      {
        ListEntry = v11;
        v7 = 1;
        v8 = (char)CurrentPrcb;
        v26 = (_SLIST_HEADER *)CurrentPrcb;
        v12 = BYTE4(CurrentPrcb);
        Next = v11[1].Next;
        goto LABEL_9;
      }
      v7 = 4;
      _disable();
      v8 = (v32 & 0x200) != 0;
      LOBYTE(v26) = v8;
      p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    }
    else
    {
      v7 = 4;
      _disable();
      v8 = (v32 & 0x200) != 0;
      p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
      LOBYTE(v26) = v8;
      Next = (_SLIST_ENTRY *)p_Next[2];
    }
    HIDWORD(v26) = 1;
    v12 = 1;
LABEL_9:
    if ( (HvlpFlags & 0x10) == 0 )
    {
      _disable();
      LOBYTE(v13) = (v32 & 0x200) != 0;
      v14 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
      LOBYTE(v29) = (_BYTE)v13;
      v23 = (_SLIST_ENTRY *)*((_QWORD *)v14 + 2);
LABEL_14:
      v16 = 2;
      HIDWORD(v29) = 2;
      goto LABEL_15;
    }
    v13 = KeGetCurrentPrcb();
    v15 = RtlpInterlockedPopEntrySList(&v13->HypercallPageList);
    v14 = (char *)v15;
    if ( !v15 )
    {
      _disable();
      LOBYTE(v13) = (v32 & 0x200) != 0;
      LOBYTE(v29) = (_BYTE)v13;
      v14 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
      goto LABEL_14;
    }
    v25 = v15;
    v5 = 1;
    v29 = (_SLIST_HEADER *)v13;
    v16 = BYTE4(v13);
    v23 = v15[1].Next;
LABEL_15:
    p_Next[2] = 0LL;
    *(_DWORD *)p_Next = a1;
    *((_DWORD *)p_Next + 1) = a2;
    *((_DWORD *)p_Next + 2) = *(_DWORD *)(KeNodeBlock[a3] + 160);
    *((_DWORD *)p_Next + 3) = -2147483647;
    v17 = HvlpHypercallCodeVa(118LL, Next, v23);
    if ( v17 != 11 )
    {
      *a4 = *(_OWORD *)v14;
      a4[1] = *((_OWORD *)v14 + 1);
      a4[2] = *((_OWORD *)v14 + 2);
      *((_QWORD *)a4 + 6) = *((_QWORD *)v14 + 6);
      *(_WORD *)a4 = v17;
    }
    HypercallCachedPages = 0LL;
    if ( (v7 & 1) != 0 )
    {
      ListEntry[1].Next = Next;
      RtlpInterlockedPushEntrySList(v26 + 1535, ListEntry);
    }
    else
    {
      v19 = KeGetCurrentPrcb();
      if ( (v12 & 1) != 0 )
      {
        HypercallCachedPages = (__int64)v19->HypercallCachedPages;
      }
      else if ( (v12 & 2) != 0 )
      {
        HypercallCachedPages = (__int64)v19->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(HypercallCachedPages + 16) = Next;
      if ( v8 )
        _enable();
    }
    v20 = 0LL;
    if ( (v5 & 1) != 0 )
    {
      v25[1].Next = v23;
      RtlpInterlockedPushEntrySList(v29 + 1535, v25);
    }
    else
    {
      v21 = KeGetCurrentPrcb();
      if ( (v16 & 1) != 0 )
      {
        v20 = (__int64)v21->HypercallCachedPages;
      }
      else if ( (v16 & 2) != 0 )
      {
        v20 = (__int64)v21->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(v20 + 16) = v23;
      if ( (_BYTE)v13 )
        _enable();
    }
    v4 = a3;
    v5 = 4;
    if ( v17 != 11 )
      return v17 != 0 ? 0xC0000001 : 0;
  }
}
