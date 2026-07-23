/*
 * XREFs of HvlResetCoverageVector @ 0x1401E530C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

bool HvlResetCoverageVector()
{
  _SLIST_HEADER *v0; // rdi
  char v1; // r12
  char v2; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *p_Next; // rbx
  PSLIST_ENTRY v5; // rax
  PHYSICAL_ADDRESS Next; // rax
  char v7; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // rbp
  _BYTE *v11; // rcx
  _SLIST_ENTRY *QuadPart; // rbx
  bool v13; // zf
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v15; // rcx
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  char v19; // [rsp+20h] [rbp-928h]
  PHYSICAL_ADDRESS v20; // [rsp+28h] [rbp-920h]
  bool v21; // [rsp+28h] [rbp-920h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-918h]
  _SLIST_HEADER *v23; // [rsp+40h] [rbp-908h]
  _SLIST_ENTRY *v24; // [rsp+48h] [rbp-900h]
  _SLIST_HEADER *v25; // [rsp+60h] [rbp-8E8h]
  _SLIST_ENTRY *v26; // [rsp+68h] [rbp-8E0h]
  _BYTE v27[7]; // [rsp+78h] [rbp-8D0h] BYREF
  _BYTE v28[73]; // [rsp+BFh] [rbp-889h] BYREF
  _BYTE v29[7]; // [rsp+108h] [rbp-840h] BYREF
  _BYTE v30[1033]; // [rsp+50Fh] [rbp-439h] BYREF
  int v31; // [rsp+940h] [rbp-8h]

  LOWORD(v0) = v31;
  v1 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v5->Next;
    if ( v5 )
    {
      ListEntry = v5;
      Next = (PHYSICAL_ADDRESS)v5[1].Next;
      v19 = 1;
      v23 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      p_Next = v29;
      if ( (((unsigned __int64)v29 ^ (unsigned __int64)v30) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v30 & 0xFFFFFFFFFFFFF000uLL);
      v19 = 2;
      LOBYTE(v23) = KeGetCurrentIrql();
      LOBYTE(CurrentPrcb) = (_BYTE)v23;
      if ( (unsigned __int8)v23 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(p_Next);
      ListEntry = v24;
    }
    v2 = BYTE4(v23);
    v20 = Next;
  }
  else
  {
    v19 = 4;
    _disable();
    v2 = 1;
    LOBYTE(CurrentPrcb) = (v31 & 0x200) != 0;
    HIDWORD(v23) = 1;
    LOBYTE(v23) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v24;
    v20 = (PHYSICAL_ADDRESS)p_Next[2];
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v0 = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(v0 + 1535);
    v10 = v9;
    if ( v9 )
    {
      PhysicalAddress = (PHYSICAL_ADDRESS)v9[1].Next;
      v1 = 1;
      v25 = v0;
      v7 = BYTE4(v0);
      goto LABEL_21;
    }
    v11 = v27;
    if ( (((unsigned __int64)v27 ^ (unsigned __int64)v28) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v11 = (_BYTE *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFF000uLL);
    v1 = 2;
    LOBYTE(v25) = KeGetCurrentIrql();
    LOBYTE(v0) = (_BYTE)v25;
    if ( (unsigned __int8)v25 < 2u )
      __writecr8(2uLL);
    v7 = BYTE4(v25);
    PhysicalAddress = MmGetPhysicalAddress(v11);
  }
  else
  {
    _disable();
    LOBYTE(v0) = ((unsigned __int16)v0 & 0x200) != 0;
    HIDWORD(v25) = 2;
    v7 = 2;
    LOBYTE(v25) = (_BYTE)v0;
    PhysicalAddress = *(PHYSICAL_ADDRESS *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4112);
  }
  v10 = v26;
LABEL_21:
  *(_DWORD *)p_Next = 3;
  QuadPart = (_SLIST_ENTRY *)v20.QuadPart;
  v13 = (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                            147LL,
                            (PHYSICAL_ADDRESS)v20.QuadPart,
                            (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart) == 0;
  HypercallCachedPages = 0LL;
  v21 = v13;
  if ( (v19 & 1) != 0 )
  {
    ListEntry[1].Next = QuadPart;
    RtlpInterlockedPushEntrySList(v23 + 1535, ListEntry);
  }
  else if ( (v19 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v15 = KeGetCurrentPrcb();
    if ( (v2 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages;
    }
    else if ( (v2 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v15->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = QuadPart;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v16 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    v10[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v25 + 1535, v10);
  }
  else if ( (v1 & 2) != 0 )
  {
    if ( (unsigned __int8)v0 < 2u )
      __writecr8((unsigned __int8)v0);
  }
  else
  {
    v17 = KeGetCurrentPrcb();
    if ( (v7 & 1) != 0 )
    {
      v16 = (__int64)v17->HypercallCachedPages;
    }
    else if ( (v7 & 2) != 0 )
    {
      v16 = (__int64)v17->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v16 + 16) = PhysicalAddress;
    if ( (_BYTE)v0 )
      _enable();
  }
  return v21;
}
