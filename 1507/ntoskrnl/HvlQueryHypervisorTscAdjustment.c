/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x140148C64
 * Callers:
 *     PopDiagTraceHiberStats @ 0x140566F50 (PopDiagTraceHiberStats.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  _SLIST_HEADER *v1; // rsi
  char v2; // r12
  char v3; // r13
  unsigned __int8 v4; // bp
  _QWORD *p_Next; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v7; // rax
  __int64 *v8; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *v11; // r15
  __int64 v12; // rdi
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  char v17; // [rsp+20h] [rbp-108h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-100h]
  PHYSICAL_ADDRESS Next; // [rsp+30h] [rbp-F8h]
  _SLIST_HEADER *v20; // [rsp+40h] [rbp-E8h]
  _SLIST_ENTRY *v21; // [rsp+48h] [rbp-E0h]
  _SLIST_HEADER *v22; // [rsp+60h] [rbp-C8h]
  _SLIST_ENTRY *v23; // [rsp+68h] [rbp-C0h]
  _BYTE v24[7]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v25[9]; // [rsp+87h] [rbp-A1h] BYREF
  _BYTE v26[7]; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v27[49]; // [rsp+BFh] [rbp-69h] BYREF
  int v28; // [rsp+120h] [rbp-8h]

  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  LOWORD(v1) = v28;
  v2 = 4;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v7->Next;
    if ( v7 )
    {
      v4 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v7[1].Next;
      v17 = 1;
      v20 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      p_Next = v24;
      if ( (((unsigned __int64)v24 ^ (unsigned __int64)v25) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFF000uLL);
      v17 = 2;
      LOBYTE(v20) = KeGetCurrentIrql();
      v4 = (unsigned __int8)v20;
      if ( (unsigned __int8)v20 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(p_Next);
      v7 = v21;
    }
    v3 = BYTE4(v20);
    ListEntry = v7;
  }
  else
  {
    v17 = 4;
    _disable();
    v3 = 1;
    v4 = (v28 & 0x200) != 0;
    HIDWORD(v20) = 1;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v20) = v4;
    ListEntry = v21;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  if ( (HvlpFlags & 0x10) == 0 )
  {
    _disable();
    LOBYTE(v1) = ((unsigned __int16)v1 & 0x200) != 0;
    HIDWORD(v22) = 2;
    LOBYTE(v22) = (_BYTE)v1;
    v8 = (__int64 *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
    PhysicalAddress.QuadPart = v8[2];
LABEL_22:
    v11 = v23;
    goto LABEL_23;
  }
  v1 = (_SLIST_HEADER *)KeGetCurrentPrcb();
  v10 = RtlpInterlockedPopEntrySList(v1 + 1535);
  v8 = (__int64 *)v10;
  if ( !v10 )
  {
    v8 = (__int64 *)v26;
    if ( (((unsigned __int64)v26 ^ (unsigned __int64)v27) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v8 = (__int64 *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFF000uLL);
    v2 = 2;
    LOBYTE(v22) = KeGetCurrentIrql();
    LOBYTE(v1) = (_BYTE)v22;
    if ( (unsigned __int8)v22 < 2u )
      __writecr8(2uLL);
    PhysicalAddress = MmGetPhysicalAddress(v8);
    goto LABEL_22;
  }
  PhysicalAddress = (PHYSICAL_ADDRESS)v10[1].Next;
  v2 = 1;
  v11 = v10;
  v22 = v1;
LABEL_23:
  *(_DWORD *)p_Next = 9;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                           123LL,
                           (PHYSICAL_ADDRESS)Next.QuadPart,
                           (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart) )
    v12 = 0LL;
  else
    v12 = *v8;
  HypercallCachedPages = 0LL;
  if ( (v17 & 1) != 0 )
  {
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v20 + 1535, ListEntry);
  }
  else if ( (v17 & 2) != 0 )
  {
    if ( v4 < 2u )
      __writecr8(v4);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    if ( (v3 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages;
    }
    else if ( (v3 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v14->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( v4 )
      _enable();
  }
  v15 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    v11[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v22 + 1535, v11);
  }
  else if ( (v2 & 2) != 0 )
  {
    if ( (unsigned __int8)v1 < 2u )
      __writecr8((unsigned __int8)v1);
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (BYTE4(v22) & 1) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages;
    }
    else if ( (BYTE4(v22) & 2) != 0 )
    {
      v15 = (__int64)v16->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v15 + 16) = PhysicalAddress;
    if ( (_BYTE)v1 )
      _enable();
  }
  return v12;
}
