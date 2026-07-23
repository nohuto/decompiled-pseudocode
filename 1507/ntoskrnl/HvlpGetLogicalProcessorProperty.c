/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1401E61E4
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 *     HvlLpGetMachineCheckContext @ 0x1401E8254 (HvlLpGetMachineCheckContext.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, _SLIST_ENTRY *a3)
{
  char v4; // r13
  unsigned __int8 v5; // bp
  _QWORD *p_Next; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v8; // rax
  char v9; // r12
  bool v10; // si
  _SLIST_ENTRY *v11; // rdi
  _SLIST_ENTRY *v12; // rax
  PSLIST_ENTRY v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  _SLIST_ENTRY v16; // xmm1
  _SLIST_ENTRY *v17; // rax
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v19; // rcx
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v23; // [rsp+20h] [rbp-A8h]
  PSLIST_ENTRY v24; // [rsp+20h] [rbp-A8h]
  _SLIST_ENTRY *v25; // [rsp+28h] [rbp-A0h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-98h]
  _SLIST_ENTRY *Next; // [rsp+38h] [rbp-90h]
  _SLIST_HEADER *v28; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v29; // [rsp+58h] [rbp-70h]
  _SLIST_ENTRY *v30; // [rsp+60h] [rbp-68h]
  _SLIST_HEADER *v31; // [rsp+70h] [rbp-58h]
  _SLIST_ENTRY *v32; // [rsp+78h] [rbp-50h]
  _SLIST_ENTRY *v33; // [rsp+80h] [rbp-48h]
  __int16 v34; // [rsp+C0h] [rbp-8h]
  char v37; // [rsp+E8h] [rbp+20h]

  v4 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v8->Next;
    if ( v8 )
    {
      v5 = (unsigned __int8)CurrentPrcb;
      v28 = (_SLIST_HEADER *)CurrentPrcb;
      v9 = BYTE4(CurrentPrcb);
      Next = v8[1].Next;
      v37 = 1;
      ListEntry = v8;
      goto LABEL_7;
    }
    v37 = 4;
    _disable();
    ListEntry = v29;
    v5 = (v34 & 0x200) != 0;
    LOBYTE(v28) = v5;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = v30;
  }
  else
  {
    v37 = 4;
    _disable();
    v5 = (v34 & 0x200) != 0;
    LOBYTE(v28) = v5;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v29;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  v9 = 1;
  HIDWORD(v28) = 1;
LABEL_7:
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v23 = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&v23->HypercallPageList);
    v11 = v13;
    if ( v13 )
    {
      v4 = 1;
      v31 = (_SLIST_HEADER *)v23;
      v12 = v13[1].Next;
      v10 = (char)v23;
      v24 = v11;
      goto LABEL_13;
    }
    _disable();
    v10 = (v34 & 0x200) != 0;
    v12 = v33;
    v11 = (_SLIST_ENTRY *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
  }
  else
  {
    _disable();
    v10 = (v34 & 0x200) != 0;
    v11 = (_SLIST_ENTRY *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
    v12 = v11[1].Next;
  }
  v24 = v32;
  HIDWORD(v31) = 2;
  LOBYTE(v31) = v10;
LABEL_13:
  *(_DWORD *)p_Next = a1;
  *((_DWORD *)p_Next + 1) = a2;
  v25 = v12;
  if ( (unsigned __int16)HvlpHypercallCodeVa(122LL, Next, v12) )
  {
    v14 = -1073741823;
  }
  else
  {
    v15 = 25LL;
    do
    {
      *a3 = *v11;
      a3[1] = v11[1];
      a3[2] = v11[2];
      a3[3] = v11[3];
      a3[4] = v11[4];
      a3[5] = v11[5];
      a3[6] = v11[6];
      a3 += 8;
      v16 = v11[7];
      v11 += 8;
      a3[-1] = v16;
      --v15;
    }
    while ( v15 );
    *a3 = *v11;
    a3[1] = v11[1];
    a3[2] = v11[2];
    v17 = v11[3].Next;
    v14 = 0;
    a3[3].Next = v17;
  }
  HypercallCachedPages = 0LL;
  if ( (v37 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v28 + 1535, ListEntry);
  }
  else if ( (v37 & 2) != 0 )
  {
    if ( v5 < 2u )
      __writecr8(v5);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v19->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v19->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( v5 )
      _enable();
  }
  v20 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    v24[1].Next = v25;
    RtlpInterlockedPushEntrySList(v31 + 1535, v24);
  }
  else
  {
    v21 = KeGetCurrentPrcb();
    if ( (BYTE4(v31) & 1) != 0 )
    {
      v20 = (__int64)v21->HypercallCachedPages;
    }
    else if ( (BYTE4(v31) & 2) != 0 )
    {
      v20 = (__int64)v21->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v20 + 16) = v25;
    if ( v10 )
      _enable();
  }
  return v14;
}
