/*
 * XREFs of MiMakeSystemAddressValid @ 0x14005E6FC
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x14000336C (MiUpdateForkMaps.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiWriteDemandZeroPte @ 0x14002B3E8 (MiWriteDemandZeroPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14007B130 (MiWorkingSetInfoCheckPageTable.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiCaptureDeleteHierarchy @ 0x1400F1960 (MiCaptureDeleteHierarchy.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020DEFC (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402242B0 (MiCreatePageTablesForPhysicalRange.c)
 *     MiMakeProtoLeafValid @ 0x140224CAC (MiMakeProtoLeafValid.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     MiWriteLargePde @ 0x1402302C0 (MiWriteLargePde.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  __int64 v6; // r13
  _KPROCESS *Process; // rbp
  __int64 result; // rax
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rbx
  int v13; // eax
  ULONG_PTR v14; // rsi
  unsigned int v15; // edi
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  while ( 1 )
  {
    result = MiIsAddressValid(BugCheckParameter4);
    if ( (_BYTE)result )
      break;
    if ( a2 )
      MiFlushTbList(a2);
    v12 = (volatile signed __int32 *)&Process[1].IdealNode[8];
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v11) = a4;
      MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], v11);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Process[1].IdealNode[8], retaddr);
      }
      else
      {
        _InterlockedAnd(v12, 0xBFFFFFFF);
        _InterlockedDecrement(v12);
      }
      __writecr8(a4);
    }
    v13 = MmAccessFault((v6 << 57) | 0x100000000000002LL, BugCheckParameter4);
    v14 = v13;
    if ( v13 < 0 )
    {
      MmFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v14, (ULONG_PTR)Process, BugCheckParameter4);
    }
    __writecr8(2uLL);
    if ( (a5 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
      }
      else
      {
        v15 = 0;
        if ( _interlockedbittestandset(v12, 0x1Fu) )
          v15 = ExpWaitForSpinLockExclusiveAndAcquire(&Process[1].IdealNode[8]);
        while ( 1 )
        {
          v16 = *v12;
          if ( (*v12 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v16 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v12, v16 | 0x40000000, v16);
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
    }
    else
    {
      _m_prefetchw((const void *)v12);
      v17 = *v12 & 0x7FFFFFFF;
      if ( v17 != _InterlockedCompareExchange(v12, v17 + 1, v17) )
        ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    }
  }
  return result;
}
