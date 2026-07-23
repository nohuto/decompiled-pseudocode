/*
 * XREFs of HvlpLogIommuInitStatus @ 0x1401EFDF0
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1401F030C @ 0x1401F030C (sub_1401F030C.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  struct _KPRCB *v0; // rbp
  char v1; // r12
  unsigned __int8 v2; // si
  _QWORD *p_Next; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v5; // rax
  char v6; // r13
  char *v7; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v9; // rax
  _SLIST_ENTRY *v10; // r15
  __int64 HypercallCachedPages; // rax
  _SLIST_HEADER *p_HypercallPageList; // rcx
  struct _KPRCB *v13; // rcx
  __int64 v14; // rax
  _SLIST_HEADER *v15; // rcx
  struct _KPRCB *v16; // rcx
  char v18; // [rsp+20h] [rbp-1A8h]
  char v19; // [rsp+24h] [rbp-1A4h]
  PSLIST_ENTRY ListEntry; // [rsp+28h] [rbp-1A0h]
  PHYSICAL_ADDRESS Next; // [rsp+30h] [rbp-198h]
  int v22; // [rsp+38h] [rbp-190h] BYREF
  int v23; // [rsp+3Ch] [rbp-18Ch] BYREF
  struct _KPRCB *v24; // [rsp+48h] [rbp-180h]
  _SLIST_ENTRY *v25; // [rsp+50h] [rbp-178h]
  struct _KPRCB *v26; // [rsp+68h] [rbp-160h]
  _SLIST_ENTRY *v27; // [rsp+70h] [rbp-158h]
  _OWORD v28[3]; // [rsp+80h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-118h] BYREF
  int *v30; // [rsp+C0h] [rbp-108h]
  __int64 v31; // [rsp+C8h] [rbp-100h]
  char *v32; // [rsp+D0h] [rbp-F8h]
  __int64 v33; // [rsp+D8h] [rbp-F0h]
  _OWORD *v34; // [rsp+E0h] [rbp-E8h]
  __int64 v35; // [rsp+E8h] [rbp-E0h]
  char *v36; // [rsp+F0h] [rbp-D8h]
  __int64 v37; // [rsp+F8h] [rbp-D0h]
  _OWORD *v38; // [rsp+100h] [rbp-C8h]
  __int64 v39; // [rsp+108h] [rbp-C0h]
  char *v40; // [rsp+110h] [rbp-B8h]
  __int64 v41; // [rsp+118h] [rbp-B0h]
  _BYTE v42[7]; // [rsp+120h] [rbp-A8h] BYREF
  _BYTE v43[9]; // [rsp+127h] [rbp-A1h] BYREF
  _BYTE v44[7]; // [rsp+130h] [rbp-98h] BYREF
  _BYTE v45[49]; // [rsp+15Fh] [rbp-69h] BYREF
  int v46; // [rsp+1C0h] [rbp-8h]

  memset(v28, 0, sizeof(v28));
  LOWORD(v0) = v46;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v5->Next;
    if ( v5 )
    {
      ListEntry = v5;
      v2 = (unsigned __int8)CurrentPrcb;
      Next = (PHYSICAL_ADDRESS)v5[1].Next;
      v18 = 1;
      v24 = CurrentPrcb;
    }
    else
    {
      p_Next = v42;
      if ( (((unsigned __int64)v42 ^ (unsigned __int64)v43) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v43 & 0xFFFFFFFFFFFFF000uLL);
      v18 = 2;
      LOBYTE(v24) = KeGetCurrentIrql();
      v2 = (unsigned __int8)v24;
      if ( (unsigned __int8)v24 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(p_Next);
      ListEntry = v25;
    }
    v1 = BYTE4(v24);
  }
  else
  {
    v18 = 4;
    _disable();
    v1 = 1;
    v2 = (v46 & 0x200) != 0;
    HIDWORD(v24) = 1;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v24) = v2;
    ListEntry = v25;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v0 = KeGetCurrentPrcb();
    v9 = RtlpInterlockedPopEntrySList(&v0->HypercallPageList);
    v7 = (char *)v9;
    if ( v9 )
    {
      PhysicalAddress = (PHYSICAL_ADDRESS)v9[1].Next;
      v10 = v9;
      v19 = 1;
      v26 = v0;
      v6 = BYTE4(v0);
      goto LABEL_21;
    }
    v7 = v44;
    if ( (((unsigned __int64)v44 ^ (unsigned __int64)v45) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v7 = (char *)((unsigned __int64)v45 & 0xFFFFFFFFFFFFF000uLL);
    v19 = 2;
    LOBYTE(v26) = KeGetCurrentIrql();
    LOBYTE(v0) = (_BYTE)v26;
    if ( (unsigned __int8)v26 < 2u )
      __writecr8(2uLL);
    v6 = BYTE4(v26);
    PhysicalAddress = MmGetPhysicalAddress(v7);
  }
  else
  {
    v19 = 4;
    _disable();
    LOBYTE(v0) = ((unsigned __int16)v0 & 0x200) != 0;
    HIDWORD(v26) = 2;
    v6 = 2;
    LOBYTE(v26) = (_BYTE)v0;
    v7 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    PhysicalAddress = *(PHYSICAL_ADDRESS *)(v7 + 16);
  }
  v10 = v27;
LABEL_21:
  *(_DWORD *)p_Next = 5;
  if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                            123LL,
                            (PHYSICAL_ADDRESS)Next.QuadPart,
                            (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart) )
  {
    v28[0] = *(_OWORD *)v7;
    v28[1] = *((_OWORD *)v7 + 1);
    v28[2] = *((_OWORD *)v7 + 2);
  }
  HypercallCachedPages = 0LL;
  if ( (v18 & 1) != 0 )
  {
    p_HypercallPageList = &v24->HypercallPageList;
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(p_HypercallPageList, ListEntry);
  }
  else if ( (v18 & 2) != 0 )
  {
    if ( v2 < 2u )
      __writecr8(v2);
  }
  else
  {
    v13 = KeGetCurrentPrcb();
    if ( (v1 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v13->HypercallCachedPages;
    }
    else if ( (v1 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v13->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16) = Next;
    if ( v2 )
      _enable();
  }
  v14 = 0LL;
  if ( (v19 & 1) != 0 )
  {
    v15 = &v26->HypercallPageList;
    v10[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v15, v10);
  }
  else if ( (v19 & 2) != 0 )
  {
    if ( (unsigned __int8)v0 < 2u )
      __writecr8((unsigned __int8)v0);
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    if ( (v6 & 1) != 0 )
    {
      v14 = (__int64)v16->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      v14 = (__int64)v16->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v14 + 16) = PhysicalAddress;
    if ( (_BYTE)v0 )
      _enable();
  }
  v23 = LOBYTE(v28[0]);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v23;
  v22 = BYTE1(v28[0]);
  v30 = &v22;
  v32 = (char *)v28 + 8;
  v34 = &v28[1];
  v36 = (char *)&v28[1] + 8;
  v38 = &v28[2];
  v40 = (char *)&v28[2] + 8;
  v31 = 4LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 8LL;
  return sub_1401F030C(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
}
