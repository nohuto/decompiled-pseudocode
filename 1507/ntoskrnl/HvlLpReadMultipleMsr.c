/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1401E85D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v4; // rbp
  struct _KPRCB *CurrentPrcb; // rdi
  char *HypercallCachedPages; // rsi
  _SLIST_ENTRY *Next; // r12
  PSLIST_ENTRY v8; // rax
  char v9; // r15
  bool v10; // bl
  _QWORD *p_Next; // r14
  _SLIST_ENTRY *v12; // r13
  struct _KPRCB *v13; // r13
  PSLIST_ENTRY v14; // rax
  int *v15; // rdx
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  char v28; // [rsp+20h] [rbp-A8h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-A0h]
  PSLIST_ENTRY v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  _SLIST_HEADER *v32; // [rsp+48h] [rbp-80h]
  _SLIST_ENTRY *v33; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v34; // [rsp+58h] [rbp-70h]
  _SLIST_HEADER *v35; // [rsp+68h] [rbp-60h]
  _SLIST_ENTRY *v36; // [rsp+70h] [rbp-58h]
  _SLIST_ENTRY *v37; // [rsp+78h] [rbp-50h]
  __int16 v38; // [rsp+C0h] [rbp-8h]
  char v40; // [rsp+D8h] [rbp+10h]

  v4 = a2;
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  LODWORD(v31) = 136;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = (char *)v8;
    if ( v8 )
    {
      Next = v8[1].Next;
      v32 = (_SLIST_HEADER *)CurrentPrcb;
      v9 = BYTE4(CurrentPrcb);
      v40 = 1;
      ListEntry = v8;
      goto LABEL_8;
    }
    v40 = 4;
    _disable();
    Next = v34;
    LOBYTE(CurrentPrcb) = (v38 & 0x200) != 0;
    LOBYTE(v32) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v33;
  }
  else
  {
    v40 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v38 & 0x200) != 0;
    LOBYTE(v32) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v33;
    Next = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  }
  v9 = 1;
  HIDWORD(v32) = 1;
LABEL_8:
  if ( (HvlpFlags & 0x10) == 0 )
  {
    v28 = 4;
    _disable();
    v10 = (v38 & 0x200) != 0;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v12 = (_SLIST_ENTRY *)p_Next[2];
LABEL_13:
    v14 = v36;
    HIDWORD(v35) = 2;
    LOBYTE(v35) = v10;
    goto LABEL_14;
  }
  v13 = KeGetCurrentPrcb();
  v14 = RtlpInterlockedPopEntrySList(&v13->HypercallPageList);
  p_Next = &v14->Next;
  if ( !v14 )
  {
    v28 = 4;
    _disable();
    v12 = v37;
    v10 = (v38 & 0x200) != 0;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    goto LABEL_13;
  }
  v35 = (_SLIST_HEADER *)v13;
  v12 = v14[1].Next;
  v10 = (char)v35;
  v28 = 1;
LABEL_14:
  v30 = v14;
  if ( (_DWORD)v4 )
  {
    v15 = a3;
    v16 = HypercallCachedPages + 8;
    v17 = v4;
    do
    {
      *(v16 - 2) = a1;
      *(v16 - 1) = 65537;
      v18 = *v15++;
      *v16 = v18;
      v16 += 4;
      --v17;
    }
    while ( v17 );
  }
  v19 = 0;
  HIDWORD(v31) = v4 & 0xFFF;
  if ( (unsigned __int16)HvlpHypercallCodeVa(v31, Next, v12) )
    v19 = -1073741823;
  if ( (_DWORD)v4 )
  {
    v20 = a4;
    v21 = v4;
    do
    {
      v22 = *p_Next;
      p_Next += 2;
      *v20++ = v22;
      --v21;
    }
    while ( v21 );
  }
  v23 = 0LL;
  if ( (v40 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v32 + 1535, ListEntry);
  }
  else if ( (v40 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v24 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      v23 = (__int64)v24->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      v23 = (__int64)v24->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v23 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v25 = 0LL;
  if ( (v28 & 1) != 0 )
  {
    v30[1].Next = v12;
    RtlpInterlockedPushEntrySList(v35 + 1535, v30);
  }
  else
  {
    v26 = KeGetCurrentPrcb();
    if ( (BYTE4(v35) & 1) != 0 )
    {
      v25 = (__int64)v26->HypercallCachedPages;
    }
    else if ( (BYTE4(v35) & 2) != 0 )
    {
      v25 = (__int64)v26->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v25 + 16) = v12;
    if ( v10 )
      _enable();
  }
  return v19;
}
