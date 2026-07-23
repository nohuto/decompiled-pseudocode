/*
 * XREFs of MiInsertLargeUserMapping @ 0x1401F5498
 * Callers:
 *     MiMapUserLargePages @ 0x140662C0C (MiMapUserLargePages.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiInsertLargeUserMapping(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  ULONG_PTR v9; // r14
  _KPROCESS *Process; // r12
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  KIRQL v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v23 = a3;
  v22 = a2;
  v5 = a4;
  v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v22) - 0x58000000000LL;
  v7 = v6 + 48 * MiLargePageSizes[v5];
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  if ( (_DWORD)v5 != 1 )
  {
    v14 = (unsigned int)(1 - v5);
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
  }
  MiMakeSystemAddressValid(v9, 0LL, v23, v12, 1);
  v15 = MI_GET_PFN_FROM_PTE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiLockPageAtDpcInline(v15);
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiIncreaseUsedPtesCount(v15, 1LL);
  v16 = MI_GET_PAGE_FRAME_FROM_PTE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFLL;
  do
  {
    MiLockPageAtDpcInline(v6);
    v17 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 24) = v17 & 0xC000000000000000uLL | 1;
    *(_WORD *)(v6 + 32) = 2;
    v18 = *(_BYTE *)(v6 + 34) & 0xFE;
    *(_QWORD *)(v6 + 8) = v8;
    *(_BYTE *)(v6 + 34) = v18 | 6;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
    *(_QWORD *)(v6 + 40) = v16 | *(_QWORD *)(v6 + 40) & 0xFE7FFFF000000000uLL | 0x40000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 += 8LL;
    v6 += 48LL;
  }
  while ( v6 < v7 );
  *(_QWORD *)v9 = v22;
  if ( MiPteInShadowRange(v9) )
    MiWritePteShadow(v20, v19);
  LOBYTE(v19) = v13;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v19);
}
