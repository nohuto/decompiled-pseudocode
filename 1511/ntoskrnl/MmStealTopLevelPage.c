/*
 * XREFs of MmStealTopLevelPage @ 0x1400D95E8
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x14007C224 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401CBC1C (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x1401CBC30 (KeMakeUserDirectoryTableBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmStealTopLevelPage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  unsigned __int16 *v5; // rdi
  KIRQL v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // esi
  char v10; // al
  int *VmPartition; // rax
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned __int64 *v15; // r12
  unsigned __int64 v16; // rbx
  __int64 PteAddress; // rbx
  __int64 v18; // rax
  char v19; // al
  unsigned int v20; // ebx
  int *v21; // rcx
  unsigned __int16 SignalState; // ax
  char v23; // al
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r10
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v29; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 48) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  v5 = &Process[1].IdealNode[12];
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  MiReplacePageTablePage(a1, v7);
  v9 = 0;
  if ( *(int *)(a1 + 64) >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 32);
    v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 16)
                             + 8 * (((unsigned __int64)MiGetPteAddress(*(_QWORD *)(a1 + 8)) >> 3) & 0x1FF));
    v29 = (v14 & 0xFFFFFFFFFLL) << 12;
    v16 = v29 | MI_READ_PTE_LOCK_FREE(v15) & 0xFFFF000000000FFFuLL;
    *v15 = v16;
    if ( (unsigned int)MiPteInShadowRange(v15) )
      MiWritePteShadow(v15, v16);
    if ( *(_DWORD *)(a1 + 68) )
    {
      PteAddress = MiGetPteAddress(Process[2].DeepFreezeStartTime);
      v18 = MI_READ_PTE_LOCK_FREE(PteAddress);
      MI_INTERLOCKED_EXCHANGE_PTE(PteAddress, v29 | v18 & 0xFFFF000000000FFFuLL);
      KeFlushSingleTb(PteAddress << 25 >> 16, 0, 2u);
      Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v14 << 12);
    }
    else
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v14 << 12);
    }
    v19 = BYTE3(Process[2].DirectoryTableBase);
    v20 = 7;
    if ( (v19 & 0x10) != 0 )
    {
      v21 = MiSystemPartition;
      BYTE3(Process[2].DirectoryTableBase) = v19 & 0xEF;
      if ( (Process[2].DirectoryTableBase & 7) == 0 )
      {
        SignalState = Process[2].Header.SignalState;
        if ( SignalState != 1023 )
          v21 = *(int **)(qword_1402FEC28 + 8LL * SignalState);
      }
      MiAgeWorkingSet((__int64)&Process[1].IdealNode[12], v6, 1, *(unsigned __int16 *)(*((_QWORD *)v21 + 702) + 2358LL));
    }
    v23 = BYTE3(Process[2].DirectoryTableBase);
    if ( (v23 & 0x20) != 0 )
    {
      v24 = *(_QWORD *)&Process[1].Spare2[47];
      BYTE3(Process[2].DirectoryTableBase) = v23 & 0xDF;
      while ( 1 )
      {
        v27 = *(_QWORD *)&Process[1].Spare2[31];
        if ( v27 <= v24 )
          break;
        v25 = v27 - v24;
        if ( v20 )
        {
          v26 = v25;
          v25 = *(_QWORD *)&v5[4 * v20 + 16];
          if ( v25 > v26 )
            v25 = v26;
        }
        if ( v25 )
        {
          MiTrimWorkingSet(v25, (ULONG_PTR)&Process[1].IdealNode[12], v6, v20, 0);
          if ( !v20 )
            break;
        }
        --v20;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&Process[1].IdealNode[12], retaddr);
    else
      *(_DWORD *)v5 = 0;
    v9 = 1;
  }
  else
  {
    v10 = BYTE3(Process[2].DirectoryTableBase);
    if ( (v10 & 0x10) != 0 )
    {
      BYTE3(Process[2].DirectoryTableBase) = v10 & 0xEF;
      VmPartition = MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
      MiAgeWorkingSet(
        (__int64)&Process[1].IdealNode[12],
        v6,
        1,
        *(unsigned __int16 *)(*((_QWORD *)VmPartition + 702) + 2358LL));
    }
    v12 = BYTE3(Process[2].DirectoryTableBase);
    if ( (v12 & 0x20) != 0 )
    {
      v13 = *(_QWORD *)&Process[1].Spare2[47];
      LOBYTE(v8) = v6;
      BYTE3(Process[2].DirectoryTableBase) = v12 & 0xDF;
      MiReduceWs(&Process[1].IdealNode[12], v8, v13);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  }
  __writecr8(v6);
  return v9;
}
