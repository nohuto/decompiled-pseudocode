/*
 * XREFs of HvlSetSystemSleepProperty @ 0x1401EA7F8
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  char v5; // r15
  char v6; // r14
  _SLIST_HEADER *CurrentPrcb; // rdi
  _DWORD *HypercallCachedPages; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *v11; // rbp
  __int16 v12; // bx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _SLIST_HEADER *v17; // [rsp+30h] [rbp-98h]
  _SLIST_ENTRY *v18; // [rsp+38h] [rbp-90h]
  _BYTE v19[7]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v20[89]; // [rsp+6Fh] [rbp-59h] BYREF

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    HypercallCachedPages = v10;
    if ( v10 )
    {
      Next = (PHYSICAL_ADDRESS)v10[1].Next;
      v5 = 1;
      v17 = CurrentPrcb;
      v11 = v10;
      v6 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    HypercallCachedPages = v19;
    if ( (((unsigned __int64)v19 ^ (unsigned __int64)v20) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      HypercallCachedPages = (_DWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFF000uLL);
    v5 = 2;
    LOBYTE(v17) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v17;
    if ( (unsigned __int8)v17 < 2u )
      __writecr8(2uLL);
    v6 = BYTE4(v17);
    Next = MmGetPhysicalAddress(HypercallCachedPages);
  }
  else
  {
    v5 = 4;
    LOWORD(CurrentPrcb) = *(_WORD *)&v20[81];
    _disable();
    v6 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v17) = 1;
    LOBYTE(v17) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  v11 = v18;
LABEL_11:
  *HypercallCachedPages = 3;
  HypercallCachedPages[2] = a1;
  *((_BYTE *)HypercallCachedPages + 12) = a2;
  *((_BYTE *)HypercallCachedPages + 13) = a3;
  v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
          111LL,
          (PHYSICAL_ADDRESS)Next.QuadPart,
          0LL);
  v13 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v11[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v17 + 1535, v11);
  }
  else if ( (v5 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    if ( (v6 & 1) != 0 )
    {
      v13 = (__int64)v14->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      v13 = (__int64)v14->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v13 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v12 != 0 ? 0xC0000001 : 0;
}
