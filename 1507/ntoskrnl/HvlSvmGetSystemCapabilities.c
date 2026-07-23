/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x1401EB3A0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     HvlpGetRegister128 @ 0x1401F0338 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x1402683F0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140268454 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HvlSvmGetSystemCapabilities(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  int v7; // eax
  char v8; // r15
  _SLIST_HEADER *v9; // rbp
  unsigned __int8 v10; // r14
  _QWORD *p_Next; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  PSLIST_ENTRY v13; // rax
  char *v14; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // r12
  PSLIST_ENTRY v16; // rax
  _SLIST_ENTRY *v17; // r13
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v19; // rcx
  struct _KPRCB *v20; // rcx
  char v21; // [rsp+20h] [rbp-148h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-140h]
  PHYSICAL_ADDRESS Next; // [rsp+30h] [rbp-138h]
  _SLIST_HEADER *v24; // [rsp+40h] [rbp-128h]
  _SLIST_ENTRY *v25; // [rsp+48h] [rbp-120h]
  _SLIST_HEADER *v26; // [rsp+60h] [rbp-108h]
  _SLIST_ENTRY *v27; // [rsp+68h] [rbp-100h]
  _DWORD v28[4]; // [rsp+78h] [rbp-F0h] BYREF
  _DWORD v29[4]; // [rsp+88h] [rbp-E0h] BYREF
  unsigned int v30[4]; // [rsp+98h] [rbp-D0h] BYREF
  char v31[16]; // [rsp+A8h] [rbp-C0h] BYREF
  _BYTE v32[7]; // [rsp+B8h] [rbp-B0h] BYREF
  _BYTE v33[9]; // [rsp+BFh] [rbp-A9h] BYREF
  _BYTE v34[7]; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE v35[49]; // [rsp+F7h] [rbp-71h] BYREF
  int v36; // [rsp+160h] [rbp-8h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = (unsigned int)HvlpRootFlags;
  if ( (HvlpRootFlags & 1) == 0 )
    return result;
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 0x80u) == 0 )
    return result;
  result = HviGetHypervisorFeatures(v29);
  if ( (v29[3] & 0x10000) == 0 )
    return result;
  result = HviGetHypervisorVendorAndMaxFunction(v30, v3, v4, v5);
  if ( v30[0] < 0x40000008 )
    return result;
  result = HvlpGetRegister128(517LL, v28);
  v6 = v28[0];
  if ( (v28[0] & 1) == 0 )
    return result;
  v7 = v28[1];
  v8 = 4;
  *(_DWORD *)a1 |= 1u;
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 12) = v28[2];
  *(_DWORD *)(a1 + 8) = v6 >> 11;
  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 4) == 0 )
    return result;
  HviGetHardwareFeatures(v31);
  if ( v31[0] >= 0 )
    *(_DWORD *)a1 |= 2u;
  LOWORD(v9) = v36;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v13->Next;
    if ( v13 )
    {
      ListEntry = v13;
      v10 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
      v21 = 1;
      v26 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      p_Next = v32;
      if ( (((unsigned __int64)v32 ^ (unsigned __int64)v33) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFF000uLL);
      v21 = 2;
      LOBYTE(v26) = KeGetCurrentIrql();
      v10 = (unsigned __int8)v26;
      if ( (unsigned __int8)v26 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(p_Next);
      ListEntry = v27;
    }
  }
  else
  {
    v21 = 4;
    _disable();
    v10 = (v36 & 0x200) != 0;
    HIDWORD(v26) = 1;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v26) = v10;
    ListEntry = v27;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  if ( (HvlpFlags & 0x10) == 0 )
  {
    _disable();
    LOBYTE(v9) = ((unsigned __int16)v9 & 0x200) != 0;
    HIDWORD(v24) = 2;
    LOBYTE(v24) = (_BYTE)v9;
    v14 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    PhysicalAddress = *(PHYSICAL_ADDRESS *)(v14 + 16);
LABEL_27:
    v17 = v25;
    goto LABEL_28;
  }
  v9 = (_SLIST_HEADER *)KeGetCurrentPrcb();
  v16 = RtlpInterlockedPopEntrySList(v9 + 1535);
  v14 = (char *)v16;
  if ( !v16 )
  {
    v14 = v34;
    if ( (((unsigned __int64)v34 ^ (unsigned __int64)v35) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v14 = (char *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFF000uLL);
    v8 = 2;
    LOBYTE(v24) = KeGetCurrentIrql();
    LOBYTE(v9) = (_BYTE)v24;
    if ( (unsigned __int8)v24 < 2u )
      __writecr8(2uLL);
    PhysicalAddress = MmGetPhysicalAddress(v14);
    goto LABEL_27;
  }
  PhysicalAddress = (PHYSICAL_ADDRESS)v16[1].Next;
  v8 = 1;
  v17 = v16;
  v24 = v9;
LABEL_28:
  *p_Next = 0LL;
  *(_DWORD *)p_Next = 11;
  if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                            123LL,
                            (PHYSICAL_ADDRESS)Next.QuadPart,
                            (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart) )
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)v14;
    *(_DWORD *)(a1 + 20) = *((_DWORD *)v14 + 1);
  }
  HypercallCachedPages = 0LL;
  if ( (v21 & 1) != 0 )
  {
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v26 + 1535, ListEntry);
  }
  else if ( (v21 & 2) != 0 )
  {
    if ( v10 < 2u )
      __writecr8(v10);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    if ( (BYTE4(v26) & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v19->HypercallCachedPages;
    }
    else if ( (BYTE4(v26) & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v19->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( v10 )
      _enable();
  }
  result = 0LL;
  if ( (v8 & 1) != 0 )
  {
    v17[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    return (__int64)RtlpInterlockedPushEntrySList(v24 + 1535, v17);
  }
  else if ( (v8 & 2) != 0 )
  {
    if ( (unsigned __int8)v9 < 2u )
    {
      result = (unsigned __int8)v9;
      __writecr8((unsigned __int8)v9);
    }
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (BYTE4(v24) & 1) != 0 )
    {
      result = (__int64)v20->HypercallCachedPages;
    }
    else if ( (BYTE4(v24) & 2) != 0 )
    {
      result = (__int64)v20->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(result + 16) = PhysicalAddress;
    if ( (_BYTE)v9 )
      _enable();
  }
  return result;
}
