/*
 * XREFs of MiLockDownWorkingSet @ 0x140001790
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockDownWorkingSet(ULONG_PTR a1, int a2)
{
  volatile signed __int32 *v3; // rdi
  __int64 *v4; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed __int32 v8; // edx
  __int64 v9; // rbp
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rdx
  _BYTE v21[48]; // [rsp+20h] [rbp-68h] BYREF

  v3 = (volatile signed __int32 *)(a1 + 1272);
  v4 = (__int64 *)MEMORY[0xFFFFF580108041F0];
  KiStackAttachProcess(a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(v3);
    v8 = *v3;
    v6 = *v3 & 0xBFFFFFFF;
    if ( (_DWORD)v6 != 0x80000000 )
    {
      do
      {
        if ( (v8 & 0x40000000) == 0 )
        {
          v6 = v8 | 0x40000000u;
          _InterlockedCompareExchange(v3, v6, v8);
        }
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
        v8 = *v3;
      }
      while ( (*v3 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  v9 = 5LL;
  do
  {
    v10 = *v4;
    if ( (*v4 & 0x800000000000LL) != 0 )
      v11 = v10 | 0xFFFF000000000000uLL;
    else
      v11 = v10 & 0xFFFFFFFFFFFFLL;
    v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v13 = *v12;
    if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(v6, v13)
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((v14 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v13 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v13 |= 0x42uLL;
      }
    }
    v17 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    if ( a2 == 1 )
      MiAddLockedPageCharge(v17, 1LL);
    else
      MiRemoveLockedPageChargeAndDecRef(v17);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = (__int64 *)((char *)v4 + MEMORY[0xFFFFF58010804040]);
    --v9;
  }
  while ( v9 );
  LOBYTE(v19) = CurrentIrql;
  MiUnlockWorkingSetExclusive(v3, v19);
  return KiUnstackDetachProcess(v21, 0LL);
}
