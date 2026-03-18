/*
 * XREFs of MiReturnDriverLoadPages @ 0x1407FB4F0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiReturnDriverLoadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  __int64 CurrentIrql; // r13
  unsigned int v6; // edi
  signed __int32 i; // edx
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdi
  unsigned __int64 v18; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v19; // [rsp+28h] [rbp-A1h]
  int v20; // [rsp+30h] [rbp-99h] BYREF
  __int16 v21; // [rsp+34h] [rbp-95h]
  int v22; // [rsp+38h] [rbp-91h]
  int v23; // [rsp+3Ch] [rbp-8Dh]
  __int64 v24; // [rsp+40h] [rbp-89h]
  __int64 v25; // [rsp+48h] [rbp-81h]

  v23 = 0;
  v20 = 0;
  v24 = 0LL;
  v3 = a1;
  v25 = 0LL;
  v4 = (__int64)(a1 << 25) >> 16;
  v21 = 0;
  v22 = 20;
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(dword_14034FF40, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    for ( i = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FF40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  if ( v3 <= a2 )
  {
    v8 = 2040LL;
    v9 = 0x58000000000LL;
    do
    {
      v10 = *(_QWORD *)v3;
      v11 = v3 + 0x90482413000LL;
      if ( v3 + 0x90482413000LL <= v8
        && (unsigned int)MiPteHasShadow()
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v10 |= 0x20uLL;
          if ( (v13 & 0x42) != 0 )
            v10 |= 0x42uLL;
        }
      }
      v18 = v10;
      if ( (v10 & 1) != 0 )
      {
        if ( (unsigned __int64)&STACK[0x90482413020] <= v8
          && (unsigned int)MiPteHasShadow()
          && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
        {
          v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)&v18 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v10 |= 0x20uLL;
            if ( (v15 & 0x42) != 0 )
              v10 |= 0x42uLL;
          }
        }
        *(_QWORD *)v3 = 0LL;
        v16 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - v9;
        if ( v11 <= v8 )
        {
          MiWritePteShadow(v3, 0LL);
          v9 = 0x58000000000LL;
        }
        v17 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFLL) - v9;
        MiLockAndDecrementShareCount(v16, 1);
        MiLockAndDecrementShareCount(v17, 0);
        MiInsertTbFlushEntry((__int64)&v20, v4, 1LL, 0);
        v8 = 2040LL;
        v9 = 0x58000000000LL;
      }
      v3 += 8LL;
      v4 += 4096LL;
    }
    while ( v3 <= a2 );
    LOBYTE(CurrentIrql) = v19;
  }
  MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
  MiFlushTbList((__int64)&v20);
}
