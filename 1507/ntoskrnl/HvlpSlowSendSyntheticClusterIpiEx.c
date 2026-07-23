/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x1401EC2B4
 * Callers:
 *     sub_1401EBDAC @ 0x1401EBDAC (sub_1401EBDAC.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(unsigned __int16 *a1, int a2)
{
  __int16 v2; // r14
  char v3; // r15
  char v4; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *HypercallCachedPages; // rbx
  PHYSICAL_ADDRESS Next; // r12
  PSLIST_ENTRY v8; // rax
  _SLIST_ENTRY *v9; // r13
  unsigned __int16 *v10; // rcx
  int v11; // eax
  unsigned int v12; // r9d
  unsigned __int64 v13; // r10
  unsigned __int16 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  PHYSICAL_ADDRESS *v22; // rsi
  struct _KPRCB *v23; // rbx
  PSLIST_ENTRY v24; // rax
  unsigned __int16 *v25; // rdx
  unsigned __int16 v26; // cx
  unsigned int v27; // r9d
  unsigned __int64 i; // r14
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rax
  __int16 v34; // bx
  __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  __int16 v38; // [rsp+20h] [rbp-128h]
  __int16 v39; // [rsp+20h] [rbp-128h]
  unsigned int v40; // [rsp+24h] [rbp-124h]
  char v41; // [rsp+28h] [rbp-120h]
  unsigned int v42; // [rsp+28h] [rbp-120h]
  unsigned int v43; // [rsp+2Ch] [rbp-11Ch]
  char v44; // [rsp+2Ch] [rbp-11Ch]
  _SLIST_HEADER *v46; // [rsp+40h] [rbp-108h]
  _SLIST_ENTRY *v47; // [rsp+48h] [rbp-100h]
  unsigned int v49; // [rsp+5Ch] [rbp-ECh]
  unsigned __int64 v50; // [rsp+60h] [rbp-E8h]
  _BYTE v51[7]; // [rsp+68h] [rbp-E0h] BYREF
  _BYTE v52[89]; // [rsp+BFh] [rbp-89h] BYREF
  int v53; // [rsp+140h] [rbp-8h]

  v2 = v53;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v8;
    if ( v8 )
    {
      Next = (PHYSICAL_ADDRESS)v8[1].Next;
      v46 = (_SLIST_HEADER *)CurrentPrcb;
      v3 = 1;
      v4 = BYTE4(CurrentPrcb);
      v9 = v8;
      goto LABEL_11;
    }
    HypercallCachedPages = v51;
    if ( (((unsigned __int64)v51 ^ (unsigned __int64)v52) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      HypercallCachedPages = (_DWORD *)((unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL);
    v3 = 2;
    LOBYTE(v46) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v46;
    if ( (unsigned __int8)v46 < 2u )
      __writecr8(2uLL);
    v4 = BYTE4(v46);
    Next = MmGetPhysicalAddress(HypercallCachedPages);
  }
  else
  {
    v3 = 4;
    _disable();
    v4 = 1;
    LOBYTE(CurrentPrcb) = (v53 & 0x200) != 0;
    HIDWORD(v46) = 1;
    LOBYTE(v46) = (_BYTE)CurrentPrcb;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 4);
  }
  v9 = v47;
LABEL_11:
  *((_QWORD *)HypercallCachedPages + 2) = 0LL;
  v10 = a1;
  if ( !a1 )
  {
    *((_QWORD *)HypercallCachedPages + 1) = 1LL;
    v11 = 0;
    goto LABEL_55;
  }
  *((_QWORD *)HypercallCachedPages + 1) = 0LL;
  v12 = 0;
  v13 = *((_QWORD *)a1 + 1);
  v14 = 0;
  v38 = 0;
  while ( 1 )
  {
    while ( v13 )
    {
      _BitScanForward64(&v15, v13);
      v13 &= ~(1LL << v15);
      v50 = v13;
      v16 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v14 + (unsigned __int8)v15];
      v17 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v16];
      v18 = byte_1403D3CC1[2 * v16];
      v41 = v18;
      v43 = v17;
      if ( (unsigned int)v17 >= v12 )
      {
        v49 = v17 + 1;
        if ( 8 * (unsigned __int64)(unsigned int)(v17 + 1) > ((v3 & 2) != 0 ? 64 : 4072) )
          goto LABEL_25;
        memset(&HypercallCachedPages[2 * v12 + 6], 0, 8LL * ((unsigned int)v17 - v12 + 1));
        v12 = v49;
        v14 = v38;
        v13 = v50;
        v17 = v43;
        v18 = v41;
      }
      *(_QWORD *)&HypercallCachedPages[2 * v17 + 6] |= 1LL << v18;
      v10 = a1;
    }
    v38 = ++v14;
    if ( v14 >= (unsigned int)*v10 )
      break;
    v13 = *(_QWORD *)&v10[4 * v14 + 4];
  }
  if ( v12 == 64 )
    v19 = -1LL;
  else
    v19 = (1LL << v12) - 1;
  *((_QWORD *)HypercallCachedPages + 2) = v19;
  v11 = 8 * v12;
  if ( 8 * v12 != -1 )
    goto LABEL_55;
LABEL_25:
  v20 = 0LL;
  if ( (v3 & 1) != 0 )
  {
    v9[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v46 + 1535, v9);
  }
  else if ( (v3 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v21 = KeGetCurrentPrcb();
    if ( (v4 & 1) != 0 )
    {
      v20 = (__int64)v21->HypercallCachedPages;
    }
    else if ( (v4 & 2) != 0 )
    {
      v20 = (__int64)v21->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v20 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = RtlpInterlockedPopEntrySList(&v23->HypercallPageList);
    v22 = (PHYSICAL_ADDRESS *)v24;
    if ( v24 )
    {
      Next = (PHYSICAL_ADDRESS)v24[1].Next;
      v46 = (_SLIST_HEADER *)v23;
      v3 = 1;
      v4 = BYTE4(v23);
      v9 = v24;
      LOBYTE(CurrentPrcb) = (_BYTE)v23;
      HypercallCachedPages = v24;
      goto LABEL_42;
    }
    v3 = 4;
    _disable();
    v22 = (PHYSICAL_ADDRESS *)KeGetCurrentPrcb()->HypercallCachedPages;
  }
  else
  {
    v3 = 4;
    _disable();
    v22 = (PHYSICAL_ADDRESS *)KeGetCurrentPrcb()->HypercallCachedPages;
    Next = v22[2];
  }
  HypercallCachedPages = v22;
  HIDWORD(v46) = 1;
  LOBYTE(v46) = (v2 & 0x200) != 0;
  LOBYTE(CurrentPrcb) = (_BYTE)v46;
  v4 = 1;
LABEL_42:
  v25 = a1;
  v26 = 0;
  v22[1].QuadPart = 0LL;
  v27 = 0;
  v22[2].QuadPart = 0LL;
  v39 = 0;
  for ( i = *((_QWORD *)a1 + 1); ; i = *(_QWORD *)&v25[4 * v26 + 4] )
  {
    while ( i )
    {
      _BitScanForward64(&v29, i);
      i &= ~(1LL << v29);
      v30 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v26 + (unsigned __int8)v29];
      v31 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v30];
      v32 = byte_1403D3CC1[2 * v30];
      v44 = v32;
      v42 = v31;
      if ( (unsigned int)v31 >= v27 )
      {
        v40 = v31 + 1;
        if ( 8 * (unsigned __int64)(unsigned int)(v31 + 1) > 0xFE8 )
        {
          v11 = -1;
          goto LABEL_55;
        }
        memset(&v22[v27 + 3], 0, 8LL * ((unsigned int)v31 - v27 + 1));
        v27 = v40;
        v31 = v42;
        v32 = v44;
      }
      v22[v31 + 3].QuadPart |= 1LL << v32;
      v26 = v39;
      v25 = a1;
    }
    v39 = ++v26;
    if ( v26 >= (unsigned int)*v25 )
      break;
  }
  if ( v27 == 64 )
    v33 = -1LL;
  else
    v33 = (1LL << v27) - 1;
  v22[2].QuadPart = v33;
  v11 = 8 * v27;
LABEL_55:
  *HypercallCachedPages = a2;
  HypercallCachedPages[1] = 0;
  v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
          ((v11 + 7) << 14) & 0x3FE0000 | 0x15LL,
          (PHYSICAL_ADDRESS)Next.QuadPart,
          0LL);
  v35 = 0LL;
  if ( (v3 & 1) != 0 )
  {
    v9[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    RtlpInterlockedPushEntrySList(v46 + 1535, v9);
  }
  else if ( (v3 & 2) != 0 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
      __writecr8((unsigned __int8)CurrentPrcb);
  }
  else
  {
    v36 = KeGetCurrentPrcb();
    if ( (v4 & 1) != 0 )
    {
      v35 = (__int64)v36->HypercallCachedPages;
    }
    else if ( (v4 & 2) != 0 )
    {
      v35 = (__int64)v36->HypercallCachedPages + 4096;
    }
    *(PHYSICAL_ADDRESS *)(v35 + 16) = Next;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return v34 != 0 ? 0xC0000001 : 0;
}
