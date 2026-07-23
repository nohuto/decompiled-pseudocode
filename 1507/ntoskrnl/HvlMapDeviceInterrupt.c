/*
 * XREFs of HvlMapDeviceInterrupt @ 0x1401E8CA8
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 *     HvlpLogIommuEvent @ 0x1401EFCD0 (HvlpLogIommuEvent.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, __int64 a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v5; // r13
  _OWORD *v6; // r15
  __int64 *v7; // r12
  char v8; // r14
  unsigned __int8 v9; // bp
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v13; // rax
  char *v14; // rsi
  struct _KPRCB *v15; // rdi
  PSLIST_ENTRY v16; // rax
  int v17; // ecx
  unsigned __int16 v18; // di
  unsigned int v19; // r15d
  __int64 *v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  unsigned int v23; // r9d
  unsigned __int16 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  char v28; // al
  __int64 v29; // rax
  __int64 HypercallCachedPages; // rax
  struct _KPRCB *v31; // rcx
  char *v32; // rdi
  struct _KPRCB *v33; // rbx
  PSLIST_ENTRY v34; // rax
  unsigned __int64 v35; // r8
  unsigned int v36; // r9d
  unsigned __int16 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r13
  char v41; // al
  __int64 v42; // rax
  int v43; // edi
  __int64 v44; // rax
  __int16 v45; // bx
  __int64 v46; // rax
  struct _KPRCB *v47; // rcx
  __int64 v48; // rax
  struct _KPRCB *v49; // rcx
  char v51; // [rsp+20h] [rbp-338h]
  unsigned __int8 v52; // [rsp+24h] [rbp-334h]
  _SLIST_ENTRY *QuadPart; // [rsp+28h] [rbp-330h]
  char v54; // [rsp+30h] [rbp-328h]
  char v55; // [rsp+30h] [rbp-328h]
  char v56; // [rsp+34h] [rbp-324h]
  unsigned __int64 v57; // [rsp+40h] [rbp-318h]
  unsigned __int64 v58; // [rsp+40h] [rbp-318h]
  __int64 *v59; // [rsp+48h] [rbp-310h]
  char v60; // [rsp+50h] [rbp-308h]
  _SLIST_HEADER *v61; // [rsp+58h] [rbp-300h]
  _SLIST_ENTRY *v62; // [rsp+60h] [rbp-2F8h]
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp-2E8h]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+78h] [rbp-2E0h]
  PSLIST_ENTRY v67; // [rsp+90h] [rbp-2C8h]
  _SLIST_HEADER *v68; // [rsp+A0h] [rbp-2B8h]
  _SLIST_ENTRY *v69; // [rsp+A8h] [rbp-2B0h]
  _OWORD v71[2]; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-278h]
  __int64 v73; // [rsp+F0h] [rbp-268h] BYREF
  _QWORD v74[21]; // [rsp+F8h] [rbp-260h] BYREF
  _BYTE v75[7]; // [rsp+1A0h] [rbp-1B8h] BYREF
  _BYTE v76[57]; // [rsp+1D7h] [rbp-181h] BYREF
  _BYTE v77[7]; // [rsp+210h] [rbp-148h] BYREF
  _BYTE v78[129]; // [rsp+28Fh] [rbp-C9h] BYREF
  int v79; // [rsp+350h] [rbp-8h]

  v5 = a5;
  v6 = a3;
  v7 = a4;
  ListEntry = v62;
  v51 = 0;
  v67 = v69;
  while ( 1 )
  {
    if ( (HvlpFlags & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      p_Next = &v13->Next;
      if ( v13 )
      {
        ListEntry = v13;
        Next = (PHYSICAL_ADDRESS)v13[1].Next;
        v8 = 1;
        v60 = 1;
        v9 = (unsigned __int8)CurrentPrcb;
        v61 = (_SLIST_HEADER *)CurrentPrcb;
      }
      else
      {
        p_Next = v77;
        if ( (((unsigned __int64)v77 ^ (unsigned __int64)v78) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          p_Next = (_QWORD *)((unsigned __int64)v78 & 0xFFFFFFFFFFFFF000uLL);
        v8 = 2;
        v60 = 2;
        LOBYTE(v61) = KeGetCurrentIrql();
        v9 = (unsigned __int8)v61;
        if ( (unsigned __int8)v61 < 2u )
          __writecr8(2uLL);
        Next = MmGetPhysicalAddress(p_Next);
      }
    }
    else
    {
      v8 = 4;
      v60 = 4;
      _disable();
      v9 = (v79 & 0x200) != 0;
      HIDWORD(v61) = 1;
      p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
      LOBYTE(v61) = v9;
      Next = (PHYSICAL_ADDRESS)p_Next[2];
    }
    QuadPart = (_SLIST_ENTRY *)Next.QuadPart;
    if ( (HvlpFlags & 0x10) != 0 )
    {
      v15 = KeGetCurrentPrcb();
      v16 = RtlpInterlockedPopEntrySList(&v15->HypercallPageList);
      v14 = (char *)v16;
      if ( v16 )
      {
        v67 = v16;
        v52 = (unsigned __int8)v15;
        v56 = 1;
        v68 = (_SLIST_HEADER *)v15;
        PhysicalAddress = (PHYSICAL_ADDRESS)v16[1].Next;
      }
      else
      {
        v14 = v75;
        if ( (((unsigned __int64)v75 ^ (unsigned __int64)v76) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          v14 = (char *)((unsigned __int64)v76 & 0xFFFFFFFFFFFFF000uLL);
        v56 = 2;
        LOBYTE(v68) = KeGetCurrentIrql();
        v52 = (unsigned __int8)v68;
        if ( (unsigned __int8)v68 < 2u )
          __writecr8(2uLL);
        PhysicalAddress = MmGetPhysicalAddress(v14);
      }
    }
    else
    {
      v56 = 4;
      _disable();
      HIDWORD(v68) = 2;
      v14 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
      v52 = (v79 & 0x200) != 0;
      LOBYTE(v68) = v52;
      PhysicalAddress = *(PHYSICAL_ADDRESS *)(v14 + 16);
    }
    v17 = 0;
    *(_OWORD *)(p_Next + 3) = *v6;
    *(_OWORD *)(p_Next + 5) = v6[1];
    p_Next[7] = *((_QWORD *)v6 + 4);
    if ( v7 )
    {
      v18 = *((_WORD *)v7 + 4);
      if ( v18 == 0xFFFF && *v7 == -1 )
      {
        v19 = 0;
        v59 = 0LL;
        v20 = 0LL;
      }
      else
      {
        v20 = &v73;
        v59 = &v73;
        v73 = 1310721LL;
        v19 = (v60 & 2) != 0 ? 64 : 4032;
        memset(v74, 0, 0xA0uLL);
        v21 = *v7;
        if ( v18 )
          LOWORD(v73) = v18 + 1;
        v74[v18] |= v21;
      }
      p_Next[7] = 0LL;
      if ( !v20 )
      {
        v17 = 0;
        p_Next[6] = 1LL;
LABEL_29:
        v5 = a5;
        goto LABEL_74;
      }
      v22 = v20[1];
      v23 = 0;
      v57 = v22;
      v24 = 0;
      p_Next[6] = 0LL;
      while ( 1 )
      {
        while ( v22 )
        {
          _BitScanForward64(&v25, v22);
          v22 &= ~(1LL << v25);
          v26 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v24 + (unsigned __int8)v25];
          v27 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v26];
          v28 = byte_1403D3CC1[2 * v26];
          v54 = v28;
          if ( (unsigned int)v27 >= v23 )
          {
            if ( 8 * (unsigned __int64)(unsigned int)(v27 + 1) > v19 )
            {
              v20 = v59;
              goto LABEL_44;
            }
            memset(&p_Next[v23 + 8], 0, 8LL * ((unsigned int)v27 - v23 + 1));
            v28 = v54;
            v23 = v27 + 1;
          }
          p_Next[v27 + 8] |= 1LL << v28;
          v20 = v59;
        }
        if ( ++v24 >= (unsigned int)*(unsigned __int16 *)v20 )
          break;
        v22 = v20[v24 + 1];
      }
      if ( v23 == 64 )
        v29 = -1LL;
      else
        v29 = (1LL << v23) - 1;
      p_Next[7] = v29;
      v17 = 8 * v23;
      if ( 8 * v23 != -1 )
        goto LABEL_29;
LABEL_44:
      HypercallCachedPages = 0LL;
      if ( (v8 & 1) != 0 )
      {
        ListEntry[1].Next = QuadPart;
        RtlpInterlockedPushEntrySList(v61 + 1535, ListEntry);
      }
      else if ( (v8 & 2) != 0 )
      {
        if ( v9 < 2u )
          __writecr8(v9);
      }
      else
      {
        v31 = KeGetCurrentPrcb();
        if ( (BYTE4(v61) & 1) != 0 )
        {
          HypercallCachedPages = (__int64)v31->HypercallCachedPages;
        }
        else if ( (BYTE4(v61) & 2) != 0 )
        {
          HypercallCachedPages = (__int64)v31->HypercallCachedPages + 4096;
        }
        *(_QWORD *)(HypercallCachedPages + 16) = QuadPart;
        if ( v9 )
          _enable();
      }
      if ( (HvlpFlags & 0x10) != 0 )
      {
        v33 = KeGetCurrentPrcb();
        v34 = RtlpInterlockedPopEntrySList(&v33->HypercallPageList);
        v32 = (char *)v34;
        if ( v34 )
        {
          ListEntry = v34;
          v8 = 1;
          QuadPart = v34[1].Next;
          v9 = (unsigned __int8)v33;
          v61 = (_SLIST_HEADER *)v33;
          goto LABEL_61;
        }
        v8 = 4;
        _disable();
        v9 = (v79 & 0x200) != 0;
        LOBYTE(v61) = v9;
        v32 = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
      }
      else
      {
        v8 = 4;
        _disable();
        v9 = (v79 & 0x200) != 0;
        LOBYTE(v61) = v9;
        v32 = (char *)KeGetCurrentPrcb()->HypercallCachedPages;
        QuadPart = (_SLIST_ENTRY *)*((_QWORD *)v32 + 2);
      }
      HIDWORD(v61) = 1;
LABEL_61:
      p_Next = v32;
      v35 = v57;
      v36 = 0;
      v37 = 0;
      *(_OWORD *)(v32 + 24) = *a3;
      *(_OWORD *)(v32 + 40) = a3[1];
      *((_QWORD *)v32 + 6) = 0LL;
      *((_QWORD *)v32 + 7) = 0LL;
      while ( 1 )
      {
        while ( v35 )
        {
          _BitScanForward64(&v38, v35);
          v35 &= ~(1LL << v38);
          v58 = v35;
          v39 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v37 + (unsigned __int8)v38];
          v40 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v39];
          v41 = byte_1403D3CC1[2 * v39];
          v55 = v41;
          if ( (unsigned int)v40 >= v36 )
          {
            if ( 8 * (unsigned __int64)(unsigned int)(v40 + 1) > 0xFC0 )
            {
              v17 = -1;
              goto LABEL_29;
            }
            memset(&v32[8 * v36 + 64], 0, 8LL * ((unsigned int)v40 - v36 + 1));
            v41 = v55;
            v36 = v40 + 1;
            v35 = v58;
          }
          *(_QWORD *)&v32[8 * v40 + 64] |= 1LL << v41;
          v20 = v59;
        }
        if ( ++v37 >= (unsigned int)*(unsigned __int16 *)v20 )
          break;
        v35 = v20[v37 + 1];
      }
      if ( v36 == 64 )
        v42 = -1LL;
      else
        v42 = (1LL << v36) - 1;
      *((_QWORD *)v32 + 7) = v42;
      v17 = 8 * v36;
      goto LABEL_29;
    }
LABEL_74:
    v43 = 0;
    *p_Next = HvlPartitionId;
    p_Next[1] = a1;
    v44 = 1LL;
    if ( v51 )
      v44 = 3LL;
    p_Next[2] = v44;
    v45 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
            ((v17 + 7) << 14) & 0x3FE0000 | 0x7CLL,
            QuadPart,
            (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
    if ( v45 )
    {
      v43 = -1073741823;
    }
    else
    {
      *v5 = *(_OWORD *)v14;
      v71[0] = *((_OWORD *)v14 + 1);
      v71[1] = *((_OWORD *)v14 + 2);
      v72 = *((_QWORD *)v14 + 6);
    }
    v46 = 0LL;
    if ( (v8 & 1) != 0 )
    {
      ListEntry[1].Next = QuadPart;
      RtlpInterlockedPushEntrySList(v61 + 1535, ListEntry);
    }
    else if ( (v8 & 2) != 0 )
    {
      if ( v9 < 2u )
        __writecr8(v9);
    }
    else
    {
      v47 = KeGetCurrentPrcb();
      if ( (BYTE4(v61) & 1) != 0 )
      {
        v46 = (__int64)v47->HypercallCachedPages;
      }
      else if ( (BYTE4(v61) & 2) != 0 )
      {
        v46 = (__int64)v47->HypercallCachedPages + 4096;
      }
      *(_QWORD *)(v46 + 16) = QuadPart;
      if ( v9 )
        _enable();
    }
    v48 = 0LL;
    if ( (v56 & 1) != 0 )
    {
      v67[1].Next = (_SLIST_ENTRY *)PhysicalAddress.QuadPart;
      RtlpInterlockedPushEntrySList(v68 + 1535, v67);
    }
    else if ( (v56 & 2) != 0 )
    {
      if ( v52 < 2u )
        __writecr8(v52);
    }
    else
    {
      v49 = KeGetCurrentPrcb();
      if ( (BYTE4(v68) & 1) != 0 )
      {
        v48 = (__int64)v49->HypercallCachedPages;
      }
      else if ( (BYTE4(v68) & 2) != 0 )
      {
        v48 = (__int64)v49->HypercallCachedPages + 4096;
      }
      *(PHYSICAL_ADDRESS *)(v48 + 16) = PhysicalAddress;
      if ( v52 )
        _enable();
    }
    if ( v45 != 11 )
      break;
    v6 = a3;
    v7 = a4;
    v5 = a5;
    if ( (int)HvlpDepositPages(0) < 0 )
      v51 = 1;
  }
  if ( v43 >= 0 )
    HvlpLogIommuEvent(v71);
  return (unsigned int)v43;
}
