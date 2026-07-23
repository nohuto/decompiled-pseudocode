/*
 * XREFs of HvlEnterSleepState @ 0x1401E7CD8
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlEnterSleepState(int a1)
{
  char v2; // r15
  char v3; // r14
  _SLIST_HEADER *CurrentPrcb; // rdi
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v7; // rax
  _SLIST_ENTRY *v8; // rbp
  __int16 v9; // ax
  __int64 HypercallCachedPages; // rcx
  __int16 v11; // bx
  struct _KPRCB *v12; // rax
  _SLIST_HEADER *v14; // [rsp+28h] [rbp-60h]
  _SLIST_ENTRY *v15; // [rsp+30h] [rbp-58h]
  _BYTE v16[7]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v17[9]; // [rsp+47h] [rbp-41h] BYREF
  int v18; // [rsp+80h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v7->Next;
    if ( v7 )
    {
      v2 = 1;
      v14 = CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v7[1].Next;
      v8 = v7;
      v3 = BYTE4(CurrentPrcb);
      goto LABEL_11;
    }
    p_Next = v16;
    if ( (((unsigned __int64)v16 ^ (unsigned __int64)v17) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFF000uLL);
    v2 = 2;
    LOBYTE(v14) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v14;
    if ( (unsigned __int8)v14 < 2u )
      __writecr8(2uLL);
    v3 = BYTE4(v14);
    Next = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    v2 = 4;
    LOWORD(CurrentPrcb) = v18;
    _disable();
    v3 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v14) = 1;
    LOBYTE(v14) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v8 = v15;
LABEL_11:
  *(_DWORD *)p_Next = a1;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
         132LL,
         (PHYSICAL_ADDRESS)Next.QuadPart,
         0LL);
  HypercallCachedPages = 0LL;
  v11 = v9;
  if ( (v2 & 1) != 0 )
  {
    v8[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v14 + 1535, v8);
  }
  else if ( (v2 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    if ( (v3 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v12->HypercallCachedPages;
    }
    else if ( (v3 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v12->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v11 != 0 ? 0xC0000001 : 0;
}
