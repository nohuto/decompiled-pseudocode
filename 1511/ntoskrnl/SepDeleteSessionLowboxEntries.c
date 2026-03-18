/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1400D52A0
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlDeleteHashTable @ 0x1400F4564 (RtlDeleteHashTable.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteSessionLowboxEntries(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v2; // rdi
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _KPROCESS *Process; // rax
  int v8; // eax
  __int16 v9; // ax
  __int64 v11; // rax
  volatile signed __int64 *i; // r15
  struct _KTHREAD *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int64 *v15; // r12
  struct _KTHREAD *v16; // rsi
  unsigned __int8 v17; // al
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r14
  struct _KPROCESS *v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int16 v24; // ax
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned int v27; // r9d
  unsigned int v28; // r11d
  __int64 v29; // r10
  _QWORD *v30; // rcx
  __int64 j; // rax
  unsigned int v32; // ecx
  volatile signed __int64 v33; // rcx
  volatile signed __int64 **v34; // rax

  if ( !g_SessionLowboxMap )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KiAbEnabled )
  {
    v2 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v2, (ULONG_PTR)&LowboxSessionMapLock, KeGetCurrentIrql(), 0LL);
    --v2->SpecialApcDisable;
    if ( !v2->AbEntrySummary )
    {
      if ( !v2->AbOrphanedEntrySummary )
      {
        v6 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v2, &LowboxSessionMapLock);
        goto LABEL_15;
      }
      AbOrphanedEntrySummary = v2->AbOrphanedEntrySummary;
      v2->AbOrphanedEntrySummary = 0;
      v2->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v2->AbEntrySummary;
    _BitScanForward((unsigned int *)&v5, AbEntrySummary);
    v2->AbEntrySummary = AbEntrySummary & ~(1 << v5);
    a1 = 96 * v5;
    v6 = (__int64)v2->LockEntries + a1;
    if ( v6 )
    {
      if ( (unsigned __int64)(&LowboxSessionMapLock + 0xE000000000LL) > 0x7FFFFFFFFFLL
        || (Process = v2->ApcState.Process, (a1 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v8 = -1;
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 8);
      }
      *(_DWORD *)(v6 + 40) = v8;
      *(_QWORD *)(v6 + 32) = (unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_18:
      v9 = v2->SpecialApcDisable + 1;
      v2->SpecialApcDisable = v9;
      if ( !v9 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
        KiCheckForKernelApcDelivery(a1);
      goto LABEL_22;
    }
LABEL_15:
    _interlockedbittestandset((volatile signed __int32 *)&v2->116 + 1, 0xFu);
    goto LABEL_18;
  }
  v6 = 0LL;
LABEL_22:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v6, (ULONG_PTR)&LowboxSessionMapLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v11 = g_SessionLowboxMap;
  for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)v11; i = v15 )
  {
    v13 = KeGetCurrentThread();
    v14 = (volatile signed __int32 *)(i + 3);
    v15 = (volatile signed __int64 *)*i;
    --v13->KernelApcDisable;
    if ( KiAbEnabled )
    {
      v16 = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v16, (ULONG_PTR)(i + 3), KeGetCurrentIrql(), 0LL);
      --v16->SpecialApcDisable;
      if ( v16->AbEntrySummary )
      {
LABEL_33:
        v18 = v16->AbEntrySummary;
        _BitScanForward((unsigned int *)&v19, v18);
        v16->AbEntrySummary = v18 & ~(1 << v19);
        a1 = 96 * v19;
        v20 = (__int64)v16->LockEntries + a1;
        if ( !v20 )
          goto LABEL_40;
        if ( (unsigned __int64)(i + 0xE000000003LL) > 0x7FFFFFFFFFLL
          || (v21 = v16->ApcState.Process, (v22 = v21[1].ActiveProcessors.Bitmap[2]) == 0)
          || v21 == PsInitialSystemProcess )
        {
          v23 = -1;
        }
        else
        {
          v23 = *(_DWORD *)(v22 + 8);
        }
        *(_DWORD *)(v20 + 40) = v23;
        a1 = 0x7FFFFFFFFFFFFFFCLL;
        *(_QWORD *)(v20 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
      }
      else
      {
        if ( v16->AbOrphanedEntrySummary )
        {
          v17 = v16->AbOrphanedEntrySummary;
          v16->AbOrphanedEntrySummary = 0;
          v16->AbEntrySummary |= v17;
          goto LABEL_33;
        }
        v20 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v16, i + 3);
LABEL_40:
        _interlockedbittestandset((volatile signed __int32 *)&v16->116 + 1, 0xFu);
      }
      v24 = v16->SpecialApcDisable + 1;
      v16->SpecialApcDisable = v24;
      if ( !v24 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(a1);
      goto LABEL_47;
    }
    v20 = 0LL;
LABEL_47:
    if ( _interlockedbittestandset64(v14, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 3, v20, (ULONG_PTR)(i + 3));
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    v25 = *((_QWORD *)i + 5);
    if ( (v25 & 4) != 0 )
    {
      v26 = 1LL;
      v27 = 32;
    }
    else
    {
      v26 = 0LL;
      v27 = 0;
    }
    v28 = v27 + *((_DWORD *)i + 8) - 1;
    v29 = v25 - 4 * v26;
    if ( !*((_DWORD *)i + 8) )
      goto LABEL_65;
    v30 = (_QWORD *)(v29 + 8 * ((unsigned __int64)v27 >> 6));
    for ( j = ((1LL << (v27 & 0x3F)) - 1) | ~*v30; j == -1; j = ~*v30 )
    {
      if ( (unsigned __int64)++v30 > v29 + 8 * ((unsigned __int64)v28 >> 6) )
        goto LABEL_65;
    }
    _BitScanForward64((unsigned __int64 *)&j, ~j);
    v32 = j + ((unsigned int)(((__int64)v30 - v29) >> 3) << 6);
    if ( v32 > v28 || v32 == -1 || v32 - v27 == -1 )
    {
LABEL_65:
      RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
      ExFreePoolWithTag(*((PVOID *)i + 5), 0);
      v33 = *i;
      v34 = (volatile signed __int64 **)*((_QWORD *)i + 1);
      if ( *(volatile signed __int64 **)(*i + 8) != i || *v34 != i )
        __fastfail(3u);
      *v34 = (volatile signed __int64 *)v33;
      *(_QWORD *)(v33 + 8) = v34;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(i + 3);
      KeAbPostRelease((ULONG_PTR)(i + 3));
      KeLeaveCriticalRegion();
      ExFreePoolWithTag((PVOID)i, 0);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(i + 3);
      KeAbPostRelease((ULONG_PTR)(i + 3));
      KeLeaveCriticalRegion();
    }
    v11 = g_SessionLowboxMap;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
  KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
  KeLeaveCriticalRegion();
}
