/*
 * XREFs of HvlpFlushRangeListTb @ 0x140270BD0
 * Callers:
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 *     HvlFlushSingleTb @ 0x1402708A8 (HvlFlushSingleTb.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     HvlpFastFlushSecureRangeList @ 0x1401EDFF0 (HvlpFastFlushSecureRangeList.c)
 *     HvlpFlushSecureAddressSpace @ 0x1401EE0C0 (HvlpFlushSecureAddressSpace.c)
 *     HvlpSlowFlushSecureRangeList @ 0x1401EE57C (HvlpSlowFlushSecureRangeList.c)
 */

int __fastcall HvlpFlushRangeListTb(__int64 a1, __int64 a2, char a3, char a4, unsigned int a5, unsigned __int64 *a6)
{
  unsigned __int64 *v6; // rdi
  char v7; // r13
  unsigned int v9; // r10d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *i; // r8
  unsigned __int64 v13; // rcx
  _BYTE *v14; // r8
  unsigned int v15; // edx
  _QWORD *v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 HypercallCachedPages; // rax
  __int16 v20; // r14
  char v21; // r12
  unsigned __int8 v22; // r14
  _QWORD *p_Next; // rsi
  __int64 Next; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v26; // rax
  _SLIST_ENTRY *v27; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  char v32; // al
  struct _KPRCB *v33; // rcx
  char v35; // [rsp+20h] [rbp-128h]
  __int64 v36; // [rsp+28h] [rbp-120h]
  __int64 v37; // [rsp+30h] [rbp-118h]
  __int128 v38; // [rsp+38h] [rbp-110h]
  unsigned __int64 v39; // [rsp+48h] [rbp-100h]
  _SLIST_HEADER *v40; // [rsp+58h] [rbp-F0h]
  _SLIST_ENTRY *v41; // [rsp+60h] [rbp-E8h]
  __int128 v42; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-C8h]
  _BYTE v44[88]; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v45[7]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v46[81]; // [rsp+F7h] [rbp-51h] BYREF

  v6 = a6;
  v7 = 4;
  v35 = a4;
  v9 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v9 |= 2u;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      v11 = 0LL;
      for ( i = byte_1403D3CC1; ; i = v14 + 2 )
      {
        if ( (v10 & 1) != 0 )
          v11 |= 1LL << *i;
        v13 = v10 >> 1;
        if ( !v13 )
          break;
        v14 = i + 2;
        if ( (v13 & 1) != 0 )
          v11 |= 1LL << *v14;
        v10 = v13 >> 1;
        if ( !v10 )
          break;
      }
      v10 = v11;
    }
    v39 = v10;
  }
  else
  {
    v9 |= 1u;
    v39 = 0LL;
  }
  *(_QWORD *)&v38 = a1;
  *((_QWORD *)&v38 + 1) = v9;
  if ( a5 <= 0xB && (HvlEnlightenments & 0x80u) != 0 && (!a4 || a5 + 1 <= 0xC) )
  {
    LODWORD(v37) = 3;
    v42 = v38;
    v43 = v39;
    v15 = ((unsigned int)HvlpFlags >> 15) & 1;
    if ( !v15 )
      *((_QWORD *)&v42 + 1) = v9 | 8LL;
    if ( a5 )
    {
      v16 = v44;
      v17 = a5;
      do
      {
        v18 = *(_QWORD *)((char *)v16 + (char *)a6 - v44);
        if ( v15 )
          v18 &= ~0x800uLL;
        *v16++ = v18;
        --v17;
      }
      while ( v17 );
    }
    HIDWORD(v37) = a5 & 0xFFF;
    LODWORD(HypercallCachedPages) = HvlpExtendedFastHypercall(v37 | 0x10000, &v42, 8 * a5 + 24);
    if ( v35 )
      LODWORD(HypercallCachedPages) = HvlpFastFlushSecureRangeList(a6, a5);
    return HypercallCachedPages;
  }
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v26->Next;
    if ( v26 )
    {
      a4 = v35;
      v7 = 1;
      v40 = (_SLIST_HEADER *)CurrentPrcb;
      v27 = v26;
      Next = (__int64)v26[1].Next;
      v21 = BYTE4(v40);
      v22 = (unsigned __int8)v40;
      goto LABEL_39;
    }
    p_Next = v45;
    if ( (((unsigned __int64)v45 ^ (unsigned __int64)v46) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      p_Next = (_QWORD *)((unsigned __int64)v46 & 0xFFFFFFFFFFFFF000uLL);
    v7 = 2;
    LOBYTE(v40) = KeGetCurrentIrql();
    v22 = (unsigned __int8)v40;
    if ( (unsigned __int8)v40 < 2u )
      __writecr8(2uLL);
    PhysicalAddress = MmGetPhysicalAddress(p_Next);
    a4 = v35;
    Next = PhysicalAddress.QuadPart;
    v21 = BYTE4(v40);
  }
  else
  {
    v20 = *(_WORD *)&v46[73];
    _disable();
    v21 = 1;
    v22 = (v20 & 0x200) != 0;
    HIDWORD(v40) = 1;
    LOBYTE(v40) = v22;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = p_Next[2];
  }
  v27 = v41;
LABEL_39:
  if ( a5 > 0x1FD || (v7 & 2) != 0 )
  {
    v31 = 2LL;
    v32 = 1;
    *(_OWORD *)p_Next = v38;
    p_Next[2] = v39;
  }
  else
  {
    LODWORD(v36) = 3;
    *(_OWORD *)p_Next = v38;
    p_Next[2] = v39;
    if ( (HvlpFlags & 0x8000) == 0 )
      p_Next[1] |= 8uLL;
    if ( a5 )
    {
      v29 = a5;
      do
      {
        v30 = *v6;
        if ( (HvlpFlags & 0x8000) != 0 )
          v30 &= ~0x800uLL;
        *(unsigned __int64 *)((char *)v6++ + (char *)p_Next - (char *)a6 + 24) = v30;
        --v29;
      }
      while ( v29 );
    }
    HIDWORD(v36) = a5 & 0xFFF;
    v31 = v36;
    v32 = 0;
  }
  if ( a4 )
  {
    if ( v32 )
      HvlpFlushSecureAddressSpace();
    else
      HvlpSlowFlushSecureRangeList(Next, (__int64)p_Next, a5, 0x18u);
  }
  HvlpHypercallCodeVa(v31, Next, 0LL);
  HypercallCachedPages = 0LL;
  if ( (v7 & 1) != 0 )
  {
    v27[1].Next = (_SLIST_ENTRY *)Next;
    LODWORD(HypercallCachedPages) = (unsigned int)RtlpInterlockedPushEntrySList(v40 + 1535, v27);
  }
  else if ( (v7 & 2) != 0 )
  {
    if ( v22 < 2u )
    {
      LODWORD(HypercallCachedPages) = v22;
      __writecr8(v22);
    }
  }
  else
  {
    v33 = KeGetCurrentPrcb();
    if ( (v21 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)v33->HypercallCachedPages;
    }
    else if ( (v21 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)v33->HypercallCachedPages + 4096;
    }
    *(_QWORD *)(HypercallCachedPages + 16) = Next;
    if ( v22 )
      _enable();
  }
  return HypercallCachedPages;
}
