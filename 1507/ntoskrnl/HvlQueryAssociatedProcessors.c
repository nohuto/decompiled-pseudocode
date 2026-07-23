/*
 * XREFs of HvlQueryAssociatedProcessors @ 0x1401E9BA8
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall HvlQueryAssociatedProcessors(int a1, unsigned int *a2, void *a3)
{
  char v3; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *p_Next; // r14
  PSLIST_ENTRY v8; // rax
  char v9; // r12
  bool v10; // di
  char *v11; // r15
  _SLIST_ENTRY *v12; // rax
  PSLIST_ENTRY v13; // rax
  _SLIST_ENTRY *v14; // r14
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v18; // rcx
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  _SLIST_ENTRY *Next; // [rsp+20h] [rbp-A8h]
  _SLIST_ENTRY *v22; // [rsp+28h] [rbp-A0h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-98h]
  struct _KPRCB *v24; // [rsp+38h] [rbp-90h]
  PSLIST_ENTRY v25; // [rsp+38h] [rbp-90h]
  _SLIST_HEADER *v26; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *v27; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v28; // [rsp+58h] [rbp-70h]
  _SLIST_HEADER *v29; // [rsp+68h] [rbp-60h]
  _SLIST_ENTRY *v30; // [rsp+70h] [rbp-58h]
  _SLIST_ENTRY *v31; // [rsp+78h] [rbp-50h]
  __int16 v32; // [rsp+C0h] [rbp-8h]
  char v35; // [rsp+E8h] [rbp+20h]

  v3 = 4;
  if ( (HvlpFlags & 4) == 0 )
    return 3221225506LL;
  if ( !a2 )
    return 3221225485LL;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v8->Next;
    if ( v8 )
    {
      v26 = (_SLIST_HEADER *)CurrentPrcb;
      v9 = BYTE4(CurrentPrcb);
      v35 = 1;
      Next = v8[1].Next;
      ListEntry = v8;
      goto LABEL_11;
    }
    v35 = 4;
    _disable();
    ListEntry = v27;
    LOBYTE(CurrentPrcb) = (v32 & 0x200) != 0;
    LOBYTE(v26) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = v28;
  }
  else
  {
    v35 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v32 & 0x200) != 0;
    ListEntry = v27;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v26) = (_BYTE)CurrentPrcb;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  HIDWORD(v26) = 1;
  v9 = 1;
LABEL_11:
  if ( (HvlpFlags & 0x10) == 0 )
  {
    _disable();
    v10 = (v32 & 0x200) != 0;
    v11 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v12 = (_SLIST_ENTRY *)*((_QWORD *)v11 + 2);
LABEL_16:
    v25 = v30;
    HIDWORD(v29) = 2;
    LOBYTE(v29) = v10;
    goto LABEL_17;
  }
  v24 = KeGetCurrentPrcb();
  v13 = RtlpInterlockedPopEntrySList(&v24->HypercallPageList);
  v11 = (char *)v13;
  if ( !v13 )
  {
    _disable();
    v10 = (v32 & 0x200) != 0;
    v12 = v31;
    v11 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    goto LABEL_16;
  }
  v3 = 1;
  v29 = (_SLIST_HEADER *)v24;
  v12 = v13[1].Next;
  v10 = (char)v24;
  v25 = (PSLIST_ENTRY)v11;
LABEL_17:
  *(_DWORD *)p_Next = a1;
  v14 = Next;
  v22 = v12;
  if ( (unsigned __int16)HvlpHypercallCodeVa(138LL, Next, v12) )
  {
    v15 = -1073741823;
  }
  else
  {
    v16 = *(_DWORD *)v11;
    if ( *a2 < *(_DWORD *)v11 )
    {
      v15 = -1073741789;
    }
    else
    {
      memmove(a3, v11 + 4, 4LL * v16);
      v15 = 0;
    }
    *a2 = v16;
    v14 = Next;
  }
  HypercallCachedPages = 0LL;
  if ( (v35 & 1) != 0 )
  {
    ListEntry[1].Next = v14;
    RtlpInterlockedPushEntrySList(v26 + 1535, ListEntry);
  }
  else if ( (v35 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v18 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v18->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v18->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = v14;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v19 = 0LL;
  if ( (v3 & 1) != 0 )
  {
    v25[1].Next = v22;
    RtlpInterlockedPushEntrySList(v29 + 1535, v25);
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (BYTE4(v29) & 1) != 0 )
    {
      v19 = (__int64)v20->HypercallCachedPages;
    }
    else if ( (BYTE4(v29) & 2) != 0 )
    {
      v19 = (__int64)v20->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v19 + 16) = v22;
    if ( v10 )
      _enable();
  }
  return v15;
}
