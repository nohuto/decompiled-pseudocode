/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x1401EB8CC
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, _OWORD *a2)
{
  char v4; // bp
  char v5; // r15
  _SLIST_HEADER *CurrentPrcb; // rdi
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // r14
  __int16 v11; // bx
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v13; // rcx
  _SLIST_HEADER *v15; // [rsp+28h] [rbp-90h]
  _SLIST_ENTRY *v16; // [rsp+30h] [rbp-88h]
  _BYTE v17[7]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v18[89]; // [rsp+5Fh] [rbp-59h] BYREF

  v4 = 1;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v9->Next;
    if ( v9 )
    {
      Next = (PHYSICAL_ADDRESS)v9[1].Next;
      v5 = 1;
      v15 = CurrentPrcb;
      v10 = v9;
      v4 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    p_Next = v17;
    if ( (((unsigned __int64)v17 ^ (unsigned __int64)v18) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFF000uLL);
    v5 = 2;
    LOBYTE(v15) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v15;
    if ( (unsigned __int8)v15 < 2u )
      __writecr8(2uLL);
    v4 = BYTE4(v15);
    Next = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    v5 = 4;
    LOWORD(CurrentPrcb) = *(_WORD *)&v18[81];
    _disable();
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v15) = 1;
    LOBYTE(v15) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v10 = v16;
LABEL_11:
  *p_Next = HvlPartitionId;
  p_Next[1] = a1;
  *((_OWORD *)p_Next + 1) = *a2;
  v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
          125LL,
          (PHYSICAL_ADDRESS)Next.QuadPart,
          0LL);
  HypercallCachedPages = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v10[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v15 + 1535, v10);
  }
  else if ( (v5 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v13 = KeGetCurrentPrcb();
    if ( (v4 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v13->HypercallCachedPages;
    }
    else if ( (v4 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v13->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v11 != 0 ? 0xC0000001 : 0;
}
