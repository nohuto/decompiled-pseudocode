/*
 * XREFs of MiDereferenceSessionFinal @ 0x140531AD0
 * Callers:
 *     MiDereferenceSession @ 0x14045F498 (MiDereferenceSession.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiDeleteSessionAddressSpace @ 0x140122D08 (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x1401231B4 (MiSessionUnlinkProcess.c)
 *     MiFreeSessionSpaceMap @ 0x140123208 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140123238 (MiUnlinkSessionWorkingSet.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     ExpWnfDeleteScopeById @ 0x1404610CC (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     ExDrainPoolLookasideList @ 0x140531D38 (ExDrainPoolLookasideList.c)
 *     MiCheckSessionPoolAllocations @ 0x140531DC8 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x140531F68 (MiSessionUnloadAllImages.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r14
  __int64 v2; // rsi
  void (__fastcall *v3)(_QWORD); // rax
  struct _KTHREAD *v4; // rax
  union _SLIST_HEADER *v5; // rbp
  __int64 v6; // r15
  ULONG_PTR v7; // r8
  _BYTE *v8; // rax
  signed __int8 v9; // cf
  _BYTE *v10; // rbp
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 result; // rax
  void *v16; // rcx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1024);
  MiUnlinkSessionWorkingSet(v2);
  if ( *(_QWORD *)(v2 + 80) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 72), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 80), 0);
  }
  v3 = *(void (__fastcall **)(_QWORD))(v2 + 3360);
  if ( (unsigned __int64)v3 > 1 )
    v3(0LL);
  MiSessionUnloadAllImages();
  v17 = *(_DWORD *)(v2 + 8);
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, (__int64)&v17, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  if ( (*(_DWORD *)(v2 + 4) & 1) != 0 )
  {
    v5 = (union _SLIST_HEADER *)(v2 + 192);
    v6 = 21LL;
    do
    {
      ExDrainPoolLookasideList(v5);
      v5 += 8;
      --v6;
    }
    while ( v6 );
    ExDeferredFreePool((int *)(v2 + 3392), 0);
    v7 = *(_QWORD *)(v2 + 7904);
    if ( v7 )
      KeBugCheckEx(0xECu, *(unsigned int *)(v2 + 8), v7, 0LL, 0LL);
    MiCheckSessionPoolAllocations();
  }
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403268F0, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403268F0, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_1403268F0, v8, (ULONG_PTR)&qword_1403268F0);
  if ( v10 )
    v10[26] |= 1u;
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403268F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403268F0);
  KeAbPostRelease((ULONG_PTR)&qword_1403268F0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 832) )
  {
    MiSessionUnlinkProcess(v11, Process);
    *(_QWORD *)(Process + 832) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, v18);
  v12 = (_QWORD *)(8 * (((unsigned __int64)qword_140326918 >> 39) & 0x1FF) - 0x90482413000LL);
  *v12 = 0LL;
  if ( MiPteInShadowRange((unsigned __int64)v12) )
    MiWritePteShadow(v13, 0LL);
  MiReturnResidentAvailable(v18[0]);
  MiReturnResidentAvailable(*(_QWORD *)(v2 + 3112));
  result = MiReturnCommit((__int64)MiSystemPartition, v14);
  v16 = *(void **)(v2 + 8120);
  if ( v16 )
    result = ObfDereferenceObjectWithTag(v16, 0x73536D4Du);
  *(_QWORD *)(v2 + 8120) = 0LL;
  return result;
}
