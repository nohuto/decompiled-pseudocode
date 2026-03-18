/*
 * XREFs of MiDeletePagablePteRange @ 0x140008890
 * Callers:
 *     MiDeleteVadBitmap @ 0x1400087D0 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDeletePagablePteRange(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r15
  volatile signed __int32 *v4; // r12
  __int64 CurrentIrql; // rbx
  unsigned int v6; // ebx
  signed __int32 i; // edx
  ULONG_PTR NextPageTable; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r13d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  ULONG_PTR v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 Process; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  __int16 v40; // ax
  unsigned __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h]
  volatile signed __int32 *v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  char v47[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+90h] [rbp-70h] BYREF
  __int16 v54; // [rsp+94h] [rbp-6Ch]
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]

  v48 = a1;
  v50 = 0LL;
  v2 = *(unsigned __int16 *)(a1 + 1452);
  v49 = 0LL;
  LODWORD(v3) = -1073741824;
  v51 = 0LL;
  v52 = 0LL;
  v4 = (volatile signed __int32 *)(a1 + 1272);
  v45 = MiPartitionIdToPointer(v2);
  v44 = v4;
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(v4);
    for ( i = *v4; (*v4 & 0xBFFFFFFF) != 0x80000000; i = *v4 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, i | 0x40000000, i);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    LOBYTE(CurrentIrql) = v43;
  }
  do
  {
    NextPageTable = MiGetNextPageTable(v3, -1073201128, 0, (unsigned __int8)CurrentIrql, 1, (__int64)v47);
    BugCheckParameter2 = NextPageTable;
    if ( !NextPageTable )
      break;
    v55 = 20LL;
    v12 = NextPageTable;
    v13 = (__int64)(NextPageTable << 25) >> 16;
    v53 = 1;
    v14 = 0;
    v54 = 0;
    v56 = 0LL;
    v57 = 0LL;
    do
    {
      v15 = *(_QWORD *)v12;
      v16 = v12 + 0x90482413000LL;
      if ( v12 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v9)
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v9 )
        {
          v17 = *(_QWORD *)(v9 + 8 * ((v12 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v15 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            v15 |= 0x42uLL;
        }
      }
      v42 = v15;
      if ( v15 )
      {
        if ( (v15 & 1) != 0 )
        {
          v18 = v15;
          if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8
            && (unsigned int)MiPteHasShadow(0x90482413000LL, v15)
            && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v19 )
            {
              v20 = *(_QWORD *)(v19 + 8 * (((unsigned __int64)&v42 >> 3) & 0x1FF));
              if ( (v20 & 0x20) != 0 )
                v18 |= 0x20uLL;
              if ( (v20 & 0x42) != 0 )
                v18 |= 0x42uLL;
            }
          }
          MiTerminateWsle(v13, v44, *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL));
          MiInsertTbFlushEntry(&v53, v13 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
          v21 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v42 = v21;
          *(_QWORD *)v12 = v21;
          if ( v16 <= 0x7F8 )
            MiWritePteShadow(v12, v21);
        }
        else
        {
          v40 = MiReverseSwizzleInvalidPte(v15, v9, v10, v11);
          if ( (v40 & 0x400) == 0 && (v40 & 0x800) == 0 && (v40 & 4) == 0 )
          {
            MiReleasePageFileSpace(v45, v15, 1LL);
            *(_QWORD *)v12 = 0LL;
            if ( v16 <= 0x7F8 )
              MiWritePteShadow(v12, 0LL);
          }
        }
      }
      v13 += 4096LL;
      v12 += 8LL;
      if ( v12 > 0xFFFFF6FAC0084018uLL )
        break;
      if ( (v12 & 0xFFF) == 0 )
        break;
      ++v14;
    }
    while ( v14 < 0x200 );
    MiFlushTbList(&v53);
    v22 = BugCheckParameter2;
    MiDeletePteRun(BugCheckParameter2, (__int64)&v49);
    v24 = 0x90482413000LL;
    v25 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v26 = *(_QWORD *)v25;
    v27 = v25 + 0x90482413000LL;
    v28 = *(_QWORD *)v25;
    if ( v25 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(v23, v28)
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      v29 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8 * ((v25 >> 3) & 0x1FF));
        if ( (v30 & 0x20) != 0 )
          v28 |= 0x20uLL;
        if ( (v30 & 0x42) != 0 )
          v28 |= 0x42uLL;
      }
    }
    v31 = 0xFFFFFFFFFLL;
    v32 = (v28 >> 12) & 0xFFFFFFFFFLL;
    Process = *(_QWORD *)(48 * v32 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( Process == 1 )
    {
      if ( v27 <= 0x7F8
        && (unsigned int)MiPteHasShadow(1LL, v32)
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v34 = *(_QWORD *)(Process + 1520);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v25 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            v26 |= 0x20uLL;
          if ( (v35 & 0x42) != 0 )
            v26 |= 0x42uLL;
        }
      }
      v42 = v26;
      v36 = v26;
      if ( (unsigned __int64)&v42 + v24 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v26)
        && (v26 & 1) != 0
        && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
      {
        v37 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 8 * (((unsigned __int64)&v42 >> 3) & 0x1FF));
          if ( (v38 & 0x20) != 0 )
            v36 |= 0x20uLL;
          if ( (v38 & 0x42) != 0 )
            v36 |= 0x42uLL;
        }
      }
      v4 = v44;
      MiTerminateWsle(v22, v44, *(_QWORD *)(48 * (v31 & (v36 >> 12)) - 0x58000000000LL));
      MiInsertTbFlushEntry(&v53, v22 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
      v39 = v26 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v42 = v39;
      *(_QWORD *)v25 = v39;
      if ( v27 <= 0x7F8 )
        MiWritePteShadow(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v39);
      MiFlushTbList(&v53);
      MiDeletePteRun(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (__int64)&v49);
    }
    else
    {
      v4 = v44;
    }
    LOBYTE(CurrentIrql) = v43;
    v3 = v22 + 4096;
  }
  while ( v3 <= 0xFFFFF6FAC0084018uLL );
  MiUnlockWorkingSetExclusive(v4, (unsigned __int8)CurrentIrql);
  return v50;
}
