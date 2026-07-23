/*
 * XREFs of HvlGetCoverageInfo @ 0x1401E4E54
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _SLIST_HEADER *v4; // rbp
  char v5; // r13
  unsigned __int8 v6; // si
  _DWORD *HypercallCachedPages; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v9; // rax
  char v10; // r12
  char *v11; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v13; // rax
  _SLIST_ENTRY *v14; // r15
  int v15; // eax
  char v16; // di
  __int64 v17; // rax
  struct _KPRCB *v18; // rcx
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  char v22; // [rsp+24h] [rbp-964h]
  char v23; // [rsp+28h] [rbp-960h]
  PHYSICAL_ADDRESS Next; // [rsp+30h] [rbp-958h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-950h]
  _SLIST_HEADER *v26; // [rsp+48h] [rbp-940h]
  _SLIST_ENTRY *v27; // [rsp+50h] [rbp-938h]
  _SLIST_HEADER *v28; // [rsp+68h] [rbp-920h]
  _SLIST_ENTRY *v29; // [rsp+70h] [rbp-918h]
  _BYTE v33[7]; // [rsp+98h] [rbp-8F0h] BYREF
  _BYTE v34[73]; // [rsp+DFh] [rbp-8A9h] BYREF
  _BYTE v35[7]; // [rsp+128h] [rbp-860h] BYREF
  _BYTE v36[1033]; // [rsp+52Fh] [rbp-459h] BYREF
  int v37; // [rsp+980h] [rbp-8h]

  LOWORD(v4) = v37;
  v23 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v9;
    if ( v9 )
    {
      v6 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v9[1].Next;
      v22 = 1;
      v28 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      HypercallCachedPages = v35;
      if ( (((unsigned __int64)v35 ^ (unsigned __int64)v36) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        HypercallCachedPages = (_DWORD *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFF000uLL);
      v22 = 2;
      LOBYTE(v28) = KeGetCurrentIrql();
      v6 = (unsigned __int8)v28;
      if ( (unsigned __int8)v28 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(HypercallCachedPages);
      v9 = v29;
    }
    v5 = BYTE4(v28);
    ListEntry = v9;
  }
  else
  {
    v22 = 4;
    _disable();
    v5 = 1;
    v6 = (v37 & 0x200) != 0;
    HIDWORD(v28) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v28) = v6;
    ListEntry = v29;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v4 = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(v4 + 1535);
    v11 = (char *)v13;
    if ( v13 )
    {
      PhysicalAddress = (PHYSICAL_ADDRESS)v13[1].Next;
      v14 = v13;
      v23 = 1;
      v26 = v4;
      v10 = BYTE4(v4);
      goto LABEL_21;
    }
    v11 = v33;
    if ( (((unsigned __int64)v33 ^ (unsigned __int64)v34) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v11 = (char *)((unsigned __int64)v34 & 0xFFFFFFFFFFFFF000uLL);
    v23 = 2;
    LOBYTE(v26) = KeGetCurrentIrql();
    LOBYTE(v4) = (_BYTE)v26;
    if ( (unsigned __int8)v26 < 2u )
      __writecr8(2uLL);
    v10 = BYTE4(v26);
    PhysicalAddress = MmGetPhysicalAddress(v11);
  }
  else
  {
    _disable();
    LOBYTE(v4) = ((unsigned __int16)v4 & 0x200) != 0;
    HIDWORD(v26) = 2;
    v10 = 2;
    LOBYTE(v26) = (_BYTE)v4;
    v11 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    PhysicalAddress = *(PHYSICAL_ADDRESS *)(v11 + 16);
  }
  v14 = v27;
LABEL_21:
  *HypercallCachedPages = 0;
  HypercallCachedPages[1] = 0;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                           147LL,
                           (PHYSICAL_ADDRESS)Next.QuadPart,
                           (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart) )
  {
    v16 = 0;
  }
  else
  {
    *a1 = *(_OWORD *)(v11 + 8);
    a1[1] = *(_OWORD *)(v11 + 24);
    a1[2] = *(_OWORD *)(v11 + 40);
    a1[3] = *(_OWORD *)(v11 + 56);
    *a4 = *((_DWORD *)v11 + 1);
    v15 = *(_DWORD *)v11;
    v16 = 1;
    *a3 = v15;
  }
  v17 = 0LL;
  if ( (v22 & 1) != 0 )
  {
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v28 + 1535, ListEntry);
  }
  else if ( (v22 & 2) != 0 )
  {
    if ( v6 < 2u )
      __writecr8(v6);
  }
  else
  {
    v18 = KeGetCurrentPrcb();
    if ( (v5 & 1) != 0 )
    {
      v17 = (__int64)v18->HypercallCachedPages;
    }
    else if ( (v5 & 2) != 0 )
    {
      v17 = (__int64)v18->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v17 + 16) = Next;
    if ( v6 )
      _enable();
  }
  v19 = 0LL;
  if ( (v23 & 1) != 0 )
  {
    v14[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v26 + 1535, v14);
  }
  else if ( (v23 & 2) != 0 )
  {
    if ( (unsigned __int8)v4 < 2u )
      __writecr8((unsigned __int8)v4);
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (v10 & 1) != 0 )
    {
      v19 = (__int64)v20->HypercallCachedPages;
    }
    else if ( (v10 & 2) != 0 )
    {
      v19 = (__int64)v20->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v19 + 16) = PhysicalAddress;
    if ( (_BYTE)v4 )
      _enable();
  }
  return v16;
}
