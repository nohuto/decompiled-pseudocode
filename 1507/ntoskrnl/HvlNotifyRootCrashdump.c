/*
 * XREFs of HvlNotifyRootCrashdump @ 0x1401E992C
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x1401E9B20 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1401E9EEC (HvlResumeFromRootCrashdump.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall HvlNotifyRootCrashdump(int a1)
{
  PSLIST_ENTRY result; // rax
  char v2; // si
  char v4; // r15
  _SLIST_HEADER *CurrentPrcb; // rdi
  _DWORD *HypercallCachedPages; // rbx
  PHYSICAL_ADDRESS Next; // rbp
  PSLIST_ENTRY v8; // rax
  _SLIST_ENTRY *v9; // r14
  struct _KPRCB *v10; // rcx
  _SLIST_HEADER *v11; // [rsp+28h] [rbp-60h]
  _SLIST_ENTRY *v12; // [rsp+30h] [rbp-58h]
  _BYTE v13[7]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v14[9]; // [rsp+47h] [rbp-41h] BYREF
  int v15; // [rsp+80h] [rbp-8h]

  result = (PSLIST_ENTRY)(unsigned int)HvlpRootFlags;
  v2 = 4;
  if ( (HvlpRootFlags & 4) == 0 )
    return result;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    HypercallCachedPages = v8;
    if ( v8 )
    {
      Next = (PHYSICAL_ADDRESS)v8[1].Next;
      v2 = 1;
      v11 = CurrentPrcb;
      v9 = v8;
      v4 = BYTE4(CurrentPrcb);
      goto LABEL_12;
    }
    HypercallCachedPages = v13;
    if ( (((unsigned __int64)v13 ^ (unsigned __int64)v14) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      HypercallCachedPages = (_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFF000uLL);
    v2 = 2;
    LOBYTE(v11) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v11;
    if ( (unsigned __int8)v11 < 2u )
      __writecr8(2uLL);
    v4 = BYTE4(v11);
    Next = MmGetPhysicalAddress(HypercallCachedPages);
  }
  else
  {
    LOWORD(CurrentPrcb) = v15;
    _disable();
    v4 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v11) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    HIDWORD(v11) = 1;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  v9 = v12;
LABEL_12:
  *HypercallCachedPages = 2;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HypercallCachedPages[1] = 2;
    }
    else
    {
      if ( a1 != 2 )
        goto LABEL_19;
      HypercallCachedPages[1] = 3;
    }
  }
  else
  {
    HypercallCachedPages[1] = 1;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(135LL, (PHYSICAL_ADDRESS)Next.QuadPart, 0LL);
LABEL_19:
  result = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v9[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    return RtlpInterlockedPushEntrySList(v11 + 1535, v9);
  }
  else if ( (v2 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
    {
      result = (PSLIST_ENTRY)(unsigned __int8)CurrentPrcb;
      __writecr8((unsigned __int8)CurrentPrcb);
    }
  }
  else
  {
    v10 = KeGetCurrentPrcb();
    if ( (v4 & 1) != 0 )
    {
      result = (PSLIST_ENTRY)v10->HypercallCachedPages;
    }
    else if ( (v4 & 2) != 0 )
    {
      result = (PSLIST_ENTRY)((char *)v10->HypercallCachedPages + 4096);
    }
    result[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return result;
}
