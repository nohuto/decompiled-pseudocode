/*
 * XREFs of HvlSetSystemMachineCheckProperty @ 0x1401EA62C
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlSetSystemMachineCheckProperty(_QWORD *a1)
{
  char v2; // r15
  char v3; // r14
  _SLIST_HEADER *CurrentPrcb; // rdi
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v7; // rax
  _SLIST_ENTRY *v8; // rbp
  __int16 v9; // bx
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v11; // rcx
  _SLIST_HEADER *v13; // [rsp+28h] [rbp-A0h]
  _SLIST_ENTRY *v14; // [rsp+30h] [rbp-98h]
  _BYTE v15[7]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v16[97]; // [rsp+67h] [rbp-61h] BYREF

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v7->Next;
    if ( v7 )
    {
      v2 = 1;
      v13 = CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v7[1].Next;
      v8 = v7;
      v3 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    p_Next = v15;
    if ( (((unsigned __int64)v15 ^ (unsigned __int64)v16) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v16 & 0xFFFFFFFFFFFFF000uLL);
    v2 = 2;
    LOBYTE(v13) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v13;
    if ( (unsigned __int8)v13 < 2u )
      __writecr8(2uLL);
    v3 = BYTE4(v13);
    Next = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    v2 = 4;
    LOWORD(CurrentPrcb) = *(_WORD *)&v16[89];
    _disable();
    v3 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v13) = 1;
    LOBYTE(v13) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v8 = v14;
LABEL_11:
  *(_DWORD *)p_Next = 4;
  p_Next[1] = *a1;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
         111LL,
         (PHYSICAL_ADDRESS)Next.QuadPart,
         0LL);
  HypercallCachedPages = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v8[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v13 + 1535, v8);
  }
  else if ( (v2 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v11 = KeGetCurrentPrcb();
    if ( (v3 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v11->HypercallCachedPages;
    }
    else if ( (v3 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v11->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v9 != 0 ? 0xC0000001 : 0;
}
