/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x140270FD8
 * Callers:
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1402708A8 (HvlFlushSingleTb.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpFastFlushSecureRangeList @ 0x1401EDFF0 (HvlpFastFlushSecureRangeList.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401EE0C0 (HvlpFlushSecureAddressSpace.c)
 *     HvlpSlowFlushSecureRangeList @ 0x1401EE57C (HvlpSlowFlushSecureRangeList.c)
 */

int __fastcall HvlpFlushRangeListTbEx(
        __int64 a1,
        unsigned __int16 *a2,
        char a3,
        char a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  unsigned __int64 *v6; // r11
  char v8; // dl
  unsigned int v9; // eax
  char v10; // di
  __int64 v11; // r14
  unsigned int v12; // ebx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned __int64 v16; // rdi
  unsigned __int16 v17; // si
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 *v25; // rdx
  __int64 v26; // r10
  unsigned __int64 v27; // rax
  __int64 HypercallCachedPages; // rax
  __int64 v29; // r10
  __int16 v30; // r15
  unsigned __int8 v31; // r15
  _QWORD *p_Next; // rsi
  __int64 Next; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v35; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v37; // edx
  unsigned int v38; // r9d
  unsigned __int64 v39; // r14
  unsigned __int16 i; // bx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  __int64 v45; // rax
  __int64 v46; // r9
  char *v47; // r8
  signed __int64 v48; // r11
  __int64 v49; // rax
  __int64 v50; // rbx
  char v51; // al
  struct _KPRCB *v52; // rcx
  __int64 v55; // [rsp+28h] [rbp-130h]
  char v56; // [rsp+30h] [rbp-128h]
  unsigned int v57; // [rsp+30h] [rbp-128h]
  char v58; // [rsp+34h] [rbp-124h]
  unsigned int v59; // [rsp+34h] [rbp-124h]
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-120h]
  __int64 v61; // [rsp+40h] [rbp-118h]
  __int64 v62; // [rsp+40h] [rbp-118h]
  int v63; // [rsp+40h] [rbp-118h]
  char v64; // [rsp+48h] [rbp-110h]
  unsigned int v65; // [rsp+4Ch] [rbp-10Ch]
  _SLIST_HEADER *v66; // [rsp+58h] [rbp-100h]
  _SLIST_ENTRY *v67; // [rsp+60h] [rbp-F8h]
  __int64 v68; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+78h] [rbp-E0h]
  __int64 v70; // [rsp+80h] [rbp-D8h]
  __int64 v71; // [rsp+88h] [rbp-D0h]
  _QWORD v72[10]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v73[7]; // [rsp+E0h] [rbp-78h] BYREF
  _BYTE v74[89]; // [rsp+FFh] [rbp-59h] BYREF

  v6 = a6;
  v61 = a1;
  v8 = 4;
  v58 = 4;
  v9 = a3 == 0 ? 4 : 0;
  v10 = a4;
  if ( !a1 )
    v9 |= 2u;
  v11 = v9;
  if ( a5 + (((unsigned int)HvlpFlags >> 9) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 || a4 && a5 + 1 > 0xC )
  {
    LODWORD(v29) = 0;
    if ( (HvlpFlags & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      p_Next = &v35->Next;
      if ( v35 )
      {
        Next = (__int64)v35[1].Next;
        v8 = 1;
        a1 = v61;
        v31 = (unsigned __int8)CurrentPrcb;
        v6 = a6;
        LODWORD(v29) = 0;
        v58 = 1;
        v66 = (_SLIST_HEADER *)CurrentPrcb;
        goto LABEL_42;
      }
      p_Next = v73;
      if ( (((unsigned __int64)v74 ^ (unsigned __int64)v73) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        p_Next = (_QWORD *)((unsigned __int64)v74 & 0xFFFFFFFFFFFFF000uLL);
      v58 = 2;
      LOBYTE(v66) = KeGetCurrentIrql();
      v31 = (unsigned __int8)v66;
      if ( (unsigned __int8)v66 < 2u )
        __writecr8(2uLL);
      PhysicalAddress = MmGetPhysicalAddress(p_Next);
      a1 = v61;
      Next = PhysicalAddress.QuadPart;
      v8 = 2;
      LODWORD(v29) = 0;
      v6 = a6;
    }
    else
    {
      v30 = *(_WORD *)&v74[81];
      _disable();
      v31 = (v30 & 0x200) != 0;
      HIDWORD(v66) = 1;
      LOBYTE(v66) = v31;
      p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
      Next = p_Next[2];
    }
    v35 = v67;
LABEL_42:
    ListEntry = v35;
    *p_Next = a1;
    v63 = v8 & 2;
    p_Next[1] = v11;
    if ( (v8 & 2) != 0 )
    {
      p_Next[2] = 1LL;
      v50 = 19LL;
      p_Next[3] = 0LL;
    }
    else
    {
      if ( (HvlpFlags & 0x8000) == 0 )
        p_Next[1] = v11 | 8;
      p_Next[3] = 0LL;
      if ( a2 )
      {
        p_Next[2] = 0LL;
        v38 = 0;
        v39 = *((_QWORD *)a2 + 1);
        for ( i = 0; ; v39 = *(_QWORD *)&a2[4 * i + 4] )
        {
          while ( v39 )
          {
            _BitScanForward64(&v41, v39);
            v39 &= ~(1LL << v41);
            v42 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v41];
            v43 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v42];
            v44 = byte_1403D3CC1[2 * v42];
            v64 = v44;
            v65 = v43;
            if ( (unsigned int)v43 >= v38 )
            {
              v57 = v43 + 1;
              if ( 8 * (unsigned __int64)(unsigned int)(v43 + 1) > 0xFE0 )
              {
                v37 = -1;
                goto LABEL_60;
              }
              memset(&p_Next[v38 + 4], 0, 8LL * ((unsigned int)v43 - v38 + 1));
              v38 = v57;
              v43 = v65;
              v44 = v64;
            }
            p_Next[v43 + 4] |= 1LL << v44;
          }
          if ( ++i >= (unsigned int)*a2 )
            break;
        }
        if ( v38 == 64 )
          v45 = -1LL;
        else
          v45 = (1LL << v38) - 1;
        p_Next[3] = v45;
        v37 = 8 * v38;
LABEL_60:
        v6 = a6;
      }
      else
      {
        p_Next[2] = 1LL;
        v37 = 0;
      }
      v29 = (unsigned int)(v37 + 32);
      v46 = a5;
      if ( v29 + 8 * (unsigned __int64)a5 <= 0x1000 )
      {
        v47 = (char *)p_Next + v29;
        if ( a5 )
        {
          v48 = (char *)v6 - v47;
          do
          {
            v49 = *(_QWORD *)&v47[v48];
            if ( (HvlpFlags & 0x8000) != 0 )
              v49 &= ~0x800uLL;
            *(_QWORD *)v47 = v49;
            v47 += 8;
            --v46;
          }
          while ( v46 );
        }
        LODWORD(v55) = ((v37 + 7) << 14) & 0x3FE0000 | 0x14;
        HIDWORD(v55) = a5 & 0xFFF;
        v50 = v55;
        v51 = 0;
        goto LABEL_71;
      }
      v50 = ((v37 + 7) << 14) & 0x3FE0000 | 0x13LL;
    }
    v51 = 1;
LABEL_71:
    if ( a4 )
    {
      if ( v51 )
        HvlpFlushSecureAddressSpace();
      else
        HvlpSlowFlushSecureRangeList(Next, (__int64)p_Next, a5, v29);
    }
    HvlpHypercallCodeVa(v50, Next, 0LL);
    HypercallCachedPages = 0LL;
    if ( (v58 & 1) != 0 )
    {
      ListEntry[1].Next = (_SLIST_ENTRY *)Next;
      LODWORD(HypercallCachedPages) = (unsigned int)RtlpInterlockedPushEntrySList(v66 + 1535, ListEntry);
    }
    else if ( v63 )
    {
      if ( v31 < 2u )
      {
        LODWORD(HypercallCachedPages) = v31;
        __writecr8(v31);
      }
    }
    else
    {
      v52 = KeGetCurrentPrcb();
      if ( (BYTE4(v66) & 1) != 0 )
      {
        HypercallCachedPages = (__int64)v52->HypercallCachedPages;
      }
      else if ( (BYTE4(v66) & 2) != 0 )
      {
        HypercallCachedPages = (__int64)v52->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(HypercallCachedPages + 16) = Next;
      if ( v31 )
        _enable();
    }
    return HypercallCachedPages;
  }
  v68 = a1;
  v69 = v9;
  v12 = ((unsigned int)HvlpFlags >> 15) & 1;
  if ( !v12 )
    v69 = v9 | 8LL;
  v71 = 0LL;
  if ( a2 )
  {
    v14 = *a2;
    v15 = 0;
    v16 = *((_QWORD *)a2 + 1);
    v17 = 0;
    v70 = 0LL;
    v59 = v14;
    while ( 1 )
    {
      while ( v16 )
      {
        _BitScanForward64(&v18, v16);
        v16 &= ~(1LL << v18);
        v19 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v17 + (unsigned __int8)v18];
        v20 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v19];
        v21 = byte_1403D3CC1[2 * v19];
        v56 = v21;
        if ( (unsigned int)v20 >= v15 )
        {
          if ( 8 * (unsigned __int64)(unsigned int)(v20 + 1) > 0x50 )
          {
            v13 = -1;
            goto LABEL_24;
          }
          memset(&v72[v15], 0, 8LL * ((unsigned int)v20 - v15 + 1));
          v21 = v56;
          v15 = v20 + 1;
        }
        v72[v20] |= 1LL << v21;
        v14 = v59;
      }
      if ( ++v17 >= v14 )
        break;
      v16 = *(_QWORD *)&a2[4 * v17 + 4];
    }
    if ( v15 == 64 )
      v22 = -1LL;
    else
      v22 = (1LL << v15) - 1;
    v71 = v22;
    v13 = 8 * v15;
LABEL_24:
    v10 = a4;
    v6 = a6;
  }
  else
  {
    v70 = 1LL;
    v13 = 0;
  }
  v23 = v13 + 32 + 8 * a5;
  v24 = (unsigned int)(v13 + 32) >> 3;
  LODWORD(v62) = ((v13 + 7) << 14) & 0x3FE0000 | 0x14;
  if ( a5 )
  {
    v25 = v6;
    v26 = a5;
    do
    {
      v27 = *v25;
      if ( v12 )
        v27 &= ~0x800uLL;
      *(&v68 + v24) = v27;
      ++v25;
      v24 = (unsigned int)(v24 + 1);
      --v26;
    }
    while ( v26 );
  }
  HIDWORD(v62) = a5 & 0xFFF;
  LODWORD(HypercallCachedPages) = HvlpExtendedFastHypercall(v62 | 0x10000, &v68, v23);
  if ( v10 )
    LODWORD(HypercallCachedPages) = HvlpFastFlushSecureRangeList(a6, a5);
  return HypercallCachedPages;
}
