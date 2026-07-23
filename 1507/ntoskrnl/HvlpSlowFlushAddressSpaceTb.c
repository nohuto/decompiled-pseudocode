/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x140271660
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     HvlpFlushAddressSpaceTb @ 0x140270BBC (HvlpFlushAddressSpaceTb.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  char v5; // r15
  _SLIST_HEADER *CurrentPrcb; // rsi
  _QWORD *p_Next; // rdi
  PHYSICAL_ADDRESS Next; // rbp
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  char *i; // r9
  unsigned __int64 v16; // rcx
  _BYTE *v17; // r9
  PSLIST_ENTRY result; // rax
  struct _KPRCB *v19; // rcx
  char v20; // [rsp+20h] [rbp-98h]
  _SLIST_HEADER *v22; // [rsp+38h] [rbp-80h]
  _SLIST_ENTRY *v23; // [rsp+40h] [rbp-78h]
  _BYTE v24[7]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v25[81]; // [rsp+67h] [rbp-51h] BYREF

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v9->Next;
    if ( v9 )
    {
      Next = (PHYSICAL_ADDRESS)v9[1].Next;
      v10 = v9;
      v22 = CurrentPrcb;
      v5 = BYTE4(CurrentPrcb);
      v20 = 1;
      goto LABEL_11;
    }
    p_Next = v24;
    if ( (((unsigned __int64)v24 ^ (unsigned __int64)v25) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFF000uLL);
    v20 = 2;
    LOBYTE(v22) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v22;
    if ( (unsigned __int8)v22 < 2u )
      __writecr8(2uLL);
    v5 = BYTE4(v22);
    Next = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    v20 = 4;
    LOWORD(CurrentPrcb) = *(_WORD *)&v25[73];
    _disable();
    v5 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    LOBYTE(v22) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    HIDWORD(v22) = 1;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v10 = v23;
LABEL_11:
  v11 = a1;
  v12 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v12 |= 2u;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      v14 = 0LL;
      for ( i = byte_1403D3CC1; ; i = v17 + 2 )
      {
        if ( (v13 & 1) != 0 )
          v14 |= 1LL << *i;
        v16 = v13 >> 1;
        if ( !v16 )
          break;
        v17 = i + 2;
        if ( (v16 & 1) != 0 )
          v14 |= 1LL << *v17;
        v13 = v16 >> 1;
        if ( !v13 )
          break;
      }
      v11 = a1;
      v13 = v14;
    }
    p_Next[2] = v13;
  }
  else
  {
    v12 |= 1u;
    p_Next[2] = 0LL;
  }
  *p_Next = v11;
  p_Next[1] = v12;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(2LL, (PHYSICAL_ADDRESS)Next.QuadPart, 0LL);
  result = 0LL;
  if ( (v20 & 1) != 0 )
  {
    v10[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    return RtlpInterlockedPushEntrySList(v22 + 1535, v10);
  }
  else if ( (v20 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
    {
      result = (PSLIST_ENTRY)(unsigned __int8)CurrentPrcb;
      __writecr8((unsigned __int8)CurrentPrcb);
    }
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (v5 & 1) != 0 )
    {
      result = (PSLIST_ENTRY)v19->HypercallCachedPages;
    }
    else if ( (v5 & 2) != 0 )
    {
      result = (PSLIST_ENTRY)((char *)v19->HypercallCachedPages + 4096);
    }
    result[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return result;
}
