/*
 * XREFs of MiDeleteFinalPageTables @ 0x1400EEEC4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearContainingMapping @ 0x1400EF404 (MiClearContainingMapping.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x1400EF5C4 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x1400EF5D4 (MiUnlinkProcessFromSession.c)
 *     MiDeleteAllHashMappings @ 0x140124F08 (MiDeleteAllHashMappings.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 *v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r12d
  volatile signed __int32 *v18; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v20; // edi
  signed __int32 v21; // edx
  __int64 v22; // rsi
  __int64 i; // rbx
  __int64 v24; // rbp
  unsigned __int8 v25; // r14
  unsigned int v26; // edi
  __int64 v27; // r8
  int IsZero; // eax
  unsigned __int8 v29; // si
  unsigned int v30; // edi
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int8 v34[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v35[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v36[48]; // [rsp+58h] [rbp-60h] BYREF

  memset(v35, 0, sizeof(v35));
  v2 = 0LL;
  v3 = *(_QWORD *)(BugCheckParameter1 + 40) >> 12;
  v4 = 0xFFFFF680003FFF00uLL;
  v5 = 48 * v3 - 0x58000000000LL;
  v6 = 3LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v8 = MiMapPageInHyperSpaceWorker(v3, v34);
  v9 = (__int64 *)(v8 + 8LL * (((unsigned int)v4 >> 3) & 0x1FF));
  v10 = *v9;
  if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8
    && (unsigned int)MiPteHasShadow(v7, v9)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8 * ((v11 >> 3) & 0x1FF));
      if ( (v13 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v13 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  MiUnmapPageInHyperSpaceWorker(v8, v34[0]);
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v36);
  v17 = 2;
  if ( v10 )
  {
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter1, v15, v16);
    v18 = (volatile signed __int32 *)(BugCheckParameter1 + 1272);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(BugCheckParameter1 + 1272);
    }
    else
    {
      v20 = 0;
      if ( _interlockedbittestandset(v18, 0x1Fu) )
        v20 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(BugCheckParameter1 + 1272));
      while ( 1 )
      {
        v21 = *v18;
        if ( (*v18 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v21 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v18, v21 | 0x40000000, v21);
        if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
    }
    MiDeleteVirtualAddresses(0x7FFE0000uLL, 0x7FFE0000uLL, 0, CurrentIrql, (__int64)v35);
    MiDeleteAllHashMappings(BugCheckParameter1 + 1272);
    MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1272, CurrentIrql);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, BugCheckParameter1);
  }
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 3 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      BugCheckParameter1,
      (v5 + 0x58000000000LL) / 48,
      *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow(BugCheckParameter1, 1LL);
  KiUnstackDetachProcess((struct _KTHREAD *)v36, 0);
  MiUnlinkProcessFromSession(BugCheckParameter1);
  KeFlushProcessTb(*(_QWORD *)(BugCheckParameter1 + 40));
  v22 = *(_QWORD *)(BugCheckParameter1 + 864);
  for ( i = 48 * v22 - 0x58000000000LL; ; MiLockAndDecrementShareCount(i, 0LL) )
  {
    v24 = v22;
    v22 = *(_QWORD *)(i + 40) & 0xFFFFFFFFFLL;
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v26 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v26);
      }
      while ( (*(_QWORD *)(i + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) );
    }
    MiClearContainingMapping(i);
    *(_QWORD *)(i + 24) |= 0x4000000000000000uLL;
    v27 = *(_QWORD *)(i + 24);
    if ( (*(_BYTE *)(i + 34) & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (i + 0x58000000000LL) / 48, *(_BYTE *)(i + 34) & 7, v27 & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(i + 24) = v27 ^ (((v27 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v27) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v27 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      IsZero = MiPfnShareCountIsZero(i, 0LL);
    else
      IsZero = 2;
    if ( IsZero == 3 )
      ++v2;
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v25);
    if ( v24 == v22 )
      break;
    i = 48 * v22 - 0x58000000000LL;
  }
  v29 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v30 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v30);
    }
    while ( (*(_QWORD *)(i + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(i + 24), 0x3FuLL) );
  }
  if ( (*(_BYTE *)(i + 34) & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (i + 0x58000000000LL) / 48,
      *(_BYTE *)(i + 34) & 7,
      *(_QWORD *)(i + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v31 = *(_QWORD *)(i + 24);
  v32 = (v31 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(i + 24) = v31 ^ (v32 ^ v31) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v31 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    v17 = MiPfnShareCountIsZero(i, v32);
  if ( v17 == 3 )
    ++v2;
  _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v29);
  return v2;
}
