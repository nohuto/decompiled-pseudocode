/*
 * XREFs of HvlSvmGetDeviceCapabilities @ 0x1401EAFC0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall HvlSvmGetDeviceCapabilities(int a1, __int64 a2)
{
  _SLIST_HEADER *v2; // rsi
  char v3; // r15
  unsigned __int8 v4; // bp
  _QWORD *p_Next; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v7; // rax
  char v8; // r12
  char *v9; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v11; // rax
  _SLIST_ENTRY *v12; // r13
  unsigned __int16 v13; // bx
  int v14; // edx
  int v15; // ecx
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v17; // rcx
  __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  char v21; // [rsp+20h] [rbp-E8h]
  char v22; // [rsp+24h] [rbp-E4h]
  PHYSICAL_ADDRESS Next; // [rsp+28h] [rbp-E0h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-D8h]
  _SLIST_HEADER *v26; // [rsp+48h] [rbp-C0h]
  _SLIST_ENTRY *v27; // [rsp+50h] [rbp-B8h]
  _SLIST_HEADER *v28; // [rsp+68h] [rbp-A0h]
  _SLIST_ENTRY *v29; // [rsp+70h] [rbp-98h]
  _BYTE v31[7]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v32[17]; // [rsp+97h] [rbp-71h] BYREF
  _BYTE v33[7]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v34[81]; // [rsp+B7h] [rbp-51h] BYREF

  LOWORD(v2) = *(_WORD *)&v34[73];
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v7->Next;
    if ( v7 )
    {
      ListEntry = v7;
      v4 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v7[1].Next;
      v22 = 1;
      v28 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      p_Next = v31;
      if ( (((unsigned __int64)v31 ^ (unsigned __int64)v32) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFF000uLL);
      v22 = 2;
      LOBYTE(v28) = KeGetCurrentIrql();
      v4 = (unsigned __int8)v28;
      if ( (unsigned __int8)v28 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(p_Next);
      ListEntry = v29;
    }
    v3 = BYTE4(v28);
  }
  else
  {
    v22 = 4;
    _disable();
    v3 = 1;
    v4 = ((unsigned __int16)v2 & 0x200) != 0;
    HIDWORD(v28) = 1;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v28) = v4;
    ListEntry = v29;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v2 = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v11 = RtlpInterlockedPopEntrySList(v2 + 1535);
    v9 = (char *)v11;
    if ( v11 )
    {
      PhysicalAddress = (PHYSICAL_ADDRESS)v11[1].Next;
      v21 = 1;
      v12 = v11;
      v26 = v2;
      v8 = BYTE4(v2);
      goto LABEL_21;
    }
    v9 = v33;
    if ( (((unsigned __int64)v33 ^ (unsigned __int64)v34) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v9 = (char *)((unsigned __int64)v34 & 0xFFFFFFFFFFFFF000uLL);
    v21 = 2;
    LOBYTE(v26) = KeGetCurrentIrql();
    LOBYTE(v2) = (_BYTE)v26;
    if ( (unsigned __int8)v26 < 2u )
      __writecr8(2uLL);
    v8 = BYTE4(v26);
    PhysicalAddress = MmGetPhysicalAddress(v9);
  }
  else
  {
    v21 = 4;
    _disable();
    v8 = 2;
    LOBYTE(v2) = ((unsigned __int16)v2 & 0x200) != 0;
    HIDWORD(v26) = 2;
    LOBYTE(v26) = (_BYTE)v2;
    v9 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    PhysicalAddress = *(PHYSICAL_ADDRESS *)(v9 + 16);
  }
  v12 = v27;
LABEL_21:
  p_Next[1] = 0LL;
  *p_Next = 0LL;
  *((_BYTE *)p_Next + 4) = *((_BYTE *)p_Next + 4) & 0xFC | 1;
  *(_DWORD *)p_Next = a1;
  *((_DWORD *)p_Next + 2) = 0;
  v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
          170LL,
          (PHYSICAL_ADDRESS)Next.QuadPart,
          (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
  if ( !v13 )
  {
    *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ *(_DWORD *)v9) & 1;
    v14 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ *(_DWORD *)v9) & 2;
    *(_DWORD *)a2 = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)*(_DWORD *)v9) & 4;
    *(_DWORD *)a2 = v15;
    *(_DWORD *)a2 = *(_DWORD *)v9 ^ (v15 ^ *(_DWORD *)v9) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 4) = *((_DWORD *)v9 + 1);
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 2);
  }
  HypercallCachedPages = 0LL;
  if ( (v22 & 1) != 0 )
  {
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v28 + 1535, ListEntry);
  }
  else if ( (v22 & 2) != 0 )
  {
    if ( v4 < 2u )
      __writecr8(v4);
  }
  else
  {
    v17 = KeGetCurrentPrcb();
    if ( (v3 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v17->HypercallCachedPages;
    }
    else if ( (v3 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v17->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( v4 )
      _enable();
  }
  v18 = 0LL;
  if ( (v21 & 1) != 0 )
  {
    v12[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v26 + 1535, v12);
  }
  else if ( (v21 & 2) != 0 )
  {
    if ( (unsigned __int8)v2 < 2u )
      __writecr8((unsigned __int8)v2);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (v8 & 1) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages;
    }
    else if ( (v8 & 2) != 0 )
    {
      v18 = (__int64)v19->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v18 + 16) = PhysicalAddress;
    if ( (_BYTE)v2 )
      _enable();
  }
  switch ( v13 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return v13 | 0xC0350000;
}
