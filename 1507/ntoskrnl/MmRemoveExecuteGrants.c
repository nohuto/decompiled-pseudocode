/*
 * XREFs of MmRemoveExecuteGrants @ 0x14007B234
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     MiGetPfnProtection @ 0x14007B518 (MiGetPfnProtection.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 MmRemoveExecuteGrants()
{
  unsigned int v0; // ebx
  __int64 *v1; // r15
  volatile signed __int32 *v2; // rsi
  __int64 i; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 PteShadow; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // [rsp+28h] [rbp-E0h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-D8h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+4Ch] [rbp-BCh]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h]

  v0 = 0;
  v19 = 20LL;
  v17 = 1;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v1 = (__int64 *)(MEMORY[0xFFFFF580108041F0] + 2LL * MEMORY[0xFFFFF58010804040]);
  v2 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  v15 = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
  }
  else
  {
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v0 = ExpWaitForSpinLockExclusiveAndAcquire(v2);
    for ( i = *(unsigned int *)v2; (*v2 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v2 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v2, i | 0x40000000, i);
      if ( (++v0 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v0);
    }
  }
  if ( MEMORY[0xFFFFF58010804010] >= 2uLL )
  {
    v4 = MEMORY[0xFFFFF58010804010] - 1LL;
    v5 = 0x8000000000000000uLL;
    do
    {
      v6 = *v1;
      if ( (*v1 & 1) != 0 )
      {
        v7 = (v6 & 0x800000000000LL) != 0 ? v6 | 0xFFFF000000000000uLL : v6 & 0xFFFFFFFFFFFFLL;
        v8 = v7 & 0xFFFFFFFFFFFFF000uLL;
        if ( v8 <= (unsigned __int64)MmHighestUserAddress )
        {
          v9 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          PteShadow = *v9;
          if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v9);
          v14 = PteShadow;
          if ( (PteShadow & v5) == 0 )
          {
            v11 = PteShadow;
            if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8 )
              v11 = MiReadPteShadow(&v14, PteShadow);
            if ( (MiGetPfnProtection(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v1) & 2) == 0 )
            {
              v12 = ~qword_1403D0220 & (PteShadow | 0x8000000000000000uLL);
              v14 = v12;
              *v9 = v12;
              if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
                MiWritePteShadow(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v12);
              MiInsertTbFlushEntry(&v17, v8, 1LL, 0LL);
            }
            v5 = 0x8000000000000000uLL;
          }
        }
      }
      v1 = (__int64 *)((char *)v1 + MEMORY[0xFFFFF58010804040]);
      --v4;
    }
    while ( v4 );
    v2 = v15;
  }
  LOBYTE(i) = CurrentIrql;
  MiUnlockWorkingSetExclusive(v2, i);
  return MiFlushTbList(&v17);
}
