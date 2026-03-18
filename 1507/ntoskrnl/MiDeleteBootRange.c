/*
 * XREFs of MiDeleteBootRange @ 0x140162804
 * Callers:
 *     MmFreeBootRegistry @ 0x140598AF8 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteBootRange(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 *v3; // r12
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r13
  __int64 v7; // rcx
  signed __int8 v8; // cf
  unsigned int v9; // ebx
  unsigned __int32 v10; // edx
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v20; // r12
  unsigned __int64 Process; // rcx
  unsigned int v22; // ebx
  signed __int32 v23; // edx
  unsigned __int64 v24; // r13
  __int64 v25; // r9
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // edi
  __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r8
  _QWORD *v34; // r11
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // rax
  int v39; // edx
  PVOID *v40; // rdx
  __int64 v41; // rbx
  unsigned __int8 v42; // di
  unsigned int v43; // ebx
  signed __int32 v44; // edx
  __int16 v45; // ax
  __int64 v46; // rdi
  __int64 result; // rax
  unsigned __int64 v48; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v50; // [rsp+48h] [rbp-B8h]
  __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+80h] [rbp-80h] BYREF
  __int16 v57; // [rsp+84h] [rbp-7Ch]
  __int64 v58; // [rsp+88h] [rbp-78h]
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]

  v2 = a2;
  v3 = a1;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v52 = 0LL;
  v4 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v4;
  v5 = (((unsigned __int64)&a1[a2 - 1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v8 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
    v9 = 0;
    if ( v8 )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    v10 = dword_14034FF40[0];
    v7 = (unsigned int)dword_14034FF40[0];
    for ( LODWORD(v7) = dword_14034FF40[0] & 0xBFFFFFFF;
          (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000;
          v10 = dword_14034FF40[0] )
    {
      if ( (v10 & 0x40000000) == 0 )
      {
        v7 = v10;
        LODWORD(v7) = v10 | 0x40000000;
        _InterlockedCompareExchange(dword_14034FF40, v10 | 0x40000000, v10);
      }
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  v11 = 0xFFFFFFFFFLL;
  v12 = 0x58000000000LL;
  if ( v4 <= v5 )
  {
    v13 = v4 + 0x90482413000LL;
    do
    {
      v14 = *(_QWORD *)v4;
      if ( v13 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v7, v14)
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v16 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v16 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
      }
      v17 = 0;
      v18 = 48 * (v11 & (v14 >> 12)) - v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( (*(_QWORD *)(v18 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) );
        v11 = 0xFFFFFFFFFLL;
        v12 = 0x58000000000LL;
      }
      v7 = *(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v18 + 24) = v7;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 += 8LL;
      v13 += 8LL;
    }
    while ( v4 <= v48 );
    v3 = a1;
    v2 = a2;
    v5 = v48;
  }
  MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
  MiDeleteSystemPagableVm((__int64)dword_14034FF40, 0LL, v3, v2, 1, &v52);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v20 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v22 = 0;
    v8 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
    if ( v8 )
      v22 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    v23 = dword_14034FF40[0];
    Process = dword_14034FF40[0] & 0xBFFFFFFF;
    if ( (_DWORD)Process != 0x80000000 )
    {
      do
      {
        if ( (v23 & 0x40000000) == 0 )
        {
          Process = v23 | 0x40000000u;
          _InterlockedCompareExchange(dword_14034FF40, Process, v23);
        }
        if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v22);
        v23 = dword_14034FF40[0];
      }
      while ( (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  v24 = v50;
  if ( v50 <= v5 )
  {
    v25 = 0x90482413000LL;
    v26 = v50 + 0x90482413000LL;
    do
    {
      v27 = *(_QWORD *)v24;
      if ( v26 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v27)
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * ((v24 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v27 |= 0x20uLL;
          if ( (v29 & 0x42) != 0 )
            v27 |= 0x42uLL;
        }
      }
      v30 = 0;
      v31 = 48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v30);
        }
        while ( (*(_QWORD *)(v31 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
        v25 = 0x90482413000LL;
      }
      Process = *(_QWORD *)(v31 + 24) ^ (*(_QWORD *)(v31 + 24) ^ (*(_QWORD *)(v31 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v31 + 24) = Process;
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v31 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v32 = (__int64)(v24 << 25) >> 16;
        v33 = v32;
        v34 = (_QWORD *)(v32 + 4096);
        if ( v32 < v32 + 4096 )
        {
          v35 = v32 + v25;
          do
          {
            v36 = *(_QWORD *)v33;
            if ( v35 <= 0x7F8
              && (unsigned int)MiPteHasShadow(Process, v36)
              && (v36 & 1) != 0
              && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v37 = *(_QWORD *)(Process + 1520);
              if ( v37 )
              {
                v38 = *(_QWORD *)(v37 + 8 * ((v33 >> 3) & 0x1FF));
                if ( (v38 & 0x20) != 0 )
                  v36 |= 0x20uLL;
                if ( (v38 & 0x42) != 0 )
                  v36 |= 0x42uLL;
              }
            }
            if ( (v36 & 0xC01) != 0 )
              break;
            v39 = (v36 >> 5) & 0x1F;
            if ( v39 )
            {
              if ( v39 != 24LL )
                break;
            }
            v33 += 8LL;
            v35 += 8LL;
          }
          while ( v33 < (unsigned __int64)v34 );
        }
        if ( (_QWORD *)v33 == v34 )
        {
          v40 = (PVOID *)PsLoadedModuleList;
          v41 = (__int64)(v32 << 25) >> 16;
          while ( 1 )
          {
            Process = (unsigned __int64)v40[6];
            if ( v24 >= ((Process >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
            {
              Process = (((*((unsigned int *)v40 + 16) + Process - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
              if ( v24 <= Process )
                break;
            }
            v40 = (PVOID *)*v40;
            if ( v40 == &PsLoadedModuleList )
              goto LABEL_91;
          }
          v40 = 0LL;
LABEL_91:
          if ( v40 )
          {
            MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v20);
            v58 = 20LL;
            v56 = 0;
            v57 = 0;
            v59 = 0LL;
            v60 = 0LL;
            MiInsertTbFlushEntry((__int64)&v56, v41, 512LL, 0);
            MiReturnSystemVa(v41, v41 + 0x200000, 3, (__int64)&v56);
            v42 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
            }
            else
            {
              v8 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
              v43 = 0;
              if ( v8 )
                v43 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
              v44 = dword_14034FF40[0];
              Process = dword_14034FF40[0] & 0xBFFFFFFF;
              if ( (_DWORD)Process != 0x80000000 )
              {
                do
                {
                  if ( (v44 & 0x40000000) == 0 )
                  {
                    Process = v44 | 0x40000000u;
                    _InterlockedCompareExchange(dword_14034FF40, Process, v44);
                  }
                  if ( (++v43 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v43);
                  v44 = dword_14034FF40[0];
                }
                while ( (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000 );
              }
            }
            v20 = v42;
          }
        }
      }
      v24 += 8LL;
      v26 += 8LL;
      v25 = 0x90482413000LL;
    }
    while ( v24 <= v48 );
    v2 = a2;
  }
  MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, v20);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v45 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v45;
  if ( !v45
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  MiReturnResidentAvailable(v2);
  _InterlockedExchangeAdd64(&qword_14034FA10, v2);
  v46 = v2 - v53;
  result = MiReturnCommit((__int64)MiSystemPartition, v46);
  qword_14034FCD8 -= v46;
  return result;
}
