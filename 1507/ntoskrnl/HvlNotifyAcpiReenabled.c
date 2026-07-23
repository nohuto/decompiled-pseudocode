/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1401ECCE8
 * Callers:
 *     PopHiberCheckResume @ 0x1403EFBB8 (PopHiberCheckResume.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  char v0; // si
  _SLIST_HEADER *CurrentPrcb; // rbx
  _SLIST_ENTRY *HypercallCachedPages; // rax
  _SLIST_ENTRY *Next; // rbp
  _SLIST_ENTRY *v4; // r14
  char v5; // di
  __int16 v6; // ax
  unsigned int v7; // r15d
  bool v8; // zf
  __int64 v9; // rax
  struct _KPRCB *v10; // rcx
  _SLIST_HEADER *v12; // [rsp+28h] [rbp-40h]
  _SLIST_ENTRY *v13; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v14; // [rsp+38h] [rbp-30h]
  __int16 v15; // [rsp+60h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    HypercallCachedPages = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    if ( HypercallCachedPages )
    {
      Next = HypercallCachedPages[1].Next;
      v0 = 1;
      v12 = CurrentPrcb;
      v4 = HypercallCachedPages;
      v5 = BYTE4(CurrentPrcb);
      goto LABEL_7;
    }
    v0 = 4;
    v6 = v15;
    _disable();
    Next = v14;
    LOBYTE(CurrentPrcb) = (v6 & 0x200) != 0;
    LOBYTE(v12) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v0 = 4;
    LOWORD(CurrentPrcb) = v15;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v12) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
    Next = HypercallCachedPages[1].Next;
  }
  v4 = v13;
  v5 = 1;
  HIDWORD(v12) = 1;
LABEL_7:
  LODWORD(HypercallCachedPages->Next) = 3;
  v7 = 0;
  v8 = (unsigned __int16)HvlpHypercallCodeVa(135LL, Next, 0LL) == 0;
  v9 = 0LL;
  if ( !v8 )
    v7 = -1073741823;
  if ( (v0 & 1) != 0 )
  {
    v4[1].Next = Next;
    RtlpInterlockedPushEntrySList(v12 + 1535, v4);
  }
  else
  {
    v10 = KeGetCurrentPrcb();
    if ( (v5 & 1) != 0 )
    {
      v9 = (__int64)v10->HypercallCachedPages;
    }
    else if ( (v5 & 2) != 0 )
    {
      v9 = (__int64)v10->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v9 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v7;
}
