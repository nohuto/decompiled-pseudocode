/*
 * XREFs of MiMakeProtoLeafValid @ 0x140224CAC
 * Callers:
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter4, __int64 a2, unsigned __int8 CurrentIrql)
{
  _KPROCESS *Process; // rdi
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rdi
  signed __int32 i; // edx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _KPROCESS *v14; // [rsp+30h] [rbp-58h]
  int v15; // [rsp+A8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = Process;
  v6 = *(_QWORD *)BugCheckParameter4;
  if ( BugCheckParameter4 + 0x90482413000LL <= 0x7F8 )
    LOBYTE(v6) = MiReadPteShadow(BugCheckParameter4, v6);
  while ( (v6 & 1) == 0 )
  {
    MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], CurrentIrql);
    v7 = (volatile signed __int32 *)&Process[1].IdealNode[8];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7);
    }
    else
    {
      v15 = 0;
      if ( _interlockedbittestandset(v7, 0x1Fu) )
        v15 = ExpWaitForSpinLockExclusiveAndAcquire(v7);
      for ( i = *v7; (*v7 & 0xBFFFFFFF) != 0x80000000; i = *v7 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v7, i | 0x40000000, i);
        v9 = v15 + 1;
        v15 = v9;
        if ( (v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
    }
    MiMakeSystemAddressValid(BugCheckParameter4, 0LL, 0, CurrentIrql, 1);
    v6 = *(_QWORD *)BugCheckParameter4;
    if ( BugCheckParameter4 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(v10, v6)
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          LOBYTE(v6) = v6 | 0x20;
        if ( (v12 & 0x42) != 0 )
          LOBYTE(v6) = v6 | 0x42;
      }
    }
    Process = v14;
  }
  return BugCheckParameter4;
}
