/*
 * XREFs of MiCopyToUserVa @ 0x1400B55D0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR BugCheckParameter2, __int64 a2, const void *a3, size_t a4)
{
  _KPROCESS *Process; // rdi
  ULONG_PTR v6; // r15
  int v7; // r14d
  KIRQL v8; // al
  unsigned __int8 v9; // si
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  _QWORD *CloneAddress; // rax
  int v18; // ebx
  ULONG_PTR v19; // rax
  __int64 v20; // r9
  _QWORD *v21; // r13
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v26; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR v27; // [rsp+40h] [rbp-48h]
  _KPROCESS *v28; // [rsp+48h] [rbp-40h]
  __int16 v29; // [rsp+90h] [rbp+8h]

  v29 = BugCheckParameter2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v28 = Process;
  v6 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = v6;
  v7 = 0;
LABEL_2:
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
LABEL_3:
  v9 = v8;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v6, 1);
    v26 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v26 & 1) == 0 )
    {
      MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9, v10);
      goto LABEL_2;
    }
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12 - 0x58000000000LL;
    if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0 )
      break;
    LOBYTE(v14) = 0;
    v15 = 0LL;
    v16 = *(_QWORD *)(v13 + 8);
    if ( v16 < 0 )
    {
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, v16 | 0x8000000000000000uLL);
        v15 = CloneAddress;
        if ( CloneAddress )
        {
          if ( MEMORY[0xFFFFF580108042B0] <= CloneAddress[9] )
          {
            v15 = (_QWORD *)v14;
          }
          else if ( !v7 )
          {
            MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9, v14);
            v18 = MiChargeFullProcessCommitment(Process, 1LL);
            if ( v18 < 0 )
              goto LABEL_27;
            v7 = 1;
            v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
            v6 = v27;
            goto LABEL_3;
          }
        }
      }
    }
    v6 = v27;
    if ( (unsigned int)MiCopyOnWriteEx(BugCheckParameter2, v27, -1LL, v9, v14) == 1 )
    {
      v26 = MI_READ_PTE_LOCK_FREE(v6);
      v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
      v13 = 48 * v12 - 0x58000000000LL;
      if ( v15 )
        v7 = 0;
      break;
    }
  }
  v19 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v11);
  v21 = (_QWORD *)v19;
  if ( v19 )
  {
    v27 = (__int64)(v19 << 25) >> 16;
    v23 = ~qword_140381310 & (MiMakeValidKernelPte(v12, 4, v19, v20) | 0x8000000000000042uLL);
    v26 = v23;
    *v21 = v23;
    if ( (unsigned int)MiPteInShadowRange(v21) )
      MiWritePteShadow(v21, v23);
    v22 = v27;
  }
  else
  {
    v22 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000);
  }
  memmove((void *)(v22 + (v29 & 0xFFF)), a3, a4);
  if ( v21 )
    MiReleasePtes((__int64)&qword_1402FF7B0, v21, 1u);
  else
    MiUnmapPageInHyperSpaceWorker(v22, 0x11u);
  MiLockPageAndSetDirty(v13, 1LL);
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9, v24);
  v18 = 0;
LABEL_27:
  if ( v7 )
    MiReturnFullProcessCommitment(Process);
  return (unsigned int)v18;
}
