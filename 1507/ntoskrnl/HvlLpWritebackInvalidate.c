/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1401E8B18
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  char v2; // bp
  _SLIST_HEADER *CurrentPrcb; // rbx
  _DWORD *HypercallCachedPages; // rdi
  _SLIST_ENTRY *Next; // r14
  PSLIST_ENTRY v6; // rax
  _SLIST_ENTRY *v7; // r15
  char v8; // si
  __int16 v9; // ax
  bool v10; // zf
  unsigned int v11; // edi
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _SLIST_HEADER *v15; // [rsp+28h] [rbp-50h]
  _SLIST_ENTRY *v16; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v17; // [rsp+38h] [rbp-40h]
  __int16 v18; // [rsp+70h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v6 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    HypercallCachedPages = v6;
    if ( v6 )
    {
      Next = v6[1].Next;
      v2 = 1;
      v15 = CurrentPrcb;
      v7 = v6;
      v8 = BYTE4(CurrentPrcb);
      goto LABEL_7;
    }
    v2 = 4;
    v9 = v18;
    _disable();
    Next = v17;
    LOBYTE(CurrentPrcb) = (v9 & 0x200) != 0;
    LOBYTE(v15) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v2 = 4;
    LOWORD(CurrentPrcb) = v18;
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v15) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)*((_QWORD *)HypercallCachedPages + 2);
  }
  v7 = v16;
  v8 = 1;
  HIDWORD(v15) = 1;
LABEL_7:
  memset(HypercallCachedPages, 0, 0x20uLL);
  *HypercallCachedPages = a1;
  HypercallCachedPages[1] = 65538;
  v10 = (unsigned __int16)HvlpHypercallCodeVa(0x100000089LL, Next, 0LL) == 0;
  v11 = 0;
  v12 = 0LL;
  if ( !v10 )
    v11 = -1073741823;
  if ( (v2 & 1) != 0 )
  {
    v7[1].Next = Next;
    RtlpInterlockedPushEntrySList(v15 + 1535, v7);
  }
  else
  {
    v13 = KeGetCurrentPrcb();
    if ( (v8 & 1) != 0 )
    {
      v12 = (__int64)v13->HypercallCachedPages;
    }
    else if ( (v8 & 2) != 0 )
    {
      v12 = (__int64)v13->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(v12 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v11;
}
