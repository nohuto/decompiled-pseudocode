/*
 * XREFs of MmFreeSpecialPool @ 0x1401EBED0
 * Callers:
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiCheckSpecialPoolSlop @ 0x1401EB3A0 (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x1401EB748 (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x1401EEC54 (VerifierFreeTrackedPool.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeLinkedListPte @ 0x1401F256C (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401F281C (MiUpdateLinkedListInPte.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR a1)
{
  __int64 *v2; // rdi
  int v3; // r8d
  unsigned __int64 v4; // rbx
  int v5; // r9d
  unsigned int *v6; // r14
  unsigned __int8 CurrentIrql; // al
  unsigned int v8; // edx
  int v9; // r15d
  unsigned __int8 v10; // cl
  __int64 v11; // r13
  ULONG_PTR v12; // r9
  _BYTE *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned int v15; // ecx
  unsigned int i; // edx
  unsigned int v17; // r12d
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 LinkedListPte; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  PKSPIN_LOCK v26; // r14
  _KPROCESS *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // bl
  unsigned __int16 v31; // ax
  char *AnyMultiplexedVm; // rbx
  __int64 v33; // rax
  __int64 updated; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v38; // [rsp+30h] [rbp+0h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp+8h]
  unsigned __int64 v40; // [rsp+40h] [rbp+10h] BYREF
  __int64 v41; // [rsp+48h] [rbp+18h]
  __int64 v42; // [rsp+50h] [rbp+20h]
  unsigned __int64 v43; // [rsp+58h] [rbp+28h]
  int v44; // [rsp+60h] [rbp+30h] BYREF
  __int16 v45; // [rsp+64h] [rbp+34h]
  __int64 v46; // [rsp+68h] [rbp+38h]
  __int64 v47; // [rsp+70h] [rbp+40h]
  __int64 v48; // [rsp+78h] [rbp+48h]

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v2 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = a1 & 0xFFF;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( (a1 & 0xFFF) != 0 )
  {
    v5 = 1;
    v6 = (unsigned int *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v5 = 0;
    v6 = (unsigned int *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 4080);
  }
  LODWORD(v38) = v5;
  CurrentIrql = KeGetCurrentIrql();
  v8 = *v6;
  if ( (*v6 & 0x8000) != 0 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 2;
  }
  if ( CurrentIrql > v10 )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a1, 0x31uLL);
  SpinLock = &qword_140327800;
  if ( (v8 & 0x2000) != 0 )
  {
    v9 |= 0x20u;
    SpinLock = (PKSPIN_LOCK)qword_140327EE8;
  }
  v11 = *(_WORD *)v6 & 0x1FFF;
  if ( v5 == 1 )
  {
    v12 = (unsigned int)(4096 - v3);
    if ( ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v12 )
      KeBugCheckEx(0xC1u, a1, *(_WORD *)v6 & 0x1FFF, v12, 0x21uLL);
    v13 = v6 + 4;
    if ( (v8 & 0x4000) != 0 )
      v13 = v6 + 6;
    MiCheckSpecialPoolSlop(v13, a1, v6);
    v5 = v38;
  }
  v14 = (unsigned __int8 *)(a1 + v11);
  v15 = (a1 & 0xFFFFF000) - (a1 + v11) + 4096;
  if ( !v5 )
  {
    v15 = (a1 & 0xFFFFF000) - (a1 + v11) + 4080;
    if ( (*v6 & 0x4000) != 0 )
      v15 = (a1 & 0xFFFFF000) - (a1 + v11) + 4072;
  }
  for ( i = 0; i < v15; ++i )
  {
    if ( *v14 != (unsigned __int16)(unsigned __int8)*((_WORD *)v6 + 1) )
      KeBugCheckEx(0xC1u, a1, (ULONG_PTR)v14, *v6, 0x24uLL);
    ++v14;
  }
  if ( (*v6 & 0x6000) == 0x4000 )
    VerifierFreeTrackedPool(a1, v11);
  *(_DWORD *)(v4 + 24) = -1737080031;
  *(_DWORD *)(v4 + 28) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v4 + 32) = v11;
  *(_DWORD *)(v4 + 36) = v9;
  *(_QWORD *)(v4 + 40) = a1;
  *(_QWORD *)(v4 + 64) = KeGetCurrentThread();
  *(_QWORD *)(v4 + 48) = Src;
  v17 = 4096 - ((unsigned __int64)Src & 0xFFF);
  *(_DWORD *)(v4 + 56) = v17;
  if ( v17 )
  {
    if ( v17 > 0x400 )
      v17 = 1024;
    memmove((void *)(v4 + 72), Src, v17);
  }
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 0x20) != 0 )
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, (ULONG_PTR)v2, 1LL, 1, &v40);
    if ( v41 )
      v43 -= v41;
    if ( (v9 & 0x20) == 0 )
      MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, -1LL, 0);
    v33 = MI_READ_PTE_LOCK_FREE(v2);
    updated = MiUpdateLinkedListInPte(v33, 0xFFFFFFFFFLL);
    v38 = updated;
    *v2 = updated;
    if ( (unsigned int)MiPteInShadowRange(v2, updated) )
      MiWritePteShadow(v36, v35);
    v26 = SpinLock;
  }
  else
  {
    v38 = MI_READ_PTE_LOCK_FREE(v2);
    v18 = MI_GET_PFN_FROM_PTE(&v38);
    v19 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFLL;
    _InterlockedDecrement64(&qword_140326558);
    v20 = 48 * v19 - 0x58000000000LL;
    LinkedListPte = MiMakeLinkedListPte(0xFFFFFFFFFLL);
    v38 = LinkedListPte;
    *v2 = LinkedListPte;
    v22 = MiPteInShadowRange(v2, LinkedListPte);
    v25 = 0LL;
    if ( v22 )
      MiWritePteShadow(v24, v23);
    v26 = SpinLock;
    v46 = 20LL;
    v45 = v25;
    v47 = v25;
    v48 = v25;
    v44 = &qword_140327800 != SpinLock ? 2 : 0;
    MiInsertTbFlushEntry((__int64)&v44, v4, 1LL, v25);
    MiFlushTbList((__int64)&v44, v27, v28, v29);
    v30 = MiLockPageInline(v18);
    *(_QWORD *)(v18 + 24) |= 0x4000000000000000uLL;
    if ( (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v18 + 0x58000000000LL) / 48,
        *(_BYTE *)(v18 + 34) & 7,
        *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v31 = *(_WORD *)(v18 + 32);
    if ( v31 != 1 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v18 + 0x58000000000LL) / 48, *(_BYTE *)(v18 + 34) & 7, v31);
    MiDecrementShareCount(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v20);
    MiDecrementShareCount(v20);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v30);
    v43 = 1LL;
    v40 = 1LL;
  }
  if ( _InterlockedExchangeAdd64(&qword_140327938, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_1403277C8);
  MiRemoveSpecialPoolRange(v26, v9, (unsigned __int64)v2);
  if ( v26 != &qword_140327800 )
    _InterlockedDecrement64((volatile signed __int64 *)v26 + 7);
  if ( v40 )
    MiReturnResidentAvailable(v40);
  if ( v43 )
    MiReturnCommit((__int64)MiSystemPartition, v43);
}
