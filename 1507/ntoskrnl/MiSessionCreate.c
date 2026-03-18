/*
 * XREFs of MiSessionCreate @ 0x140579240
 * Callers:
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140154878 (PsGetCurrentServerSiloGlobals.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 *     MiDereferenceSession @ 0x14054D8B4 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140579A74 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x140579AAC (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x140579B44 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     MmIsSessionLeaderProcess @ 0x14057AC40 (MmIsSessionLeaderProcess.c)
 */

__int64 __fastcall MiSessionCreate(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  _KPROCESS *v3; // r14
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // r15
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r15
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rdi
  char v18; // al
  unsigned __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 *v21; // rsi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int64 DemandZeroPte; // rbx
  int v25; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T Size; // rbx
  struct _PAGED_LOOKASIDE_LIST *v28; // rsi
  __int64 v29; // r14

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v3 = CurrentThread->Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( !(unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
  {
    if ( qword_14034EAD0 )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        --CurrentThread->KernelApcDisable;
        v7 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAD8, 0LL, 0LL, v6);
        v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EAD8, 0LL);
        v10 = v7;
        if ( v9 )
          ExfAcquirePushLockExclusiveEx(&qword_14034EAD8, v7, (ULONG_PTR)&qword_14034EAD8, v8);
        if ( v10 )
          *(_BYTE *)(v10 + 26) |= 1u;
        if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 7) )
        {
          *((_QWORD *)PsGetCurrentServerSiloGlobals() + 7) = v3;
          ObfReferenceObject(v3);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAD8);
        KeAbPostRelease((ULONG_PTR)&qword_14034EAD8);
        v11 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v11;
        if ( !v11
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( !(unsigned int)MmIsSessionLeaderProcess(v3) )
        return 3221225500LL;
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      v12 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAD8, 0LL, 0LL, v5);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EAD8, 0LL);
      v14 = v12;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&qword_14034EAD8, v12, (ULONG_PTR)&qword_14034EAD8, v13);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      if ( qword_14034EAD0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAD8);
        KeAbPostRelease((ULONG_PTR)&qword_14034EAD8);
        v15 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v15;
        if ( !v15
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( (_KPROCESS *)qword_14034EAD0 != v3 )
          return 3221225500LL;
      }
      else
      {
        qword_14034EA98 = 0xFFFFF90000010000uLL;
        xmmword_14034EAE0 = (__int128)_mm_load_si128((const __m128i *)&_xmm_fffff900c0001000fffff90000452000);
        qword_14034EAB0 = 0xFFFFF90140000000uLL;
        qword_14034EAA8 = 0xFFFFF90000012000uLL;
        qword_14034EAB8 = 0xFFFFF90000412000uLL;
        qword_140350170 = 0xFFFFF90000001E28uLL;
        qword_14034EAF0 = 0xFFFFF90100001000uLL;
        qword_14034EAD0 = (__int64)v3;
        *((_QWORD *)PsGetServerSiloGlobals(0LL) + 7) = v3;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAD8);
        KeAbPostRelease((ULONG_PTR)&qword_14034EAD8);
        v16 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v16;
        if ( !v16
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfReferenceObject(v3);
      }
    }
  }
  result = MiSessionCreateInternal(a1);
  if ( (int)result >= 0 )
  {
    v17 = Process[1].ActiveProcessors.Bitmap[2];
    v18 = *(_BYTE *)(v17 + 3184) & 0xF9;
    *(_DWORD *)(v17 + 2968) = 0;
    *(_BYTE *)(v17 + 3184) = v18 | 1;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v17 + 7824, qword_14034EAB8, 0x200000LL, 0LL) )
      goto LABEL_40;
    v19 = qword_14034EAB0 + 0x70000000000LL;
    *(_QWORD *)(v17 + 7704) = qword_14034EA98;
    v20 = 0x10000 - (v19 >> 21);
    *(_DWORD *)(v17 + 7696) = v20;
    v21 = (__int64 *)((((unsigned __int64)qword_14034EA98 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v22 = (((((((unsigned __int64)v20 >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL) + qword_14034EA98 - 1) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    v23 = qword_14034EAA0;
    if ( !qword_14034EAA0 )
    {
      v23 = ((__int64)(v22 - (_QWORD)v21) >> 3) + 1;
      qword_14034EAA0 = v23;
    }
    if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v23, 0) )
    {
LABEL_40:
      MiDereferenceSession();
      return 3221225626LL;
    }
    if ( (unsigned int)MiMakeZeroedPageTables((unsigned __int64)v21, v22, 1, 11) )
    {
      *(_QWORD *)(v17 + 48) += qword_14034EAA0;
      *(_DWORD *)(v17 + 4) |= 8u;
      DemandZeroPte = MiMakeDemandZeroPte(4);
      while ( (unsigned __int64)v21 <= v22 )
      {
        *v21 = DemandZeroPte;
        if ( MiPteInShadowRange((__int64)v21) )
          MiWritePteShadow((__int64)v21, DemandZeroPte);
        ++v21;
      }
      v25 = MiSessionInitializeWorkingSetList();
      if ( v25 < 0 )
        goto LABEL_60;
      *(_QWORD *)(v17 + 56) = qword_14034EAB0;
      *(_QWORD *)(v17 + 64) = qword_14034EAB0 + 0x1FFFFFFFFFLL;
      v25 = MiInitializeSessionPool();
      if ( v25 < 0 )
        goto LABEL_60;
      MiInitializeSpecialPool(33LL);
      PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      Size = 16LL;
      v28 = (struct _PAGED_LOOKASIDE_LIST *)(v17 + 192);
      v29 = 21LL;
      do
      {
        ExInitializePagedLookasideList(v28, 0LL, 0LL, 0x21u, Size, 0x6C6F6F50u, 0x100u);
        Size += 16LL;
        ++v28;
        --v29;
      }
      while ( v29 );
      *(_DWORD *)(v17 + 4) |= 1u;
      if ( (unsigned int)MiInitializeSystemSpaceMap(v17 + 2880) )
      {
        v25 = MiSessionObjectCreate();
        if ( v25 >= 0 )
          return (unsigned int)v25;
LABEL_60:
        MiDereferenceSession();
        return (unsigned int)v25;
      }
    }
    else
    {
      MiReturnCommit((__int64)MiSystemPartition, qword_14034EAA0);
    }
    v25 = -1073741670;
    goto LABEL_60;
  }
  return result;
}
