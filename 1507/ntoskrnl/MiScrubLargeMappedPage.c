/*
 * XREFs of MiScrubLargeMappedPage @ 0x140232658
 * Callers:
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiScrubLargeMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // edi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 CurrentIrql; // r12
  unsigned int v13; // ebx
  signed __int32 i; // edx
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r15
  __int64 v27; // rsi
  unsigned int v28; // r12d
  __int64 v29; // rbx
  unsigned __int8 v30; // r14
  unsigned int v31; // ebx
  signed __int32 v32; // edx
  unsigned __int64 v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v43; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+80h] [rbp-80h] BYREF
  __int16 v47; // [rsp+84h] [rbp-7Ch]
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]

  v4 = *(unsigned int *)(a1 + 24);
  v5 = (volatile signed __int32 *)(a3 + 1272);
  v6 = *(unsigned __int8 *)(a1 + 33);
  v7 = 0;
  v40 = a2;
  v8 = (v4 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 >> 18;
  v9 = ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 6) | (v6 << 26);
  v37 = (v4 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v41 = a4;
  v48 = 20LL;
  v10 = (v8 & 0x3FFFFFF8) - 0x904C0000000LL;
  v46 = 1;
  v47 = 0;
  v11 = (v9 & 0x3FFFFFF8) - 0x904C0000000LL;
  v49 = 0LL;
  v42 = v11;
  v50 = 0LL;
  v38 = v10;
  v43 = (volatile signed __int32 *)(a3 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a3 + 1272);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a3 + 1272));
    for ( i = *v5; (*v5 & 0xBFFFFFFF) != 0x80000000; i = *v5 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, i | 0x40000000, i);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
  }
  if ( v10 > v11 )
  {
LABEL_71:
    v7 = 1;
  }
  else
  {
    v15 = &STACK[0x90482413028];
    v44 = &STACK[0x90482413028];
    v16 = v10 + 0x90482413000LL;
    v34 = v10 + 0x90482413000LL;
    while ( 1 )
    {
      v17 = *(_QWORD *)v10;
      if ( v16 <= 0x7F8 && (unsigned int)MiPteHasShadow() && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v18 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v19 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      v35 = v17;
      *(_QWORD *)v10 = 0LL;
      if ( v16 <= 0x7F8 )
        MiWritePteShadow(v10, 0LL);
      v20 = v37;
      MiInsertTbFlushEntry((__int64)&v46, v37, 1LL, 1);
      MiFlushTbList((__int64)&v46);
      v21 = v17;
      v37 = v20 + 0x200000;
      if ( (unsigned __int64)v15 <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v22 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v35 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v23 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v24 = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v36 = v24 + 24576;
      if ( v24 < v24 + 24576 )
      {
        v25 = v36;
        v26 = v24 + 24;
        v27 = v40;
        do
        {
          if ( *(_WORD *)(v26 + 8) == 2 )
          {
            if ( (int)MiScrubPage(v27, *(_QWORD *)(v27 + 24), v24) < 0 )
            {
              v45 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v28 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0x3FuLL) )
              {
                do
                {
                  if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v28);
                }
                while ( *(__int64 *)v26 < 0 );
              }
              MiMakePageBad(v24, 0);
              _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8((unsigned __int8)v45);
            }
            v25 = v36;
          }
          v24 += 48LL;
          v26 += 48LL;
        }
        while ( v24 < v25 );
        v5 = v43;
        v10 = v38;
        CurrentIrql = v39;
      }
      v29 = v17 | 0x20;
      v35 = v29;
      *(_QWORD *)v10 = v29;
      if ( v34 <= 0x7F8 )
        MiWritePteShadow(v10, v29);
      v10 += 8LL;
      v16 = v34 + 8;
      v38 = v10;
      v34 += 8LL;
      if ( *(_DWORD *)(v41 + 4) )
        break;
      if ( (*v5 & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetExclusive((__int64)v5, CurrentIrql);
        v30 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
        }
        else
        {
          v31 = 0;
          if ( _interlockedbittestandset(v5, 0x1Fu) )
            v31 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
          v32 = *v5;
          for ( CurrentIrql = 3221225471LL; (*v5 & 0xBFFFFFFF) != 0x80000000; v32 = *v5 )
          {
            if ( (v32 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v5, v32 | 0x40000000, v32);
            if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v31);
          }
        }
        LOBYTE(CurrentIrql) = v30;
        v16 = v34;
        v39 = CurrentIrql;
      }
      v15 = v44;
      if ( v10 > v42 )
        goto LABEL_71;
    }
  }
  MiUnlockWorkingSetExclusive((__int64)v5, CurrentIrql);
  return v7;
}
