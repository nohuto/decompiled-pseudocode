/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140119A48
 * Callers:
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiAnyAddressLocked @ 0x14021354C (MiAnyAddressLocked.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
_BOOL8 __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  volatile signed __int32 *v10; // r15
  BOOL v11; // r13d
  signed __int32 i; // edx
  unsigned __int8 v13; // r15
  __int64 NextPageTable; // rax
  __int64 v15; // rdx
  _KPROCESS *Process; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // r12d
  unsigned __int64 v26; // rbx
  int v28; // [rsp+30h] [rbp-D0h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v33; // [rsp+58h] [rbp-A8h]
  int v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  __int16 v36; // [rsp+74h] [rbp-8Ch]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]

  v4 = *(_QWORD *)(a3 + 184);
  v5 = 0;
  v28 = a4;
  v37 = 20LL;
  v35 = 1;
  v36 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (volatile signed __int32 *)(v4 + 1272);
  v32 = v8;
  v33 = v10;
  v11 = a4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10);
  }
  else
  {
    if ( _interlockedbittestandset(v10, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(v10);
    for ( i = *v10; (*v10 & 0xBFFFFFFF) != 0x80000000; i = *v10 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v10, i | 0x40000000, i);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  if ( v11 )
  {
    v11 = MiAnyAddressLocked(a1, a2) != 1;
    v28 = v11;
  }
  if ( v9 <= v8 )
  {
    v13 = CurrentIrql;
    do
    {
      LOBYTE(a4) = v13;
      NextPageTable = MiGetNextPageTable(v9, v8, (unsigned __int64)&v35, a4, 1, v34);
      v9 = NextPageTable;
      if ( !NextPageTable )
        break;
      v17 = NextPageTable << 25 >> 16;
      do
      {
        v18 = *(_QWORD *)v9;
        if ( v9 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v15)
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v15 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v15 )
          {
            v19 = *(_QWORD *)(v15 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v19 & 0x20) != 0 )
              v18 |= 0x20uLL;
            if ( (v19 & 0x42) != 0 )
              v18 |= 0x42uLL;
          }
        }
        v30 = v18;
        if ( (v18 & 1) != 0 && (v18 & 0x42) != 0 )
        {
          v20 = v18;
          if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
          {
            if ( (unsigned int)MiPteHasShadow(Process, v18) )
            {
              if ( (v18 & 0x20) == 0 )
              {
                v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v21 )
                {
                  v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v30 >> 3) & 0x1FF));
                  if ( (v22 & 0x20) != 0 )
                    v20 |= 0x20uLL;
                  if ( (v22 & 0x42) != 0 )
                    v20 |= 0x42uLL;
                }
              }
            }
          }
          v23 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v24 = KeGetCurrentIrql();
          v31 = v24;
          __writecr8(2uLL);
          v25 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v25);
            }
            while ( *(__int64 *)(v23 + 24) < 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
            LOBYTE(v24) = v31;
          }
          *(_BYTE *)(v23 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8((unsigned __int8)v24);
          v26 = v18 & 0xFFFFFFFFFFFFFFBDuLL;
          v30 = v26;
          *(_QWORD *)v9 = v26;
          if ( v9 + 0x90482413000LL <= 0x7F8 )
            MiWritePteShadow(v9, v26);
          MiInsertTbFlushEntry((__int64)&v35, v17, 1LL, 0);
          v8 = v32;
        }
        v17 += 4096LL;
        v9 += 8LL;
      }
      while ( (v17 & 0x1FFFFF) != 0 && v9 <= v8 );
      v13 = CurrentIrql;
    }
    while ( v9 <= v8 );
    v10 = v33;
    v11 = v28;
  }
  MiFlushTbList((__int64)&v35);
  MiUnlockWorkingSetExclusive((__int64)v10, CurrentIrql);
  return v11;
}
