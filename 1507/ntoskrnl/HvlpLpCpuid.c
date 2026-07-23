/*
 * XREFs of HvlpLpCpuid @ 0x1407F8E68
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x1407F8AFC (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x1407F8CF0 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  PSLIST_ENTRY result; // rax
  char v10; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *p_Next; // rsi
  _SLIST_ENTRY *Next; // r13
  PSLIST_ENTRY v14; // rax
  char v15; // bp
  bool v16; // bl
  char *v17; // r14
  _SLIST_ENTRY *v18; // rax
  PSLIST_ENTRY v19; // rax
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  char v23; // [rsp+20h] [rbp-B8h]
  struct _KPRCB *v24; // [rsp+28h] [rbp-B0h]
  PSLIST_ENTRY v25; // [rsp+28h] [rbp-B0h]
  _SLIST_ENTRY *v26; // [rsp+30h] [rbp-A8h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-A0h]
  _SLIST_HEADER *v28; // [rsp+50h] [rbp-88h]
  _SLIST_ENTRY *v29; // [rsp+58h] [rbp-80h]
  _SLIST_ENTRY *v30; // [rsp+60h] [rbp-78h]
  _SLIST_HEADER *v31; // [rsp+70h] [rbp-68h]
  _SLIST_ENTRY *v32; // [rsp+78h] [rbp-60h]
  _SLIST_ENTRY *v33; // [rsp+80h] [rbp-58h]
  __int16 v34; // [rsp+D0h] [rbp-8h]

  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = (_DWORD)result;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
    return result;
  }
  v10 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v14->Next;
    if ( v14 )
    {
      Next = v14[1].Next;
      v28 = (_SLIST_HEADER *)CurrentPrcb;
      v15 = BYTE4(CurrentPrcb);
      v23 = 1;
      ListEntry = v14;
      goto LABEL_9;
    }
    v23 = 4;
    _disable();
    Next = v30;
    LOBYTE(CurrentPrcb) = (v34 & 0x200) != 0;
    LOBYTE(v28) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v29;
  }
  else
  {
    v23 = 4;
    _disable();
    LOBYTE(CurrentPrcb) = (v34 & 0x200) != 0;
    ListEntry = v29;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v28) = (_BYTE)CurrentPrcb;
    Next = (_SLIST_ENTRY *)p_Next[2];
  }
  HIDWORD(v28) = 1;
  v15 = 1;
LABEL_9:
  if ( (HvlpFlags & 0x10) == 0 )
  {
    _disable();
    v16 = (v34 & 0x200) != 0;
    v17 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v18 = (_SLIST_ENTRY *)*((_QWORD *)v17 + 2);
LABEL_14:
    v25 = v32;
    HIDWORD(v31) = 2;
    LOBYTE(v31) = v16;
    goto LABEL_15;
  }
  v24 = KeGetCurrentPrcb();
  v19 = RtlpInterlockedPopEntrySList(&v24->HypercallPageList);
  v17 = (char *)v19;
  if ( !v19 )
  {
    _disable();
    v16 = (v34 & 0x200) != 0;
    v18 = v33;
    v17 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    goto LABEL_14;
  }
  v10 = 1;
  v31 = (_SLIST_HEADER *)v24;
  v18 = v19[1].Next;
  v16 = (char)v24;
  v25 = (PSLIST_ENTRY)v17;
LABEL_15:
  *(_DWORD *)p_Next = a1;
  *((_DWORD *)p_Next + 2) = a2;
  *((_DWORD *)p_Next + 3) = a3;
  v26 = v18;
  *((_DWORD *)p_Next + 1) = 0x10000;
  HvlpHypercallCodeVa(0x100000088LL, Next, v18);
  *a4 = *(_DWORD *)v17;
  a4[1] = *((_DWORD *)v17 + 1);
  a4[2] = *((_DWORD *)v17 + 2);
  a4[3] = *((_DWORD *)v17 + 3);
  HypercallCachedPages = 0LL;
  if ( (v23 & 1) != 0 )
  {
    ListEntry[1].Next = Next;
    RtlpInterlockedPushEntrySList(v28 + 1535, ListEntry);
  }
  else
  {
    v21 = KeGetCurrentPrcb();
    if ( (v15 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v21->HypercallCachedPages;
    }
    else if ( (v15 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v21->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  result = 0LL;
  if ( (v10 & 1) != 0 )
  {
    v25[1].Next = v26;
    return RtlpInterlockedPushEntrySList(v31 + 1535, v25);
  }
  else
  {
    v22 = KeGetCurrentPrcb();
    if ( (BYTE4(v31) & 1) != 0 )
    {
      result = (PSLIST_ENTRY)v22->HypercallCachedPages;
    }
    else if ( (BYTE4(v31) & 2) != 0 )
    {
      result = (PSLIST_ENTRY)((char *)v22->HypercallCachedPages + 4096);
    }
    result[1].Next = v26;
    if ( v16 )
      _enable();
  }
  return result;
}
