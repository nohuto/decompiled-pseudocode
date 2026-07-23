/*
 * XREFs of HvlpStartVirtualProcessor @ 0x1401E7ACC
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x1401E820C (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(int a1, _SLIST_ENTRY *a2)
{
  char v4; // si
  _SLIST_HEADER *CurrentPrcb; // rbx
  _SLIST_ENTRY *HypercallCachedPages; // rax
  _SLIST_ENTRY *Next; // rbp
  _SLIST_ENTRY *v8; // r14
  char v9; // di
  __int16 v10; // ax
  _SLIST_ENTRY *v11; // rax
  _SLIST_ENTRY v12; // xmm0
  _SLIST_ENTRY *v13; // r15
  unsigned int v14; // r15d
  bool v15; // zf
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _SLIST_HEADER *v19; // [rsp+28h] [rbp-40h]
  _SLIST_ENTRY *v20; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v21; // [rsp+38h] [rbp-30h]
  __int16 v22; // [rsp+60h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    HypercallCachedPages = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    if ( HypercallCachedPages )
    {
      Next = HypercallCachedPages[1].Next;
      v4 = 1;
      v19 = CurrentPrcb;
      v8 = HypercallCachedPages;
      v9 = BYTE4(CurrentPrcb);
      goto LABEL_7;
    }
    v4 = 4;
    v10 = v22;
    _disable();
    Next = v21;
    LOBYTE(CurrentPrcb) = (v10 & 0x200) != 0;
    LOBYTE(v19) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v4 = 4;
    LOWORD(CurrentPrcb) = v22;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v19) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
    Next = HypercallCachedPages[1].Next;
  }
  v8 = v20;
  v9 = 1;
  HIDWORD(v19) = 1;
LABEL_7:
  HypercallCachedPages->Next = (_SLIST_ENTRY *)-1LL;
  *((_DWORD *)&HypercallCachedPages->Next + 3) = 0;
  *((_DWORD *)&HypercallCachedPages->Next + 2) = a1;
  v11 = HypercallCachedPages + 1;
  *v11 = *a2;
  v11[1] = a2[1];
  v11[2] = a2[2];
  v11[3] = a2[3];
  v11[4] = a2[4];
  v11[5] = a2[5];
  v11[6] = a2[6];
  v11 += 8;
  v12 = a2[7];
  v13 = a2 + 8;
  v11[-1] = v12;
  *v11 = *v13;
  v11[1] = v13[1];
  v11[2] = v13[2];
  v11[3] = v13[3];
  v11[4] = v13[4];
  v11[5] = v13[5];
  v14 = 0;
  v15 = (unsigned __int16)HvlpHypercallCodeVa(153LL, Next, 0LL) == 0;
  v16 = 0LL;
  if ( !v15 )
    v14 = -1073741823;
  if ( (v4 & 1) != 0 )
  {
    v8[1].Next = Next;
    RtlpInterlockedPushEntrySList(v19 + 1535, v8);
  }
  else
  {
    v17 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      v16 = (__int64)v17->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      v16 = (__int64)v17->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v16 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v14;
}
