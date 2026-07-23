/*
 * XREFs of sub_14067068C @ 0x14067068C
 * Callers:
 *     sub_14067088C @ 0x14067088C (sub_14067088C.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall sub_14067068C(__int64 a1, int a2)
{
  _SLIST_ENTRY *Next; // r14
  _SLIST_ENTRY *v4; // r15
  char v6; // si
  __int64 result; // rax
  char v8; // bp
  bool v9; // di
  _QWORD *HypercallCachedPages; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v12; // rax
  __int16 v13; // bx
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _SLIST_HEADER *v16; // [rsp+28h] [rbp-50h]
  _SLIST_ENTRY *v17; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v18; // [rsp+38h] [rbp-40h]
  __int16 v19; // [rsp+70h] [rbp-8h]
  int v20; // [rsp+80h] [rbp+8h]

  Next = v18;
  v4 = v17;
  v6 = 1;
  v20 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 160);
  while ( 1 )
  {
    result = HvlpDepositPages(*(_WORD *)(a1 + 12));
    if ( (_DWORD)result )
      return result;
    if ( (HvlpFlags & 0x10) == 0 )
    {
      v8 = 4;
      _disable();
      v9 = (v19 & 0x200) != 0;
      HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
      LOBYTE(v16) = v9;
      Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
LABEL_8:
      HIDWORD(v16) = 1;
      goto LABEL_9;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = &v12->Next;
    if ( !v12 )
    {
      v8 = 4;
      _disable();
      v9 = (v19 & 0x200) != 0;
      LOBYTE(v16) = v9;
      HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
      goto LABEL_8;
    }
    Next = v12[1].Next;
    v8 = 1;
    v16 = (_SLIST_HEADER *)CurrentPrcb;
    v4 = v12;
    v6 = BYTE4(CurrentPrcb);
    v9 = (char)CurrentPrcb;
LABEL_9:
    *HypercallCachedPages = HvlPartitionId;
    *((_DWORD *)HypercallCachedPages + 4) = v20;
    *((_DWORD *)HypercallCachedPages + 2) = a2;
    *((_DWORD *)HypercallCachedPages + 5) = -2147483647;
    HypercallCachedPages[3] = *(unsigned int *)(a1 + 4);
    v13 = HvlpHypercallCodeVa(78LL, Next, 0LL);
    v14 = 0LL;
    if ( (v8 & 1) != 0 )
    {
      v4[1].Next = Next;
      RtlpInterlockedPushEntrySList(v16 + 1535, v4);
    }
    else
    {
      v15 = KeGetCurrentPrcb();
      if ( (v6 & 1) != 0 )
      {
        v14 = (__int64)v15->HypercallCachedPages;
      }
      else if ( (v6 & 2) != 0 )
      {
        v14 = (__int64)v15->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(v14 + 16) = Next;
      if ( v9 )
        _enable();
    }
    v6 = 1;
    if ( v13 != 11 )
      return v13 != 0 ? 0xC0000001 : 0;
  }
}
