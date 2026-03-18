/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x14004E740
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiProbeLockFrame @ 0x14002F730 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiUnlockCodePage @ 0x140083BE0 (MiUnlockCodePage.c)
 *     MiMakeDriverPagesPrivate @ 0x140086098 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400B3968 (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x1400B4854 (MiUnlockPagedAddress.c)
 *     MiLockProtoPage @ 0x1400B8B9C (MiLockProtoPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     MiInitializeImageProtos @ 0x1400FD83C (MiInitializeImageProtos.c)
 *     MiReturnPfnReferenceCount @ 0x1400FDD40 (MiReturnPfnReferenceCount.c)
 *     MiFinishLastForkPageTable @ 0x14010ADFC (MiFinishLastForkPageTable.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiLockDownWorkingSet @ 0x14010C604 (MiLockDownWorkingSet.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140148C04 (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x1401E63E8 (MiJumpStackTarget.c)
 *     MiCaptureProtectionFromProto @ 0x1401F01E0 (MiCaptureProtectionFromProto.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14002448C (MiPfnReferenceCountIsZero.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14004E980 (MiIsPfnFileOnly.c)
 *     MiIsPfnCommitNotCharged @ 0x14004F140 (MiIsPfnCommitNotCharged.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  bool v6; // zf
  __int16 v7; // dx
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // r11
  int v13; // r10d
  unsigned __int16 v14; // r11
  int *v15; // rdi

  v4 = *(unsigned __int16 *)(a1 + 32);
  if ( !(_WORD)v4 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
  v6 = (_WORD)v4 == 1;
  LOWORD(v4) = v4 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v6 && (unsigned int)MiIsPfnFileOnly(a1, v4, a3, a4) )
    goto LABEL_35;
  if ( !(unsigned int)MiIsPfnFileOnly(a1, v4, a3, a4) )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v8 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v7 )
    {
      v10 = 1;
LABEL_14:
      v11 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( (v11 > 0xFFFFF6BFFFFFFF78uLL || v11 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(a1 + 35) &= ~0x20u;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 40);
        if ( (v12 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
        {
          v13 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(a1) )
        {
          v13 = 1;
        }
        else if ( v10 == 1 && (v8 & 0x4000000000000000LL) != 0 )
        {
          v13 = 1;
        }
        v14 = (HIDWORD(v12) >> 8) & 0x3FF;
        if ( v14 == 1023 )
          v15 = MiSystemPartition;
        else
          v15 = *(int **)(qword_140326FF8 + 8LL * v14);
        if ( v13 == 1 )
          MiReturnCommit((__int64)v15, 1uLL);
        if ( v15 == MiSystemPartition )
          MiReturnResidentAvailable(1LL);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 816, 1uLL);
      }
      if ( v10 )
      {
LABEL_35:
        MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
        return 1LL;
      }
      return 0LL;
    }
    if ( v7 == 1 )
    {
      if ( v9 )
      {
LABEL_12:
        v10 = 0;
        goto LABEL_14;
      }
    }
    else if ( v7 != 2 || !v9 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
      return 0LL;
    goto LABEL_12;
  }
  return 0LL;
}
