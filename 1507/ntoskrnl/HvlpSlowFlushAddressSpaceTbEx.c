/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x1402718A0
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, unsigned __int16 *a2, char a3)
{
  char v5; // r14
  char v6; // bp
  _SLIST_HEADER *CurrentPrcb; // rdi
  _QWORD *p_Next; // rbx
  PHYSICAL_ADDRESS Next; // rsi
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *v11; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v13; // ecx
  int v14; // r12d
  unsigned int v15; // r14d
  int v16; // eax
  unsigned __int64 v17; // r13
  unsigned int v18; // r9d
  unsigned __int16 i; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rax
  PSLIST_ENTRY result; // rax
  struct _KPRCB *v26; // rcx
  char v27; // [rsp+20h] [rbp-138h]
  unsigned __int16 *v28; // [rsp+28h] [rbp-130h]
  int v29; // [rsp+30h] [rbp-128h]
  unsigned int v30; // [rsp+34h] [rbp-124h]
  unsigned int v31; // [rsp+38h] [rbp-120h]
  char v32; // [rsp+3Ch] [rbp-11Ch]
  _SLIST_HEADER *v33; // [rsp+48h] [rbp-110h]
  _SLIST_ENTRY *v34; // [rsp+50h] [rbp-108h]
  _BYTE v35[7]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v36[153]; // [rsp+BFh] [rbp-99h] BYREF

  v28 = a2;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = (_SLIST_HEADER *)KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(CurrentPrcb + 1535);
    p_Next = &v10->Next;
    if ( v10 )
    {
      Next = (PHYSICAL_ADDRESS)v10[1].Next;
      a2 = v28;
      v5 = 1;
      v33 = CurrentPrcb;
      v11 = v10;
      v6 = BYTE4(CurrentPrcb);
      v27 = 1;
      goto LABEL_11;
    }
    p_Next = v35;
    if ( (((unsigned __int64)v35 ^ (unsigned __int64)v36) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFF000uLL);
    v5 = 2;
    v27 = 2;
    LOBYTE(v33) = KeGetCurrentIrql();
    LOBYTE(CurrentPrcb) = (_BYTE)v33;
    if ( (unsigned __int8)v33 < 2u )
      __writecr8(2uLL);
    PhysicalAddress = MmGetPhysicalAddress(p_Next);
    v6 = BYTE4(v33);
    a2 = v28;
    Next = PhysicalAddress;
  }
  else
  {
    LOWORD(CurrentPrcb) = *(_WORD *)&v36[145];
    v5 = 4;
    v27 = 4;
    _disable();
    v6 = 1;
    LOBYTE(CurrentPrcb) = ((unsigned __int16)CurrentPrcb & 0x200) != 0;
    HIDWORD(v33) = 1;
    LOBYTE(v33) = (_BYTE)CurrentPrcb;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)p_Next[2];
  }
  v11 = v34;
LABEL_11:
  v13 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v13 |= 2u;
  v14 = v5 & 2;
  p_Next[1] = v13;
  *p_Next = a1;
  v29 = v14;
  p_Next[3] = 0LL;
  v15 = v14 != 0 ? 64 : 4064;
  if ( a2 )
  {
    p_Next[2] = 0LL;
    v17 = *((_QWORD *)a2 + 1);
    v18 = 0;
    for ( i = 0; ; v17 = *(_QWORD *)&a2[4 * i + 4] )
    {
      while ( v17 )
      {
        _BitScanForward64(&v20, v17);
        v17 &= ~(1LL << v20);
        v21 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v20];
        v22 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v21];
        v23 = byte_1403D3CC1[2 * v21];
        v32 = v23;
        v30 = v22;
        if ( (unsigned int)v22 >= v18 )
        {
          v31 = v22 + 1;
          if ( 8 * (unsigned __int64)(unsigned int)(v22 + 1) > v15 )
            goto LABEL_27;
          memset(&p_Next[v18 + 4], 0, 8LL * ((unsigned int)v22 - v18 + 1));
          v18 = v31;
          v22 = v30;
          v23 = v32;
        }
        p_Next[v22 + 4] |= 1LL << v23;
        a2 = v28;
      }
      if ( ++i >= (unsigned int)*a2 )
        break;
    }
    if ( v18 == 64 )
      v24 = -1LL;
    else
      v24 = (1LL << v18) - 1;
    p_Next[3] = v24;
    v16 = 8 * v18;
    if ( 8 * v18 == -1 )
    {
LABEL_27:
      p_Next[2] = 1LL;
      v16 = 0;
      p_Next[3] = 0LL;
    }
    v14 = v29;
  }
  else
  {
    p_Next[2] = 1LL;
    v16 = 0;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvlpHypercallCodeVa)(
    ((v16 + 7) << 14) & 0x3FE0000 | 0x13u,
    (PHYSICAL_ADDRESS)Next.QuadPart,
    0LL);
  result = 0LL;
  if ( (v27 & 1) != 0 )
  {
    v11[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    return RtlpInterlockedPushEntrySList(v33 + 1535, v11);
  }
  else if ( v14 )
  {
    if ( (unsigned __int8)CurrentPrcb < 2u )
    {
      result = (PSLIST_ENTRY)(unsigned __int8)CurrentPrcb;
      __writecr8((unsigned __int8)CurrentPrcb);
    }
  }
  else
  {
    v26 = KeGetCurrentPrcb();
    if ( (v6 & 1) != 0 )
    {
      result = (PSLIST_ENTRY)v26->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      result = (PSLIST_ENTRY)((char *)v26->HypercallCachedPages + 4096);
    }
    result[1].Next = (_SLIST_ENTRY *)Next.QuadPart;
    if ( (_BYTE)CurrentPrcb )
      _enable();
  }
  return result;
}
