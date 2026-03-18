/*
 * XREFs of MiSessionCreate @ 0x140535604
 * Callers:
 *     MiMapProcessExecutable @ 0x14046CDE8 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x14046D378 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiMakeZeroedPageTables @ 0x1401022B4 (MiMakeZeroedPageTables.c)
 *     KeEnterCriticalRegionThread @ 0x140133CDC (KeEnterCriticalRegionThread.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x1403E3794 (ExInitializePagedLookasideList.c)
 *     MiDereferenceSession @ 0x14045F498 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140535D20 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x140535D5C (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x140535DE8 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     MmIsSessionLeaderProcess @ 0x140536D98 (MmIsSessionLeaderProcess.c)
 */

__int64 __fastcall MiSessionCreate(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  _KPROCESS *v4; // rbp
  __int64 result; // rax
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD *PteAddress; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 DemandZeroPte; // r9
  __int64 v18; // rcx
  int v19; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T Size; // rbx
  struct _PAGED_LOOKASIDE_LIST *v22; // rsi
  __int64 v23; // rbp

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = CurrentThread->Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( !(unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
  {
    if ( qword_1403268E8 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403268F0, 0LL, 0);
        v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403268F0, 0LL);
        v8 = v6;
        if ( v7 )
          ExfAcquirePushLockExclusiveEx(&qword_1403268F0, v6, (ULONG_PTR)&qword_1403268F0);
        if ( v8 )
          v8[26] |= 1u;
        if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 107) )
        {
          *((_QWORD *)PsGetCurrentServerSiloGlobals() + 107) = v4;
          ObfReferenceObject(v4);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403268F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403268F0);
        KeAbPostRelease((ULONG_PTR)&qword_1403268F0);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      if ( !(unsigned int)MmIsSessionLeaderProcess(v4) )
        return 3221225500LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403268F0, 0LL, 0);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403268F0, 0LL);
      v10 = v9;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&qword_1403268F0, v9, (ULONG_PTR)&qword_1403268F0);
      if ( v10 )
        v10[26] |= 1u;
      if ( qword_1403268E8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403268F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403268F0);
        KeAbPostRelease((ULONG_PTR)&qword_1403268F0);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( (_KPROCESS *)qword_1403268E8 != v4 )
          return 3221225500LL;
      }
      else
      {
        qword_1403268E8 = (__int64)v4;
        qword_1403268B0 = qword_140326918 + 20480;
        qword_1403268A8 = qword_140326918 + 28672;
        qword_1403268D0 = qword_140326918 + 4222976;
        qword_140327EA8 = qword_140326918 + 7848;
        qword_1403268F8 = qword_140326918 + 4485120;
        *((_QWORD *)PsGetServerSiloGlobals(0LL) + 107) = v4;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403268F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403268F0);
        KeAbPostRelease((ULONG_PTR)&qword_1403268F0);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        ObfReferenceObject(v4);
      }
    }
  }
  result = MiSessionCreateInternal(a1);
  if ( (int)result >= 0 )
  {
    v11 = Process[1].ActiveProcessors.Bitmap[2];
    *(_BYTE *)(v11 + 3192) = *(_BYTE *)(v11 + 3192) & 0xF8 | 1;
    *MiGetSharedVm(v11 + 3008) = 0;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v11 + 7952, qword_1403268D0, 0x200000LL, 0LL) )
      goto LABEL_31;
    *(_QWORD *)(v11 + 7832) = qword_1403268B0;
    *(_DWORD *)(v11 + 7824) = 0x10000;
    PteAddress = (_QWORD *)MiGetPteAddress(qword_1403268B0);
    v14 = MiGetPteAddress(v12 + 0x1FFF);
    v15 = qword_1403268B8;
    v16 = v14;
    if ( !qword_1403268B8 )
    {
      v15 = ((v14 - (__int64)PteAddress) >> 3) + 1;
      qword_1403268B8 = v15;
    }
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v15, 0) )
      goto LABEL_31;
    if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)PteAddress, v16, 1, 0xBu) )
    {
      MiReturnCommit((__int64)MiSystemPartition, qword_1403268B8);
LABEL_31:
      MiDereferenceSession();
      return 3221225626LL;
    }
    *(_QWORD *)(v11 + 48) += qword_1403268B8;
    *(_DWORD *)(v11 + 4) |= 8u;
    DemandZeroPte = MiMakeDemandZeroPte(4);
    while ( (unsigned __int64)PteAddress <= v16 )
    {
      *PteAddress = DemandZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
        MiWritePteShadow(v18, DemandZeroPte);
      ++PteAddress;
    }
    *(_DWORD *)(v11 + 4) |= 0x10u;
    if ( !(unsigned int)MiInitializeSystemWorkingSetList(MiSystemPartition, v11 + 3008, 1LL) )
    {
      *(_DWORD *)(v11 + 4) &= ~0x10u;
LABEL_51:
      v19 = -1073741670;
      goto LABEL_53;
    }
    *(_QWORD *)(v11 + 56) = qword_1403268C0;
    *(_QWORD *)(v11 + 64) = qword_1403268C0 + 0x1FFFFFFFFFLL;
    v19 = MiInitializeSessionPool();
    if ( v19 >= 0 )
    {
      if ( !(unsigned int)MiInitializeSpecialPool(33LL) )
        goto LABEL_51;
      PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      Size = 16LL;
      v22 = (struct _PAGED_LOOKASIDE_LIST *)(v11 + 192);
      v23 = 21LL;
      do
      {
        ExInitializePagedLookasideList(v22, 0LL, 0LL, 0x21u, Size, 0x6C6F6F50u, 0x100u);
        Size += 16LL;
        ++v22;
        --v23;
      }
      while ( v23 );
      *(_DWORD *)(v11 + 4) |= 1u;
      if ( !(unsigned int)MiInitializeSystemSpaceMap(v11 + 2880) )
        goto LABEL_51;
      v19 = MiSessionObjectCreate();
      if ( v19 >= 0 )
        return (unsigned int)v19;
    }
LABEL_53:
    MiDereferenceSession();
    return (unsigned int)v19;
  }
  return result;
}
