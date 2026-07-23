/*
 * XREFs of HvlNotifyHpetEnabled @ 0x1401E9768
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  char v0; // r15
  char v1; // r14
  _SLIST_HEADER *CurrentPrcb; // rdi
  _DWORD *HypercallCachedPages; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v5; // rax
  _SLIST_ENTRY *v6; // rbp
  __int16 v7; // bx
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  _SLIST_HEADER *v11; // [rsp+28h] [rbp-A0h]
  _SLIST_ENTRY *v12; // [rsp+30h] [rbp-98h]
  _BYTE v13[7]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v14[97]; // [rsp+67h] [rbp-61h] BYREF

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v5 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    HypercallCachedPages = v5;
    if ( v5 )
    {
      Next = (PHYSICAL_ADDRESS)v5[1].Next;
      v0 = 1;
      v11 = CurrentPrcb;
      v6 = v5;
      v1 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    HypercallCachedPages = v13;
    if ( (((unsigned __int64)v13 ^ (unsigned __int64)v14) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      HypercallCachedPages = (_DWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFF000uLL);
    v0 = 2;
    LOBYTE(v11) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v11;
    if ( (unsigned __int8)v11 < 2u )
      __writecr8(2uLL);
    v1 = BYTE4(v11);
    Next = MmGetPhysicalAddress(HypercallCachedPages);
  }
  else
  {
    v0 = 4;
    LOWORD(CurrentPrcb) = *(_WORD *)&v14[89];
    _disable();
    v1 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v11) = 1;
    LOBYTE(v11) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  v6 = v12;
LABEL_11:
  *HypercallCachedPages = 8;
  *((_BYTE *)HypercallCachedPages + 8) = 1;
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
         111LL,
         (PHYSICAL_ADDRESS)Next.QuadPart,
         0LL);
  v8 = 0LL;
  if ( (v0 & 1) != 0 )
  {
    v6[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v11 + 1535, v6);
  }
  else if ( (v0 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v9 = KeGetCurrentPrcb();
    if ( (v1 & 1) != 0 )
    {
      v8 = (__int64)v9->HypercallCachedPages;
    }
    else if ( (v1 & 2) != 0 )
    {
      v8 = (__int64)v9->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v8 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v7 != 0 ? 0xC0000001 : 0;
}
