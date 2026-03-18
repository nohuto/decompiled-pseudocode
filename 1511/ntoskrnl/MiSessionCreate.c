/*
 * XREFs of MiSessionCreate @ 0x1404FE8CC
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1404635E8 (MiMapProcessExecutable.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14011F74C (PsGetCurrentServerSiloGlobals.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiDereferenceSession @ 0x1403E7BF8 (MiDereferenceSession.c)
 *     ExInitializePagedLookasideList @ 0x1404D17DC (ExInitializePagedLookasideList.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x1404FF074 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x1404FF0AC (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x1404FF140 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     MmIsSessionLeaderProcess @ 0x1405001DC (MmIsSessionLeaderProcess.c)
 */

__int64 __fastcall MiSessionCreate(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r13
  _KPROCESS *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  char v12; // al
  unsigned int v13; // r15d
  _QWORD *PteAddress; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  int v18; // edi
  PVOID PoolWithTag; // rax
  SIZE_T Size; // rdi
  struct _PAGED_LOOKASIDE_LIST *v21; // rbp
  __int64 v22; // r14
  int v23; // ebx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = CurrentThread->Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( !(unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
  {
    if ( qword_1402FE620 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        --CurrentThread->KernelApcDisable;
        v6 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE628, 0LL, 0LL);
        v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE628, 0LL);
        v8 = v6;
        if ( v7 )
          ExfAcquirePushLockExclusiveEx(&qword_1402FE628, v6, (ULONG_PTR)&qword_1402FE628);
        if ( v8 )
          *(_BYTE *)(v8 + 26) |= 1u;
        if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 7) )
        {
          *((_QWORD *)PsGetCurrentServerSiloGlobals() + 7) = v4;
          ObfReferenceObject(v4);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE628);
        KeAbPostRelease((ULONG_PTR)&qword_1402FE628);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      }
      if ( !(unsigned int)MmIsSessionLeaderProcess(v4) )
        return 3221225500LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE628, 0LL, 0LL);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE628, 0LL);
      v10 = v9;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx(&qword_1402FE628, v9, (ULONG_PTR)&qword_1402FE628);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      if ( qword_1402FE620 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE628);
        KeAbPostRelease((ULONG_PTR)&qword_1402FE628);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( (_KPROCESS *)qword_1402FE620 != v4 )
          return 3221225500LL;
      }
      else
      {
        qword_1402FE5E8 = 0xFFFFF90000010000uLL;
        xmmword_1402FE630 = (__int128)_mm_load_si128((const __m128i *)&_xmm_fffff900c0001000fffff90000452000);
        qword_1402FE600 = 0xFFFFF90140000000uLL;
        qword_1402FE5F8 = 0xFFFFF90000012000uLL;
        qword_1402FE608 = 0xFFFFF90000412000uLL;
        qword_1402FFCA8 = 0xFFFFF90000001E28uLL;
        qword_1402FE640 = 0xFFFFF90100001000uLL;
        qword_1402FE620 = (__int64)v4;
        *((_QWORD *)PsGetServerSiloGlobals(0LL) + 7) = v4;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE628);
        KeAbPostRelease((ULONG_PTR)&qword_1402FE628);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        ObfReferenceObject(v4);
      }
    }
  }
  result = MiSessionCreateInternal(a1);
  if ( (int)result >= 0 )
  {
    v11 = Process[1].ActiveProcessors.Bitmap[2];
    v12 = *(_BYTE *)(v11 + 3184) & 0xF9;
    *(_DWORD *)(v11 + 2968) = 0;
    *(_BYTE *)(v11 + 3184) = v12 | 1;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v11 + 7824, qword_1402FE608, 0x200000LL, 0LL) )
      goto LABEL_31;
    v13 = 0x10000 - ((unsigned __int64)(qword_1402FE600 + 0x70000000000LL) >> 21);
    *(_QWORD *)(v11 + 7704) = qword_1402FE5E8;
    *(_DWORD *)(v11 + 7696) = v13;
    PteAddress = (_QWORD *)MiGetPteAddress(qword_1402FE5E8);
    v15 = MiGetPteAddress(qword_1402FE5E8 + ((((unsigned __int64)v13 >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL) - 1);
    v16 = qword_1402FE5F0;
    v17 = v15;
    if ( !qword_1402FE5F0 )
    {
      v16 = ((v15 - (__int64)PteAddress) >> 3) + 1;
      qword_1402FE5F0 = v16;
    }
    if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, v16, 0LL) )
    {
LABEL_31:
      MiDereferenceSession();
      return 3221225626LL;
    }
    if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)PteAddress, v17, 1, 0xBu) )
    {
      MiReturnCommit((__int64)MiSystemPartition, qword_1402FE5F0);
      goto LABEL_49;
    }
    *(_QWORD *)(v11 + 48) += qword_1402FE5F0;
    *(_DWORD *)(v11 + 4) |= 8u;
    while ( (unsigned __int64)PteAddress <= v17 )
    {
      *PteAddress = 128LL;
      if ( MiPteInShadowRange((__int64)PteAddress) )
        MiWritePteShadow((__int64)PteAddress, 128LL);
      ++PteAddress;
    }
    v18 = MiSessionInitializeWorkingSetList();
    if ( v18 < 0 )
      goto LABEL_50;
    *(_QWORD *)(v11 + 56) = qword_1402FE600;
    *(_QWORD *)(v11 + 64) = qword_1402FE600 + 0x1FFFFFFFFFLL;
    v18 = MiInitializeSessionPool();
    if ( v18 < 0 )
      goto LABEL_50;
    MiInitializeSpecialPool(33LL);
    PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    Size = 16LL;
    v21 = (struct _PAGED_LOOKASIDE_LIST *)(v11 + 192);
    v22 = 21LL;
    do
    {
      ExInitializePagedLookasideList(v21, 0LL, 0LL, 0x21u, Size, 0x6C6F6F50u, 0x100u);
      Size += 16LL;
      ++v21;
      --v22;
    }
    while ( v22 );
    *(_DWORD *)(v11 + 4) |= 1u;
    if ( !(unsigned int)MiInitializeSystemSpaceMap(v11 + 2880) )
    {
LABEL_49:
      v18 = -1073741670;
LABEL_50:
      MiDereferenceSession();
      return (unsigned int)v18;
    }
    v23 = MiSessionObjectCreate();
    if ( v23 < 0 )
      MiDereferenceSession();
    return (unsigned int)v23;
  }
  return result;
}
