/*
 * XREFs of MiDereferenceSessionFinal @ 0x1404F36F0
 * Callers:
 *     MiDereferenceSession @ 0x1403E7BF8 (MiDereferenceSession.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiDeleteSessionAddressSpace @ 0x140114000 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140114474 (MiSessionUnlinkProcess.c)
 *     MiFreeSessionSpaceMap @ 0x1401144C8 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x1401144F8 (MiUnlinkSessionWorkingSet.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 *     ExpWnfDeleteScopeById @ 0x1403E3D80 (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ExDrainPoolLookasideList @ 0x1404F3964 (ExDrainPoolLookasideList.c)
 *     MiCheckSessionPoolAllocations @ 0x1404F39F4 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x1404F3B90 (MiSessionUnloadAllImages.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r14
  __int64 v2; // rsi
  void (__fastcall *v3)(_QWORD); // rax
  struct _KTHREAD *v4; // rax
  _SLIST_HEADER *v5; // rbp
  __int64 v6; // r15
  ULONG_PTR v7; // r8
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned __int64 result; // rax
  void *v15; // rcx
  int v16; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v17, 0, sizeof(v17));
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
  v16 = *(_DWORD *)(v2 + 8);
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, (__int64)&v16, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  if ( (*(_DWORD *)(v2 + 4) & 1) != 0 )
  {
    v5 = (_SLIST_HEADER *)(v2 + 192);
    v6 = 21LL;
    do
    {
      ExDrainPoolLookasideList(v5);
      v5 += 8;
      --v6;
    }
    while ( v6 );
    ExDeferredFreePool(v2 + 3264, 0);
    v7 = *(_QWORD *)(v2 + 7776);
    if ( v7 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v7, 0LL, 0LL);
    MiCheckSessionPoolAllocations();
  }
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE628, 0LL, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE628, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE628, v8, (ULONG_PTR)&qword_1402FE628);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE628);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE628);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v11, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v17);
  MEMORY[0xFFFFF6FB7DBEDF90] = 0LL;
  if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF90uLL) )
    MiWritePteShadow(0xFFFFF6FB7DBEDF90uLL, 0LL);
  MiReturnResidentAvailable(v17[0]);
  _InterlockedExchangeAdd64(qword_1402FF410, v12);
  MiReturnResidentAvailable(*(_QWORD *)(v2 + 3064));
  _InterlockedExchangeAdd64(&qword_1402FF408, *(_QWORD *)(v2 + 3064));
  result = MiReturnCommit((__int64)MiSystemPartition, v13);
  v15 = *(void **)(v2 + 7984);
  if ( v15 )
    result = ObfDereferenceObject(v15);
  *(_QWORD *)(v2 + 7984) = 0LL;
  return result;
}
