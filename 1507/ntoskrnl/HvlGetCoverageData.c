/*
 * XREFs of HvlGetCoverageData @ 0x1401E4A7C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400DFCC0 (MmBuildMdlForNonPagedPool.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  char v4; // si
  struct _MDL *v5; // rax
  struct _MDL *v6; // rdi
  __int64 ByteCount; // rax
  char v8; // r13
  char v9; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *HypercallCachedPages; // rbx
  PSLIST_ENTRY v12; // rax
  char v13; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // r14
  PSLIST_ENTRY v15; // rax
  _SLIST_ENTRY *v16; // rbp
  _BYTE *v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  char v25; // [rsp+34h] [rbp-954h]
  bool v26; // [rsp+38h] [rbp-950h]
  PHYSICAL_ADDRESS Next; // [rsp+40h] [rbp-948h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-940h]
  _SLIST_HEADER *v29; // [rsp+58h] [rbp-930h]
  _SLIST_ENTRY *v30; // [rsp+60h] [rbp-928h]
  _SLIST_HEADER *v31; // [rsp+78h] [rbp-910h]
  _SLIST_ENTRY *v32; // [rsp+80h] [rbp-908h]
  unsigned __int64 v33; // [rsp+90h] [rbp-8F8h]
  struct _MDL *Mdl; // [rsp+98h] [rbp-8F0h]
  unsigned __int64 *Src; // [rsp+A0h] [rbp-8E8h]
  _BYTE v36[7]; // [rsp+A8h] [rbp-8E0h] BYREF
  _BYTE v37[73]; // [rsp+EFh] [rbp-899h] BYREF
  _BYTE v38[7]; // [rsp+138h] [rbp-850h] BYREF
  _BYTE v39[1033]; // [rsp+53Fh] [rbp-449h] BYREF
  int v40; // [rsp+980h] [rbp-8h]

  v3 = (__int16)a3;
  v4 = 0;
  v5 = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  Mdl = v5;
  v6 = v5;
  if ( !v5 )
    return v4;
  MmBuildMdlForNonPagedPool(v5);
  Src = (unsigned __int64 *)&v6[1];
  ByteCount = v6->ByteCount;
  v8 = 4;
  LOWORD(v6) = v40;
  v33 = ((unsigned __int64)(v3 & 0xFFF) + 4095 + ByteCount) >> 12;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v12;
    if ( v12 )
    {
      ListEntry = v12;
      Next = (PHYSICAL_ADDRESS)v12[1].Next;
      v25 = 1;
      v31 = (_SLIST_HEADER *)CurrentPrcb;
    }
    else
    {
      HypercallCachedPages = v38;
      if ( (((unsigned __int64)v38 ^ (unsigned __int64)v39) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        HypercallCachedPages = (_DWORD *)((unsigned __int64)v39 & 0xFFFFFFFFFFFFF000uLL);
      v25 = 2;
      LOBYTE(v31) = KeGetCurrentIrql();
      LOBYTE(CurrentPrcb) = (_BYTE)v31;
      if ( (unsigned __int8)v31 < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress(HypercallCachedPages);
      ListEntry = v32;
    }
    v9 = BYTE4(v31);
  }
  else
  {
    v25 = 4;
    _disable();
    v9 = 1;
    LOBYTE(CurrentPrcb) = (v40 & 0x200) != 0;
    HIDWORD(v31) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v31) = (_BYTE)CurrentPrcb;
    ListEntry = v32;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  if ( (HvlpFlags & 0x10) == 0 )
  {
    _disable();
    v13 = 2;
    LOBYTE(v6) = ((unsigned __int16)v6 & 0x200) != 0;
    HIDWORD(v29) = 2;
    LOBYTE(v29) = (_BYTE)v6;
    PhysicalAddress = *(PHYSICAL_ADDRESS *)((char *)KeGetCurrentPrcb()->HypercallCachedPages + 4112);
LABEL_21:
    v16 = v30;
    goto LABEL_22;
  }
  v6 = (struct _MDL *)KeGetCurrentPrcb();
  v15 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&v6[511].StartVa);
  v16 = v15;
  if ( !v15 )
  {
    v17 = v36;
    if ( (((unsigned __int64)v36 ^ (unsigned __int64)v37) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      v17 = (_BYTE *)((unsigned __int64)v37 & 0xFFFFFFFFFFFFF000uLL);
    v8 = 2;
    LOBYTE(v29) = KeGetCurrentIrql();
    LOBYTE(v6) = (_BYTE)v29;
    if ( (unsigned __int8)v29 < 2u )
      __writecr8(2uLL);
    v13 = BYTE4(v29);
    PhysicalAddress = MmGetPhysicalAddress(v17);
    goto LABEL_21;
  }
  PhysicalAddress = (PHYSICAL_ADDRESS)v15[1].Next;
  v8 = 1;
  v29 = (_SLIST_HEADER *)v6;
  v13 = BYTE4(v6);
LABEL_22:
  HypercallCachedPages[1] = v33;
  *HypercallCachedPages = (a1 != 0) + 1;
  memmove(HypercallCachedPages + 2, Src, 8LL * (unsigned int)v33);
  v18 = (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                            147LL,
                            (PHYSICAL_ADDRESS)Next.QuadPart,
                            (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart) == 0;
  v19 = 0LL;
  v26 = v18;
  if ( (v25 & 1) != 0 )
  {
    ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v31 + 1535, ListEntry);
  }
  else if ( (v25 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    if ( (v9 & 1) != 0 )
    {
      v19 = (__int64)v20->HypercallCachedPages;
    }
    else if ( (v9 & 2) != 0 )
    {
      v19 = (__int64)v20->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v19 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  v21 = 0LL;
  if ( (v8 & 1) != 0 )
  {
    v16[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
    RtlpInterlockedPushEntrySList(v29 + 1535, v16);
  }
  else if ( (v8 & 2) != 0 )
  {
    if ( (unsigned __int8)v6 < 2u )
      __writecr8((unsigned __int8)v6);
  }
  else
  {
    v22 = KeGetCurrentPrcb();
    if ( (v13 & 1) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages;
    }
    else if ( (v13 & 2) != 0 )
    {
      v21 = (__int64)v22->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v21 + 16) = PhysicalAddress;
    if ( (_BYTE)v6 )
      _enable();
  }
  IoFreeMdl(Mdl);
  return v26;
}
