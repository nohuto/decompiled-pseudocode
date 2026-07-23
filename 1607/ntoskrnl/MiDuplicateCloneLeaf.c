/*
 * XREFs of MiDuplicateCloneLeaf @ 0x14000155C
 * Callers:
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v7; // r11d
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned int v11; // r13d
  char v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  __int64 SharedVm; // rbx
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 TransitionPte; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int8 v22; // di
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+20h] [rbp-48h]
  unsigned __int16 *v25; // [rsp+28h] [rbp-40h]
  char PfnPriority; // [rsp+28h] [rbp-40h]
  _QWORD v27[2]; // [rsp+30h] [rbp-38h] BYREF

  v27[0] = MI_READ_PTE_LOCK_FREE();
  if ( (v27[0] & 1) != 0 )
  {
    v8 = MI_GET_PAGE_FRAME_FROM_PTE(v27);
    v9 = 48 * v8 - 0x58000000000LL;
    LODWORD(v10) = (*(_DWORD *)(v9 + 16) >> 5) & 0x1F;
    v11 = v7;
  }
  else
  {
    v8 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v27);
    v14 = 0xFFFFFA8000000000uLL;
    v9 = 48 * v8 - 0x58000000000LL;
    if ( (*(_BYTE *)(v9 + 34) & 0x20) != 0 )
    {
      v25 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v14) = v12;
      MiUnlockWorkingSetExclusive(v25, v14);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm(v25);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      return 0LL;
    }
    v10 = (v13 >> 5) & 0x1F;
    v11 = 0;
  }
  v17 = 48 * a3 - 0x58000000000LL;
  if ( v11 == v7 )
  {
    v18 = v7;
  }
  else
  {
    MiLockNestedPageAtDpcInline(48 * a3 - 0x58000000000LL);
    v18 = 4LL;
  }
  MiCopyPage(a3, v8, 0LL, v18);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v9);
  v24 = *(unsigned __int8 *)(v9 + 34) >> 6;
  if ( v11 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a3, (unsigned int)v10);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(v27[0], a3);
  }
  v27[0] = TransitionPte;
  *a2 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(a2, TransitionPte) )
    MiWritePteShadow();
  v21 = MiVaToPfn(v20);
  MiInitializePfnForOtherProcess(a3, a1, v21, 16LL);
  *(_QWORD *)(v17 + 16) ^= (*(_DWORD *)(v17 + 16) ^ (32 * (_DWORD)v10)) & 0x3E0;
  v22 = MiLockPageInline(v17);
  if ( *(unsigned __int8 *)(v17 + 34) >> 6 != v24 )
    MiChangePageAttribute(v17, v24, 3LL);
  *(_BYTE *)(v17 + 35) ^= (PfnPriority ^ *(_BYTE *)(v17 + 35)) & 7;
  *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 6;
  MiDecrementShareCount(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v22);
  return 1LL;
}
