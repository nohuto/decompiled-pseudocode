/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x1401EBF8C
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x1401EA9E0 (HvlSvmAcknowledgePageRequest.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvlpFastAcknowledgePageRequest @ 0x1401EBC00 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rbx
  char v6; // r12
  __int16 v7; // di
  char v8; // bp
  bool v9; // di
  _SLIST_ENTRY *HypercallCachedPages; // rax
  _SLIST_ENTRY *v11; // r15
  struct _KPRCB *v12; // rsi
  _SLIST_ENTRY *Next; // r14
  __int64 v14; // rax
  unsigned __int16 v15; // bx
  __int64 v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // [rsp+28h] [rbp-50h]
  _SLIST_ENTRY *v20; // [rsp+30h] [rbp-48h]
  __int16 v21; // [rsp+70h] [rbp-8h]
  __int64 v23; // [rsp+98h] [rbp+20h]
  __int16 v24; // [rsp+9Ch] [rbp+24h]

  v4 = a1;
  if ( (HvlpFlags & 0x10) == 0 )
  {
    v6 = 4;
    v7 = v21;
    _disable();
    v8 = 5;
    HIDWORD(v19) = 5;
    v9 = (v7 & 0x200) != 0;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v19) = v9;
    v11 = v20;
    v12 = v19;
LABEL_5:
    Next = HypercallCachedPages[1].Next;
    memmove(HypercallCachedPages, a2, 32 * v4);
    LODWORD(v23) = 166;
    HIDWORD(v23) = v4 & 0xFFF;
    v14 = HvlpHypercallCodeVa(v23, Next, 0LL);
    v15 = v14;
    v24 = WORD2(v14);
    v16 = 0LL;
    if ( (v6 & 1) != 0 )
    {
      v11[1].Next = Next;
      RtlpInterlockedPushEntrySList(&v12->HypercallPageList, v11);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (v8 & 1) != 0 )
      {
        v16 = (__int64)CurrentPrcb->HypercallCachedPages;
      }
      else if ( (v8 & 2) != 0 )
      {
        v16 = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(v16 + 16) = Next;
      if ( v9 )
        _enable();
    }
    *a3 = v24 & 0xFFF;
    return v15;
  }
  v12 = KeGetCurrentPrcb();
  HypercallCachedPages = RtlpInterlockedPopEntrySList(&v12->HypercallPageList);
  if ( HypercallCachedPages )
  {
    v6 = 1;
    v8 = BYTE4(v12);
    v11 = HypercallCachedPages;
    v9 = (char)v12;
    goto LABEL_5;
  }
  if ( (unsigned int)v4 >= 3 )
    LODWORD(v4) = 3;
  return HvlpFastAcknowledgePageRequest(v4, a2, a3);
}
