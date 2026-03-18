/*
 * XREFs of MiCopyToUserVa @ 0x140014B50
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14042F1E0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x140015578 (MiLockPageAndSetDirty.c)
 *     MiMakeSystemAddressValid @ 0x140015DAC (MiMakeSystemAddressValid.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001DBA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034990 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiLocateCloneAddress @ 0x1400BDB00 (MiLocateCloneAddress.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeFullProcessCommitment @ 0x140430960 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1404BCCE8 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR a1, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // r13
  ULONG_PTR v5; // r15
  int v6; // r14d
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // di
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 CloneAddress; // rax
  int v15; // ebx
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v26; // [rsp+40h] [rbp-48h]
  _KPROCESS *v27; // [rsp+48h] [rbp-40h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v5;
  v6 = 0;
LABEL_2:
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
LABEL_3:
  v9 = v8;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v5, 1);
    v25 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v25 & 1) == 0 )
    {
      MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
      goto LABEL_2;
    }
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v25) >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v10 - 0x58000000000LL;
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0 )
      break;
    v12 = 0LL;
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 < 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, v13 | 0x8000000000000000uLL);
        v12 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(qword_140327F90 + 276840632) <= *(_QWORD *)(CloneAddress + 72) )
          {
            v12 = 0LL;
          }
          else if ( !v6 )
          {
            MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
            v15 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v15 < 0 )
              goto LABEL_26;
            v6 = 1;
            v16 = MiGetSharedVm(&Process[1].IdealNode[12]);
            v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v16);
            *(_DWORD *)(v16 + 4) = 0;
            v5 = v26;
            goto LABEL_3;
          }
        }
      }
    }
    v5 = v26;
    if ( (unsigned int)MiCopyOnWriteEx(a1, 0) == 1 )
    {
      v25 = MI_READ_PTE_LOCK_FREE(v5);
      v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v25);
      v11 = 48 * v10 - 0x58000000000LL;
      if ( v12 )
        v6 = 0;
      break;
    }
  }
  v17 = MiReservePtes(&qword_140327870, 1LL);
  v18 = (_QWORD *)v17;
  if ( v17 )
  {
    v19 = v17 << 25 >> 16;
    v20 = ~qword_1403A9350 & (MiMakeValidKernelPte(v10, 4LL, v17) | 0x8000000000000042uLL);
    v25 = v20;
    *v18 = v20;
    if ( (unsigned int)MiPteInShadowRange(v18, v20) )
      MiWritePteShadow(v22, v21);
  }
  else
  {
    v19 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000LL);
  }
  memmove((void *)(v19 + (a1 & 0xFFF)), a3, a4);
  if ( v18 )
  {
    MiReleasePtes(&qword_140327870, v18, 1LL);
  }
  else
  {
    LOBYTE(v23) = 17;
    MiUnmapPageInHyperSpaceWorker(v19, v23, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v11, 1LL);
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
  v15 = 0;
LABEL_26:
  if ( v6 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v15;
}
