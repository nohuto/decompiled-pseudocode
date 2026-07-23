/*
 * XREFs of HvlpInitializePowerStatistics @ 0x1401ED6C0
 * Callers:
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *p_Next; // r14
  _SLIST_ENTRY *Next; // r12
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *v5; // r13
  char v6; // r15
  unsigned __int8 v7; // di
  char *v8; // rbp
  _SLIST_ENTRY *v9; // rax
  PSLIST_ENTRY v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // xmm0_8
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-98h]
  _SLIST_HEADER *v18; // [rsp+30h] [rbp-88h]
  _SLIST_ENTRY *v19; // [rsp+38h] [rbp-80h]
  _SLIST_ENTRY *v20; // [rsp+40h] [rbp-78h]
  _SLIST_HEADER *v21; // [rsp+50h] [rbp-68h]
  _SLIST_ENTRY *v22; // [rsp+58h] [rbp-60h]
  _SLIST_ENTRY *v23; // [rsp+60h] [rbp-58h]
  __int16 v24; // [rsp+B0h] [rbp-8h]
  char v25; // [rsp+C0h] [rbp+8h]
  char v26; // [rsp+C8h] [rbp+10h]
  struct _KPRCB *v27; // [rsp+D8h] [rbp+20h]
  _SLIST_ENTRY *v28; // [rsp+D8h] [rbp+20h]

  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v4->Next;
    if ( v4 )
    {
      Next = v4[1].Next;
      v5 = v4;
      v18 = (_SLIST_HEADER *)CurrentPrcb;
      v6 = BYTE4(CurrentPrcb);
      v25 = 1;
      goto LABEL_9;
    }
    v25 = 4;
    _disable();
    Next = v20;
    LOBYTE(CurrentPrcb) = (v24 & 0x200) != 0;
    LOBYTE(v18) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v25 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v24 & 0x200) != 0;
    LOBYTE(v18) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  v5 = v19;
  v6 = 1;
  HIDWORD(v18) = 1;
LABEL_9:
  if ( (HvlpFlags & 0x10) == 0 )
  {
    v26 = 4;
    _disable();
    v7 = (v24 & 0x200) != 0;
    v8 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v9 = (_SLIST_ENTRY *)*((_QWORD *)v8 + 2);
LABEL_14:
    ListEntry = v22;
    HIDWORD(v21) = 2;
    LOBYTE(v21) = v7;
    goto LABEL_15;
  }
  v27 = KeGetCurrentPrcb();
  v10 = RtlpInterlockedPopEntrySList(&v27->HypercallPageList);
  v8 = (char *)v10;
  if ( !v10 )
  {
    v26 = 4;
    _disable();
    v7 = (v24 & 0x200) != 0;
    v9 = v23;
    v8 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    goto LABEL_14;
  }
  v21 = (_SLIST_HEADER *)v27;
  v9 = v10[1].Next;
  v7 = (unsigned __int8)v27;
  v26 = 1;
  ListEntry = (PSLIST_ENTRY)v8;
LABEL_15:
  v28 = v9;
  *p_Next = 0LL;
  *(_DWORD *)p_Next = 4;
  if ( (unsigned __int16)HvlpHypercallCodeVa(155LL, Next, v9) )
  {
    v11 = -1073741823;
  }
  else
  {
    xmmword_140383008 = *(_OWORD *)v8;
    xmmword_140383018 = *((_OWORD *)v8 + 1);
    v12 = *((_QWORD *)v8 + 4);
    v11 = 0;
    qword_140383028 = v12;
  }
  HypercallCachedPages = 0LL;
  if ( (v25 & 1) != 0 )
  {
    v5[1].Next = Next;
    RtlpInterlockedPushEntrySList(v18 + 1535, v5);
  }
  else if ( (v25 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    if ( (v6 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v15 = 0LL;
  if ( (v26 & 1) != 0 )
  {
    ListEntry[1].Next = v28;
    RtlpInterlockedPushEntrySList(v21 + 1535, ListEntry);
  }
  else if ( (v26 & 2) != 0 )
  {
    if ( v7 < 2u )
      __writecr8(v7);
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (BYTE4(v21) & 1) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages;
    }
    else if ( (BYTE4(v21) & 2) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v15 + 16) = v28;
    if ( v7 )
      _enable();
  }
  return v11;
}
