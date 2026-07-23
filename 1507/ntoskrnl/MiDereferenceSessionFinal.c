/*
 * XREFs of MiDereferenceSessionFinal @ 0x14056797C
 * Callers:
 *     MiDereferenceSession @ 0x14054D8B4 (MiDereferenceSession.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     MiDeleteSessionAddressSpace @ 0x1401495B0 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140149E8C (MiSessionUnlinkProcess.c)
 *     MiFreeSessionSpaceMap @ 0x140149EE0 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140149F10 (MiUnlinkSessionWorkingSet.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x1405043FC (ExpWnfDeleteScopeById.c)
 *     ExDrainPoolLookasideList @ 0x140567C44 (ExDrainPoolLookasideList.c)
 *     MiCheckSessionPoolAllocations @ 0x140567CD4 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x140567E70 (MiSessionUnloadAllImages.c)
 */

__int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r14
  __int64 v2; // rbp
  void (__fastcall *v3)(_QWORD); // rax
  struct _KTHREAD *v4; // rax
  __int64 v5; // r9
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  __int64 v8; // r9
  _SLIST_HEADER *v9; // r15
  __int64 v10; // r12
  ULONG_PTR v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  signed __int8 v14; // cf
  __int64 v15; // r15
  __int64 v16; // rcx
  __int16 v17; // ax
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 result; // rax
  void *v21; // rcx
  int v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-28h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1024);
  MiUnlinkSessionWorkingSet(v2);
  if ( *(_QWORD *)(v2 + 80) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 72), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 80), 0);
  }
  v3 = *(void (__fastcall **)(_QWORD))(v2 + 3232);
  if ( (unsigned __int64)v3 > 1 )
    v3(0LL);
  MiSessionUnloadAllImages();
  v22 = *(_DWORD *)(v2 + 8);
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, (__int64)&v22, 4u, v5);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  MiFreeSessionSpaceMap();
  if ( (*(_DWORD *)(v2 + 4) & 1) != 0 )
  {
    v9 = (_SLIST_HEADER *)(v2 + 192);
    v10 = 21LL;
    do
    {
      ExDrainPoolLookasideList(v9);
      v9 += 8;
      --v10;
    }
    while ( v10 );
    ExDeferredFreePool(v2 + 3264, 0);
    v11 = *(_QWORD *)(v2 + 7776);
    if ( v11 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v11, 0LL, 0LL);
    MiCheckSessionPoolAllocations();
  }
  --CurrentThread->SpecialApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAD8, 0LL, 0LL, v8);
  v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EAD8, 0LL);
  v15 = v12;
  if ( v14 )
    ExfAcquirePushLockExclusiveEx(&qword_14034EAD8, v12, (ULONG_PTR)&qword_14034EAD8, v13);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAD8);
  KeAbPostRelease((ULONG_PTR)&qword_14034EAD8);
  v17 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v17;
  if ( !v17 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v16, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace((_KPROCESS *)v2, &v23);
  MEMORY[0xFFFFF6FB7DBEDF90] = 0LL;
  if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF90uLL) )
    MiWritePteShadow(0xFFFFF6FB7DBEDF90uLL, 0LL);
  v18 = v23;
  v19 = v26 - v24;
  MiReturnResidentAvailable(v23);
  _InterlockedExchangeAdd64(qword_14034F890, v18);
  MiReturnResidentAvailable(*(_QWORD *)(v2 + 3064));
  _InterlockedExchangeAdd64(&qword_14034F888, *(_QWORD *)(v2 + 3064));
  result = MiReturnCommit((__int64)MiSystemPartition, v19);
  v21 = *(void **)(v2 + 7984);
  if ( v21 )
    result = PspDereferenceSiloObject(v21);
  *(_QWORD *)(v2 + 7984) = 0LL;
  return result;
}
