/*
 * XREFs of MiDemoteCombinedPte @ 0x1401F95DC
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140015C78 (MiEmptyWorkingSetHelper.c)
 *     MiTrimThisWsle @ 0x1400164E0 (MiTrimThisWsle.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 *     MiTrimSingleWsle @ 0x1400FEF74 (MiTrimSingleWsle.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110898 (MiDeprioritizeVirtualAddresses.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400BBC00 (MiUpdateWorkingSetPrivateSize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x1401F9D2C (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(ULONG_PTR a1, unsigned __int64 a2, __int64 a3)
{
  __m128i *v7; // rbx
  _KPROCESS *Process; // r14
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  __int16 v12; // cx
  unsigned __int8 v13; // r15
  int *v14; // rax
  int v15; // r10d
  __int64 v16; // rcx
  volatile signed __int32 *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 v25; // rdi
  _QWORD *v26; // rdi
  int v27; // [rsp+30h] [rbp-49h]
  unsigned __int64 v28; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-39h]
  __int64 v30; // [rsp+48h] [rbp-31h]
  unsigned __int64 Wsle; // [rsp+50h] [rbp-29h]
  ULONG_PTR *SharedWorkingSetList; // [rsp+58h] [rbp-21h]
  _BYTE *v33; // [rsp+60h] [rbp-19h]
  _QWORD v34[3]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v35; // [rsp+88h] [rbp+Fh] BYREF
  int v36; // [rsp+90h] [rbp+17h]
  int v37; // [rsp+94h] [rbp+1Bh]

  v28 = MI_READ_PTE_LOCK_FREE(a2);
  if ( *(_QWORD *)(a3 - 16) > 1uLL )
    return 0LL;
  v7 = (__m128i *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v28) - 0x58000000000LL);
  Process = 0LL;
  v9 = (__int64)(a2 << 25) >> 16;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.Bitmap[10] )
      return 0LL;
  }
  Wsle = MiLocateWsle((__int64)(a2 << 25) >> 16, a1, v7->m128i_i64[0]);
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v33 = (_BYTE *)(SharedWorkingSetList[10] + v10 * *((unsigned int *)SharedWorkingSetList + 8));
  v29 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v27 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v11 = MiLockPageInline((__int64)v7);
  v12 = v7[2].m128i_i16[0];
  v13 = v11;
  if ( v12 != 1 && (v12 != 2 || (v7[2].m128i_i8[2] & 8) == 0)
    || (v7[1].m128i_i8[0] & 8) == 0
    || _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 16), 0LL, 1LL) != 1 )
  {
    _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    return 0LL;
  }
  v14 = MiPartitionIdToPointer(((unsigned int)HIDWORD(v7[2].m128i_i64[1]) >> 8) & 0x3FF);
  v16 = v7[1].m128i_i64[0];
  v17 = v14 + 1464;
  if ( (v16 & 8) != 0 )
    v7[1].m128i_i64[0] = v16 & 0xFFFFFFFFFFFFFFF7uLL;
  else
    v17 = (volatile signed __int32 *)&unk_140326E58;
  _InterlockedExchangeAdd(v17 + 96, 0xFFFFFFFF);
  v18 = v7[2].m128i_i64[1];
  v7->m128i_i64[1] = a2;
  v18 &= ~0x200000000000000uLL;
  v19 = v18 & 0xFFFFFFFFFLL;
  v30 = v18 & 0xFFFFFFFFFLL;
  v20 = v18 ^ (v29 ^ v18) & 0xFFFFFFFFFLL;
  v21 = v7[1].m128i_u64[0];
  v7[2].m128i_i64[1] = v20;
  if ( ((v21 >> 5) & 5) == 5 )
    v7[1].m128i_i64[0] = v21 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v21 >> 5) & 0x1E));
  if ( v27 != v15 )
  {
    memset(v34, 0, sizeof(v34));
    MiIdentifyPfn(v7, v34);
    v19 = v30;
  }
  _InterlockedAnd64(&v7[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  if ( (v28 & 0x200) != 0 )
  {
    v28 = v28 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    *(_QWORD *)a2 = v28;
    if ( MiPteInShadowRange(a2) )
      MiWritePteShadow(v23, v22);
  }
  v24 = Wsle;
  v25 = 48 * v19 - 0x58000000000LL;
  if ( Wsle < SharedWorkingSetList[1] )
    MiUnlockPageTableCharges(48 * v19 - 0x58000000000LL, 2u, 0);
  MiLockAndDecrementShareCount(v25, 0);
  v26 = v33;
  if ( (*v33 & 4) != 0 )
    MiUpdateWsleHash(v9, v24, a1, 1u);
  v7->m128i_i64[0] = v24;
  *v26 |= 8uLL;
  MiUpdateWorkingSetPrivateSize(a1, v9, 1LL);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  if ( v27 )
  {
    MiLogCombinedPteDelete(a3);
    v37 = 0;
    v35 = v34;
    v36 = 24;
    EtwTraceKernelEvent((int)&v35, 1, 0x28000001u, 630, 289413890);
  }
  MiFreeCombineBlock(a3 - 48);
  return 1LL;
}
