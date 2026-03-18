/*
 * XREFs of MiExpandPtes @ 0x140016404
 * Callers:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140018A70 (MiObtainSystemVa.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiObtainSessionVa @ 0x1400EDA74 (MiObtainSessionVa.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r15
  int v5; // r8d
  unsigned int v6; // edi
  unsigned int v7; // edx
  int v8; // r13d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 CurrentThread; // rcx
  unsigned __int64 AbEntrySummary; // rdx
  unsigned __int64 v20; // r12
  int v21; // r12d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  char v25; // r10
  volatile signed __int32 *v26; // r8
  unsigned __int64 v27; // rcx
  ULONG_PTR v29; // r12
  struct _KTHREAD *v30; // rdi
  __int64 v31; // rcx
  char *v32; // r15
  int v33; // eax
  __int16 v34; // ax
  volatile signed __int64 *v35; // rdi
  struct _KPROCESS *Process; // rax
  unsigned __int64 v37; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // [rsp+30h] [rbp-98h]
  unsigned __int64 v42; // [rsp+38h] [rbp-90h]
  unsigned __int64 v43; // [rsp+40h] [rbp-88h]
  unsigned __int64 v44; // [rsp+48h] [rbp-80h]
  unsigned __int64 v46; // [rsp+58h] [rbp-70h]
  unsigned __int64 v47; // [rsp+60h] [rbp-68h]
  __int64 v48; // [rsp+68h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v50; // [rsp+D8h] [rbp+10h]
  unsigned int v51; // [rsp+E0h] [rbp+18h]

  v2 = a2 + 511;
  v3 = a2;
  if ( a2 + 511 < a2 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  v50 = v6;
  v7 = 1;
  v8 = 0;
  if ( (v5 & 4) != 0 )
    v7 = 16;
  v51 = 16;
  if ( v3 >= 0x200 && (__int64 *)a1 == &qword_1402FF7B0 )
    v8 = 1;
  v9 = v2 & 0xFFFFFFFFFFFFFE00uLL;
  v41 = v7;
  v10 = v9 >> 9;
  v46 = v9 / v7;
  v11 = v46;
  if ( (v5 & 2) != 0 )
  {
    v12 = v6;
    if ( v8 == 1 )
      v12 = 15LL;
    v13 = MiObtainSystemVa(v10, v12);
  }
  else
  {
    v51 = 1;
    v13 = MiObtainSessionVa(v10);
  }
  v14 = 0LL;
  v42 = v13;
  v15 = v13;
  if ( !v13 )
    return 0LL;
  v16 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = (unsigned int)((v16 - *(_QWORD *)(a1 + 16)) >> 3);
  v43 = v17;
  if ( v8 )
    goto LABEL_20;
  CurrentThread = (__int64)KeGetCurrentThread();
  AbEntrySummary = v17 % v41;
  v48 = CurrentThread;
  v20 = v17 / v41;
  v44 = v17 / v41;
  v47 = *(_QWORD *)(a1 + 8) + ((v17 / v41) >> 3);
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
  {
    --*(_WORD *)(CurrentThread + 486);
    v29 = *(_QWORD *)(a1 + 48);
    if ( !KiAbEnabled )
    {
      v32 = 0LL;
LABEL_50:
      if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
        ExfAcquirePushLockExclusiveEx(v29, v32, v29);
      LOBYTE(v20) = v44;
      if ( v32 )
        v32[26] |= 1u;
      v3 = a2;
      goto LABEL_13;
    }
    v30 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v30, v29, KeGetCurrentIrql(), 0LL);
    --v30->SpecialApcDisable;
    if ( !v30->AbEntrySummary )
    {
      if ( !v30->AbOrphanedEntrySummary )
      {
        v32 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v30, v29);
        goto LABEL_65;
      }
      AbOrphanedEntrySummary = v30->AbOrphanedEntrySummary;
      v30->AbOrphanedEntrySummary = 0;
      v30->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v30->AbEntrySummary;
    _BitScanForward((unsigned int *)&v31, AbEntrySummary);
    v30->AbEntrySummary = AbEntrySummary & ~(1 << v31);
    CurrentThread = 96 * v31;
    v32 = (char *)v30->LockEntries + CurrentThread;
    if ( v32 )
    {
      if ( v29 + 0x70000000000LL > 0x7FFFFFFFFFLL
        || (Process = v30->ApcState.Process, (v37 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v33 = -1;
      }
      else
      {
        v33 = *(_DWORD *)(v37 + 8);
      }
      *((_DWORD *)v32 + 10) = v33;
      CurrentThread = 0x7FFFFFFFFFFFFFFCLL;
      *((_QWORD *)v32 + 4) = v29 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_46;
    }
LABEL_65:
    _interlockedbittestandset((volatile signed __int32 *)&v30->116 + 1, 0xFu);
LABEL_46:
    v34 = v30->SpecialApcDisable + 1;
    v30->SpecialApcDisable = v34;
    if ( !v34 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery(CurrentThread, AbEntrySummary, v14);
    v6 = v50;
    goto LABEL_50;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
LABEL_13:
  v21 = MiSplitBitmapPages(v6, v47, v46 + (v20 & 7));
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( v21 == 1 )
    {
      v22 = (v9 + v43) / v41;
      if ( v22 > *(_QWORD *)a1 )
        *(_QWORD *)a1 = v22;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v35 = *(volatile signed __int64 **)(a1 + 48);
    if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v35);
    KeAbPostRelease((ULONG_PTR)v35);
    KiLeaveGuardedRegionUnsafe(v48);
    v6 = v50;
  }
  if ( !v21 )
  {
    v39 = v42;
LABEL_68:
    MiReturnSystemVa(v39, (__int64)((v16 << 25) + (v9 << 28)) >> 16, v6, 0LL);
    return 0LL;
  }
  v15 = v42;
  v11 = v46;
LABEL_20:
  if ( !(unsigned int)MiMakeZeroedPageTables(v16, v16 + 8 * (v9 - 1), v51, v6) )
  {
    v39 = v15;
    if ( v8 == 1 )
      v6 = 15;
    goto LABEL_68;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v11);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), v11);
  if ( (dword_1403810F0 & 2) != 0 && (__int64 *)a1 == &qword_1402FF7B0 )
  {
    v40 = qword_1402FF0C8 + ((2 * v43) >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v50, v40, ((2 * (_BYTE)v43) & 7) + 2 * v11) )
      dword_1403810F0 &= ~2u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v8 != 1 && v3 != v9 )
  {
    v23 = (v9 - v3) / v41;
    v24 = (v3 + v43) / v41;
    v25 = v24 & 0x1F;
    v26 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v24 >> 5));
    if ( v23 + (v24 & 0x1F) <= 0x20 )
    {
      if ( v23 == 32 )
        *v26 = 0;
      else
        _InterlockedAnd(v26, ~(((1 << v23) - 1) << v25));
    }
    else
    {
      if ( (v24 & 0x1F) != 0 )
      {
        _InterlockedAnd(v26, ~(((1 << (32 - (v24 & 0x1F))) - 1) << v25));
        v23 -= 32 - (unsigned int)(v24 & 0x1F);
        ++v26;
      }
      if ( v23 >= 0x20 )
      {
        v27 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v26++ = 0;
          --v27;
        }
        while ( v27 );
      }
      if ( v23 )
        _InterlockedAnd(v26, ~((1 << v23) - 1));
    }
  }
  return v16;
}
