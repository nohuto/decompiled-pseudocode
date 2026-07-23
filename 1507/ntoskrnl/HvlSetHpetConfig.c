/*
 * XREFs of HvlSetHpetConfig @ 0x1401E9F98
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  _SLIST_HEADER *v5; // rbp
  char v7; // r15
  char v8; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *HypercallCachedPages; // rbx
  PHYSICAL_ADDRESS Next; // r14
  PSLIST_ENTRY v12; // rax
  __int16 v13; // ax
  __int64 v14; // rcx
  __int16 v15; // bx
  int v16; // ebx
  struct _KPRCB *v17; // rax
  unsigned __int8 v18; // si
  _QWORD *p_Next; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // r13
  struct _KPRCB *v21; // rbx
  PSLIST_ENTRY v22; // rax
  char v23; // r12
  char *v24; // rbx
  PHYSICAL_ADDRESS v25; // r14
  PSLIST_ENTRY v26; // rax
  _SLIST_ENTRY *v27; // r15
  __int128 v28; // xmm0
  __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  char v36; // [rsp+24h] [rbp-114h]
  char v37; // [rsp+28h] [rbp-110h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-108h]
  _SLIST_HEADER *v39; // [rsp+40h] [rbp-F8h]
  _SLIST_ENTRY *v40; // [rsp+48h] [rbp-F0h]
  _SLIST_HEADER *v41; // [rsp+60h] [rbp-D8h]
  _SLIST_ENTRY *v42; // [rsp+68h] [rbp-D0h]
  _BYTE v44[7]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v45[9]; // [rsp+8Fh] [rbp-A9h] BYREF
  _BYTE v46[7]; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v47[24]; // [rsp+AFh] [rbp-89h] BYREF
  _BYTE v48[113]; // [rsp+C7h] [rbp-71h] BYREF

  LOWORD(v5) = *(_WORD *)&v48[105];
  ListEntry = v40;
  v37 = 4;
  while ( 1 )
  {
    if ( (HvlpFlags & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      HypercallCachedPages = v12;
      if ( v12 )
      {
        Next = (PHYSICAL_ADDRESS)v12[1].Next;
        v7 = 1;
        v39 = (_SLIST_HEADER *)CurrentPrcb;
        ListEntry = v12;
      }
      else
      {
        HypercallCachedPages = v44;
        if ( (((unsigned __int64)v44 ^ (unsigned __int64)v47) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          HypercallCachedPages = (_DWORD *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFF000uLL);
        v7 = 2;
        LOBYTE(v39) = KeGetCurrentIrql();
        LOBYTE(CurrentPrcb) = (_BYTE)v39;
        if ( (unsigned __int8)v39 < 2u )
          __writecr8(2uLL);
        Next = MmGetPhysicalAddress(HypercallCachedPages);
      }
      v8 = BYTE4(v39);
    }
    else
    {
      v7 = 4;
      _disable();
      v8 = 1;
      LOBYTE(CurrentPrcb) = ((unsigned __int16)v5 & 0x200) != 0;
      HIDWORD(v39) = 1;
      LOBYTE(v39) = (_BYTE)CurrentPrcb;
      HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
      Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
    }
    HypercallCachedPages[4] = a2;
    *((_QWORD *)HypercallCachedPages + 3) = a3;
    *((_BYTE *)HypercallCachedPages + 32) = a4;
    *HypercallCachedPages = 6;
    *((_QWORD *)HypercallCachedPages + 1) = a1;
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
            111LL,
            (PHYSICAL_ADDRESS)Next.QuadPart,
            0LL);
    v14 = 0LL;
    v15 = v13;
    if ( (v7 & 1) != 0 )
    {
      ListEntry[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
      RtlpInterlockedPushEntrySList(v39 + 1535, ListEntry);
    }
    else if ( (v7 & 2) != 0 )
    {
      if ( (unsigned __int8)CurrentPrcb < 2u )
        __writecr8((unsigned __int8)CurrentPrcb);
    }
    else
    {
      v17 = KeGetCurrentPrcb();
      if ( (v8 & 1) != 0 )
      {
        v14 = (__int64)v17->HypercallCachedPages;
      }
      else if ( (v8 & 2) != 0 )
      {
        v14 = (__int64)v17->HypercallCachedPages + 4096;
      }
      *(PHYSICAL_ADDRESS *)(v14 + 16) = Next;
      if ( (_BYTE)CurrentPrcb )
        _enable();
    }
    if ( v15 != 11 )
      break;
    v16 = HvlpDepositPages(0);
    if ( v16 < 0 )
      goto LABEL_30;
  }
  if ( v15 )
    return (unsigned int)-1073741823;
  v16 = 0;
LABEL_30:
  if ( v16 >= 0 )
  {
    if ( (HvlpFlags & 0x10) != 0 )
    {
      v21 = KeGetCurrentPrcb();
      v22 = RtlpInterlockedPopEntrySList(&v21->HypercallPageList);
      p_Next = &v22->Next;
      if ( v22 )
      {
        PhysicalAddress = (PHYSICAL_ADDRESS)v22[1].Next;
        v18 = (unsigned __int8)v21;
        v36 = 1;
        v39 = (_SLIST_HEADER *)v21;
        ListEntry = v22;
      }
      else
      {
        p_Next = v44;
        if ( (((unsigned __int64)v44 ^ (unsigned __int64)v45) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          p_Next = (_QWORD *)((unsigned __int64)v45 & 0xFFFFFFFFFFFFF000uLL);
        v36 = 2;
        LOBYTE(v39) = KeGetCurrentIrql();
        v18 = (unsigned __int8)v39;
        if ( (unsigned __int8)v39 < 2u )
          __writecr8(2uLL);
        PhysicalAddress = MmGetPhysicalAddress(p_Next);
      }
    }
    else
    {
      v36 = 4;
      _disable();
      v18 = ((unsigned __int16)v5 & 0x200) != 0;
      HIDWORD(v39) = 1;
      LOBYTE(v39) = v18;
      p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
      PhysicalAddress = (PHYSICAL_ADDRESS)p_Next[2];
    }
    if ( (HvlpFlags & 0x10) != 0 )
    {
      v5 = (_SLIST_HEADER *)KeGetCurrentPrcb();
      v26 = RtlpInterlockedPopEntrySList(v5 + 1535);
      v24 = (char *)v26;
      if ( v26 )
      {
        v25 = (PHYSICAL_ADDRESS)v26[1].Next;
        v27 = v26;
        v41 = v5;
        v23 = BYTE4(v5);
        v37 = 1;
LABEL_50:
        *(_DWORD *)p_Next = 7;
        if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
                                 123LL,
                                 (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                                 (PHYSICAL_ADDRESS)v25.QuadPart) )
        {
          v16 = -1073741823;
        }
        else
        {
          v28 = *(_OWORD *)v24;
          v16 = 0;
          *a5 = v28;
        }
        v29 = 0LL;
        if ( (v36 & 1) != 0 )
        {
          ListEntry[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
          RtlpInterlockedPushEntrySList(v39 + 1535, ListEntry);
        }
        else if ( (v36 & 2) != 0 )
        {
          if ( v18 < 2u )
            __writecr8(v18);
        }
        else
        {
          v30 = KeGetCurrentPrcb();
          if ( (BYTE4(v39) & 1) != 0 )
          {
            v29 = (__int64)v30->HypercallCachedPages;
          }
          else if ( (BYTE4(v39) & 2) != 0 )
          {
            v29 = (__int64)v30->HypercallCachedPages + 4096;
          }
          *(PHYSICAL_ADDRESS *)(v29 + 16) = PhysicalAddress;
          if ( v18 )
            _enable();
        }
        v31 = 0LL;
        if ( (v37 & 1) != 0 )
        {
          v27[1].Next = (_SLIST_ENTRY *)v25.QuadPart;
          RtlpInterlockedPushEntrySList(v41 + 1535, v27);
        }
        else if ( (v37 & 2) != 0 )
        {
          if ( (unsigned __int8)v5 < 2u )
            __writecr8((unsigned __int8)v5);
        }
        else
        {
          v32 = KeGetCurrentPrcb();
          if ( (v23 & 1) != 0 )
          {
            v31 = (__int64)v32->HypercallCachedPages;
          }
          else if ( (v23 & 2) != 0 )
          {
            v31 = (__int64)v32->HypercallCachedPages + 4096;
          }
          *(PHYSICAL_ADDRESS *)(v31 + 16) = v25;
          if ( (_BYTE)v5 )
            _enable();
        }
        return (unsigned int)v16;
      }
      v24 = v46;
      if ( (((unsigned __int64)v46 ^ (unsigned __int64)v48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        v24 = (char *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFF000uLL);
      v37 = 2;
      LOBYTE(v41) = KeGetCurrentIrql();
      LOBYTE(v5) = (_BYTE)v41;
      if ( (unsigned __int8)v41 < 2u )
        __writecr8(2uLL);
      v23 = BYTE4(v41);
      v25 = MmGetPhysicalAddress(v24);
    }
    else
    {
      _disable();
      v23 = 2;
      LOBYTE(v5) = ((unsigned __int16)v5 & 0x200) != 0;
      HIDWORD(v41) = 2;
      LOBYTE(v41) = (_BYTE)v5;
      v24 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
      v25 = *(PHYSICAL_ADDRESS *)(v24 + 16);
    }
    v27 = v42;
    goto LABEL_50;
  }
  return (unsigned int)v16;
}
