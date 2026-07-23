/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiUnlockCodePage @ 0x140081D40 (MiUnlockCodePage.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400B17E8 (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x1400B26D4 (MiUnlockPagedAddress.c)
 *     MiLockProtoPage @ 0x1400B6A2C (MiLockProtoPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     MiInitializeImageProtos @ 0x1400FB5BC (MiInitializeImageProtos.c)
 *     MiReturnPfnReferenceCount @ 0x1400FBAC0 (MiReturnPfnReferenceCount.c)
 *     MiFinishLastForkPageTable @ 0x140108B7C (MiFinishLastForkPageTable.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiLockDownWorkingSet @ 0x14010A384 (MiLockDownWorkingSet.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140149174 (MmDbgMarkPfnModifiedWorker.c)
 *     MiJumpStackTarget @ 0x1401E6214 (MiJumpStackTarget.c)
 *     MiCaptureProtectionFromProto @ 0x1401F000C (MiCaptureProtectionFromProto.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
          v15 = *(int **)(qword_140327038 + 8LL * v14);
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
