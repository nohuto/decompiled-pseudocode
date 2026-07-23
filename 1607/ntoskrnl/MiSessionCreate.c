/*
 * XREFs of MiSessionCreate @ 0x140535B44
 * Callers:
 *     MiMapProcessExecutable @ 0x14046BCB8 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 *     KeEnterCriticalRegionThread @ 0x14013424C (KeEnterCriticalRegionThread.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x1403E4DC0 (ExInitializePagedLookasideList.c)
 *     MiDereferenceSession @ 0x14045E368 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140536260 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x14053629C (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x140536328 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     MmIsSessionLeaderProcess @ 0x1405372D8 (MmIsSessionLeaderProcess.c)
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
    if ( qword_140326928 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326930, 0LL, 0);
        v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326930, 0LL);
        v8 = v6;
        if ( v7 )
          ExfAcquirePushLockExclusiveEx(&qword_140326930, v6, (ULONG_PTR)&qword_140326930);
        if ( v8 )
          v8[26] |= 1u;
        if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 107) )
        {
          *((_QWORD *)PsGetCurrentServerSiloGlobals() + 107) = v4;
          ObfReferenceObject(v4);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326930, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326930);
        KeAbPostRelease((ULONG_PTR)&qword_140326930);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      if ( !(unsigned int)MmIsSessionLeaderProcess(v4) )
        return 3221225500LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326930, 0LL, 0);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326930, 0LL);
      v10 = v9;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&qword_140326930, v9, (ULONG_PTR)&qword_140326930);
      if ( v10 )
        v10[26] |= 1u;
      if ( qword_140326928 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326930, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326930);
        KeAbPostRelease((ULONG_PTR)&qword_140326930);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( (_KPROCESS *)qword_140326928 != v4 )
          return 3221225500LL;
      }
      else
      {
        qword_140326928 = (__int64)v4;
        qword_1403268F0 = qword_140326958 + 20480;
        qword_1403268E8 = qword_140326958 + 28672;
        qword_140326910 = qword_140326958 + 4222976;
        qword_140327EE8 = qword_140326958 + 7848;
        qword_140326938 = qword_140326958 + 4485120;
        *((_QWORD *)PsGetServerSiloGlobals(0LL) + 107) = v4;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326930, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326930);
        KeAbPostRelease((ULONG_PTR)&qword_140326930);
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
    if ( !(unsigned int)MiInitializeDynamicBitmap(v11 + 7952, qword_140326910, 0x200000LL, 0LL) )
      goto LABEL_31;
    *(_QWORD *)(v11 + 7832) = qword_1403268F0;
    *(_DWORD *)(v11 + 7824) = 0x10000;
    PteAddress = (_QWORD *)MiGetPteAddress(qword_1403268F0);
    v14 = MiGetPteAddress(v12 + 0x1FFF);
    v15 = qword_1403268F8;
    v16 = v14;
    if ( !qword_1403268F8 )
    {
      v15 = ((v14 - (__int64)PteAddress) >> 3) + 1;
      qword_1403268F8 = v15;
    }
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v15, 0) )
      goto LABEL_31;
    if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)PteAddress, v16, 1, 0xBu) )
    {
      MiReturnCommit((__int64)MiSystemPartition, qword_1403268F8);
LABEL_31:
      MiDereferenceSession();
      return 3221225626LL;
    }
    *(_QWORD *)(v11 + 48) += qword_1403268F8;
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
    *(_QWORD *)(v11 + 56) = qword_140326900;
    *(_QWORD *)(v11 + 64) = qword_140326900 + 0x1FFFFFFFFFLL;
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
