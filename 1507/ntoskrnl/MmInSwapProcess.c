/*
 * XREFs of MmInSwapProcess @ 0x140110ACC
 * Callers:
 *     KiInSwapProcesses @ 0x140110624 (KiInSwapProcesses.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14002B690 (MiReturnWsToExpansionList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14020ACBC (KeMakeKernelDirectoryTableBase.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x140210604 (MiUpdateSystemPdes.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     EtwTraceInswapProcess @ 0x14025D050 (EtwTraceInswapProcess.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall MmInSwapProcess(unsigned __int64 Object)
{
  int v2; // edx
  unsigned __int64 v3; // rcx
  __int64 v4; // r9
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // r9
  __int64 PteShadow; // rax
  __int64 OutswappedPageResident; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  int v20; // edx
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // r14
  char *v24; // r15
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rax
  char result; // al
  unsigned __int8 v38[8]; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-21h] BYREF
  int v40; // [rsp+48h] [rbp-19h]
  __int64 v41; // [rsp+50h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-9h] BYREF
  char v43; // [rsp+70h] [rbp+Fh] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp+27h] BYREF

  if ( (*(_DWORD *)(Object + 772) & 0x80u) != 0 )
  {
    v2 = *(unsigned __int16 *)(Object + 568);
    v40 = v2;
    if ( (*(_BYTE *)(8 * ((Object >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
      && (*(_BYTE *)(((Object >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
      && (v3 = *(_QWORD *)(((Object >> 18) & 0x3FFFFFF8) - 0x904C0000000LL), (v3 & 0x81) == 0x81) )
    {
      LODWORD(v4) = (v3 >> 12) + ((Object >> 12) & 0x1FF);
    }
    else
    {
      v5 = (unsigned __int64 *)(((Object >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v6 = *v5;
      if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
      {
        PteShadow = MiReadPteShadow(v5, *v5);
        v2 = v40;
        v6 = PteShadow;
      }
      v4 = (v6 >> 12) & 0xFFFFFFFFFLL;
    }
    OutswappedPageResident = MiMakeOutswappedPageResident(Object, 2109661032, ((_WORD)Object + 1088) & 0xFFF, v4, v2);
    v39 = OutswappedPageResident;
    v9 = OutswappedPageResident;
    if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
      v9 = MiReadPteShadow(&v39, OutswappedPageResident);
    v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
    v41 = v10;
    v11 = MiMapPageInHyperSpaceWorker(v10, v38);
    v12 = v11;
    *(_QWORD *)(v11 + 3944) = OutswappedPageResident;
    if ( v11 + 0x90482413F68LL <= 0x7F8 )
      MiWritePteShadow(v11 + 3944, OutswappedPageResident);
    MiUnmapPageInHyperSpaceWorker(v12, v38[0]);
    v13 = 48 * v10 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v16 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)v13 = Object;
    v17 = v16 ^ (v16 ^ (v16 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    v18 = v10 ^ *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 24) = v17;
    *(_QWORD *)(v13 + 40) ^= v18 & 0xFFFFFFFFFLL;
    *(_QWORD *)(v13 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    v19 = &v44;
    v44 = 0xFFFFF6FAC0084020uLL;
    v20 = 3;
    do
    {
      --v19;
      *v19 = ((v19[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v20;
    }
    while ( v20 );
    LODWORD(v21) = v10;
    v22 = v40;
    v23 = 4LL;
    v24 = &v43;
    v25 = 4LL;
    do
    {
      v26 = MiMakeOutswappedPageResident(Object, *(_QWORD *)v24, *(_DWORD *)v24 & 0xFFF, v21, v22);
      v28 = 2040LL;
      v39 = v26;
      v29 = v26;
      v30 = v26;
      if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
        && (unsigned int)MiPteHasShadow(v27, v26)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v31 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 8 * (((unsigned __int64)&v39 >> 3) & 0x1FF));
          v29 = v39;
          if ( (v32 & 0x20) != 0 )
            v30 = v39 | 0x20;
          if ( (v32 & 0x42) != 0 )
            v30 |= 0x42uLL;
        }
        else
        {
          v29 = v39;
          v30 = v39;
        }
      }
      v33 = 1LL;
      v21 = (v30 >> 12) & 0xFFFFFFFFFLL;
      v24 += 8;
      *(_QWORD *)(48 * v21 - 0x58000000000LL) = v23--;
      --v25;
    }
    while ( v25 );
    v34 = v41;
    if ( (unsigned __int64)&STACK[0x90482413040] <= v28
      && (unsigned int)MiPteHasShadow(0xFFFFFA8000000000uLL, v29)
      && ((unsigned __int8)v29 & (unsigned __int8)v33) != 0
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      v35 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 8 * (((unsigned __int64)&v39 >> 3) & 0x1FF));
        if ( (v36 & 0x20) != 0 )
          v29 = v39 | 0x20;
        if ( (v36 & 0x42) != 0 )
          v29 |= 0x42uLL;
      }
      else
      {
        v29 = v39;
      }
    }
    *(_QWORD *)(Object + 864) = (v29 >> 12) & 0xFFFFFFFFFLL;
    *(_QWORD *)(Object + 1376) = v33;
    *(_QWORD *)(Object + 1384) = v33;
    *(_QWORD *)(Object + 1392) = 5LL;
    *(_QWORD *)(Object + 1400) = 5LL;
    *(_QWORD *)(Object + 40) = KeMakeKernelDirectoryTableBase(v34 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    while ( (*(_DWORD *)(Object + 772) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(Object + 772), 0xFF7FFFFF);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      MiUpdateSystemPdes(Object);
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    }
    MiReturnWsToExpansionList(Object + 1272, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(Object + 772), 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(Object);
  }
  _InterlockedAnd((volatile signed __int32 *)(Object + 772), 0xFFFFFFBF);
  result = *(_BYTE *)(Object + 1491) & 0xC0;
  if ( result == (char)0x80 )
    return MiReAcquireOutSwappedProcessCommit((PVOID)Object);
  return result;
}
