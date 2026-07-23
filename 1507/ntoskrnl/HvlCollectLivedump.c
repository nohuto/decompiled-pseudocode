/*
 * XREFs of HvlCollectLivedump @ 0x1401EEF4C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char v5; // r12
  _SLIST_HEADER *v6; // rsi
  unsigned __int8 v7; // bp
  _QWORD *p_Next; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v10; // rax
  PHYSICAL_ADDRESS Next; // rax
  __int64 *v12; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r15
  PSLIST_ENTRY v14; // rax
  _SLIST_ENTRY *v15; // r13
  __int16 v16; // ax
  int v17; // edi
  __int64 v18; // rax
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v20; // rcx
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  void *v24; // rcx
  unsigned int v25; // ebx
  char v26; // [rsp+20h] [rbp-108h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-100h]
  _SLIST_ENTRY *QuadPart; // [rsp+30h] [rbp-F8h]
  _SLIST_HEADER *v29; // [rsp+40h] [rbp-E8h]
  _SLIST_ENTRY *v30; // [rsp+48h] [rbp-E0h]
  _SLIST_HEADER *v31; // [rsp+60h] [rbp-C8h]
  _SLIST_ENTRY *v32; // [rsp+68h] [rbp-C0h]
  _BYTE v35[7]; // [rsp+88h] [rbp-A0h] BYREF
  _BYTE v36[17]; // [rsp+97h] [rbp-91h] BYREF
  _BYTE v37[7]; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v38[33]; // [rsp+C7h] [rbp-61h] BYREF
  int v39; // [rsp+120h] [rbp-8h]

  if ( (HvlpRootFlags & 2) == 0 || !qword_14034D088 )
    return 3221225659LL;
  v5 = 4;
  LOWORD(v6) = v39;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v10->Next;
    if ( v10 )
    {
      ListEntry = v10;
      v7 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v10[1].Next;
      v26 = 1;
      v31 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      p_Next = v37;
      if ( (((unsigned __int64)v37 ^ (unsigned __int64)v38) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFF000uLL);
      v26 = 2;
      LOBYTE(v31) = KeGetCurrentIrql();
      v7 = (unsigned __int8)v31;
      if ( (unsigned __int8)v31 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(p_Next);
      ListEntry = v32;
    }
    QuadPart = (_SLIST_ENTRY *)Next.QuadPart;
  }
  else
  {
    v26 = 4;
    _disable();
    v7 = (v39 & 0x200) != 0;
    HIDWORD(v31) = 1;
    LOBYTE(v31) = v7;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    ListEntry = v32;
    QuadPart = (_SLIST_ENTRY *)p_Next[2];
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v6 = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v14 = RtlpInterlockedPopEntrySList(v6 + 1535);
    v12 = (__int64 *)v14;
    if ( v14 )
    {
      PhysicalAddress = (PHYSICAL_ADDRESS)v14[1].Next;
      v5 = 1;
      v15 = v14;
      v29 = v6;
      goto LABEL_23;
    }
    v12 = (__int64 *)v35;
    if ( (((unsigned __int64)v35 ^ (unsigned __int64)v36) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v12 = (__int64 *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFF000uLL);
    v5 = 2;
    LOBYTE(v29) = KeGetCurrentIrql();
    LOBYTE(v6) = (_BYTE)v29;
    if ( (unsigned __int8)v29 < 2u )
      __writecr8(2uLL);
    PhysicalAddress = MmGetPhysicalAddress(v12);
  }
  else
  {
    _disable();
    LOBYTE(v6) = ((unsigned __int16)v6 & 0x200) != 0;
    HIDWORD(v29) = 2;
    LOBYTE(v29) = (_BYTE)v6;
    v12 = (__int64 *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096);
    PhysicalAddress.QuadPart = v12[2];
  }
  v15 = v30;
LABEL_23:
  *p_Next = 0LL;
  *(_OWORD *)(p_Next + 1) = *(_OWORD *)a2;
  p_Next[3] = *(_QWORD *)(a2 + 16);
  v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
          142LL,
          QuadPart,
          (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
  if ( !v16 || v16 == 51 )
  {
    v18 = *v12;
    v17 = 0;
    *a3 = v18;
  }
  else
  {
    v17 = -1073741823;
  }
  HypercallCachedPages = 0LL;
  if ( (v26 & 1) != 0 )
  {
    ListEntry[1].Next = QuadPart;
    RtlpInterlockedPushEntrySList(v31 + 1535, ListEntry);
  }
  else if ( (v26 & 2) != 0 )
  {
    if ( v7 < 2u )
      __writecr8(v7);
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (BYTE4(v31) & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v20->HypercallCachedPages;
    }
    else if ( (BYTE4(v31) & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v20->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = QuadPart;
    if ( v7 )
      _enable();
  }
  v21 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v15[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v29 + 1535, v15);
  }
  else if ( (v5 & 2) != 0 )
  {
    if ( (unsigned __int8)v6 < 2u )
      __writecr8((unsigned __int8)v6);
  }
  else
  {
    v22 = KeGetCurrentPrcb();
    if ( (BYTE4(v29) & 1) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages;
    }
    else if ( (BYTE4(v29) & 2) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v21 + 16) = PhysicalAddress;
    if ( (_BYTE)v6 )
      _enable();
  }
  if ( v17 >= 0 )
  {
    v24 = *(void **)(a4 + 32);
    v25 = dword_14034D098 << 12;
    if ( v24 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v25 )
      memmove(v24, qword_14034D088, v25);
    else
      *(_QWORD *)(a4 + 32) = qword_14034D088;
    *(_DWORD *)(a4 + 40) = v25;
    *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
  }
  return (unsigned int)v17;
}
