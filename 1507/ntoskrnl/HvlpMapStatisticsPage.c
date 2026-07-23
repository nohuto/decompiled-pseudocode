/*
 * XREFs of HvlpMapStatisticsPage @ 0x1401E6A38
 * Callers:
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 *     sub_1401E60EC @ 0x1401E60EC (sub_1401E60EC.c)
 *     HvlpInitializeBootProcessor @ 0x1401E68FC (HvlpInitializeBootProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlpMapStatisticsPage(int a1, _OWORD *a2, _QWORD *a3)
{
  _SLIST_HEADER *v3; // rsi
  char v4; // r13
  unsigned __int8 v5; // bp
  _DWORD *HypercallCachedPages; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v8; // rax
  char v9; // r12
  _QWORD *p_Next; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v12; // rax
  _SLIST_ENTRY *v13; // r15
  __int16 v14; // bx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  __int64 v17; // rax
  struct _KPRCB *v18; // rcx
  char v20; // [rsp+20h] [rbp-F8h]
  char v21; // [rsp+24h] [rbp-F4h]
  PHYSICAL_ADDRESS Next; // [rsp+28h] [rbp-F0h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-E8h]
  _SLIST_HEADER *v25; // [rsp+48h] [rbp-D0h]
  _SLIST_ENTRY *v26; // [rsp+50h] [rbp-C8h]
  _SLIST_HEADER *v27; // [rsp+68h] [rbp-B0h]
  _SLIST_ENTRY *v28; // [rsp+70h] [rbp-A8h]
  _BYTE v31[7]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v32[9]; // [rsp+97h] [rbp-81h] BYREF
  _BYTE v33[7]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v34[25]; // [rsp+B7h] [rbp-61h] BYREF
  int v35; // [rsp+110h] [rbp-8h]

  LOWORD(v3) = v35;
  v21 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v8;
    if ( v8 )
    {
      ListEntry = v8;
      v5 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v8[1].Next;
      v20 = 1;
      v27 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      HypercallCachedPages = v33;
      if ( (((unsigned __int64)v33 ^ (unsigned __int64)v34) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        HypercallCachedPages = (_DWORD *)((unsigned __int64)v34 & 0xFFFFFFFFFFFFF000uLL);
      v20 = 2;
      LOBYTE(v27) = KeGetCurrentIrql();
      v5 = (unsigned __int8)v27;
      if ( (unsigned __int8)v27 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(HypercallCachedPages);
      ListEntry = v28;
    }
    v4 = BYTE4(v27);
  }
  else
  {
    v20 = 4;
    _disable();
    v4 = 1;
    v5 = (v35 & 0x200) != 0;
    HIDWORD(v27) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v27) = v5;
    ListEntry = v28;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v3 = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v12 = RtlpInterlockedPopEntrySList(v3 + 1535);
    p_Next = &v12->Next;
    if ( v12 )
    {
      PhysicalAddress = (PHYSICAL_ADDRESS)v12[1].Next;
      v21 = 1;
      v13 = v12;
      v25 = v3;
      v9 = BYTE4(v3);
      goto LABEL_21;
    }
    p_Next = v31;
    if ( (((unsigned __int64)v31 ^ (unsigned __int64)v32) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFF000uLL);
    v21 = 2;
    LOBYTE(v25) = KeGetCurrentIrql();
    LOBYTE(v3) = (_BYTE)v25;
    if ( (unsigned __int8)v25 < 2u )
      __writecr8(2uLL);
    v9 = BYTE4(v25);
    PhysicalAddress = MmGetPhysicalAddress(p_Next);
  }
  else
  {
    _disable();
    v9 = 2;
    LOBYTE(v3) = ((unsigned __int16)v3 & 0x200) != 0;
    HIDWORD(v25) = 2;
    LOBYTE(v25) = (_BYTE)v3;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    PhysicalAddress = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v13 = v26;
LABEL_21:
  *HypercallCachedPages = a1;
  *(_OWORD *)(HypercallCachedPages + 2) = *a2;
  v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
          108LL,
          (PHYSICAL_ADDRESS)Next.QuadPart,
          (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
  *a3 = *p_Next << 12;
  v15 = 0LL;
  if ( (v20 & 1) != 0 )
  {
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v27 + 1535, ListEntry);
  }
  else if ( (v20 & 2) != 0 )
  {
    if ( v5 < 2u )
      __writecr8(v5);
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (v4 & 1) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages;
    }
    else if ( (v4 & 2) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v15 + 16) = Next;
    if ( v5 )
      _enable();
  }
  v17 = 0LL;
  if ( (v21 & 1) != 0 )
  {
    v13[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v25 + 1535, v13);
  }
  else if ( (v21 & 2) != 0 )
  {
    if ( (unsigned __int8)v3 < 2u )
      __writecr8((unsigned __int8)v3);
  }
  else
  {
    v18 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      v17 = (__int64)v18->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      v17 = (__int64)v18->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v17 + 16) = PhysicalAddress;
    if ( (_BYTE)v3 )
      _enable();
  }
  return v14 != 0 ? 0xC0000001 : 0;
}
