/*
 * XREFs of sub_1401F073C @ 0x1401F073C
 * Callers:
 *     HvlpGetPageList @ 0x1401F0584 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1401F096C (HvlpStartPageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_1401F073C(__int64 a1, __int64 a2)
{
  char v4; // r15
  char v5; // r14
  _SLIST_HEADER *CurrentPrcb; // rdi
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // rbp
  PSLIST_ENTRY result; // rax
  struct _KPRCB *v12; // rcx
  _SLIST_HEADER *v13; // [rsp+28h] [rbp-90h]
  _SLIST_ENTRY *v14; // [rsp+30h] [rbp-88h]
  _BYTE v15[7]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v16[97]; // [rsp+57h] [rbp-61h] BYREF

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v9->Next;
    if ( v9 )
    {
      Next = (PHYSICAL_ADDRESS)v9[1].Next;
      v4 = 1;
      v13 = CurrentPrcb;
      v10 = v9;
      v5 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    p_Next = v15;
    if ( (((unsigned __int64)v15 ^ (unsigned __int64)v16) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL);
    v4 = 2;
    LOBYTE(v13) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v13;
    if ( (unsigned __int8)v13 < 2u )
      __writecr8(2uLL);
    v5 = BYTE4(v13);
    Next = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    v4 = 4;
    LOWORD(CurrentPrcb) = *(_WORD *)&v16[89];
    _disable();
    v5 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v13) = 1;
    LOBYTE(v13) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v10 = v14;
LABEL_11:
  p_Next[1] = -1LL;
  *p_Next = a2;
  p_Next[2] = 1LL;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
    151LL,
    (PHYSICAL_ADDRESS)Next.QuadPart,
    *(_QWORD *)(a1 + 16));
  result = 0LL;
  if ( (v4 & 1) != 0 )
  {
    v10[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    return RtlpInterlockedPushEntrySList(v13 + 1535, v10);
  }
  else if ( (v4 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
    {
      result = (PSLIST_ENTRY)(unsigned __int8)CurrentPrcb;
      __writecr8((unsigned __int8)CurrentPrcb);
    }
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    if ( (v5 & 1) != 0 )
    {
      result = (PSLIST_ENTRY)v12->HypercallCachedPages;
    }
    else if ( (v5 & 2) != 0 )
    {
      result = (PSLIST_ENTRY)((char *)v12->HypercallCachedPages + 4096);
    }
    result[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return result;
}
