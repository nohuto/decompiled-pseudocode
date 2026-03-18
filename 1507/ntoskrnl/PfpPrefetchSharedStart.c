/*
 * XREFs of PfpPrefetchSharedStart @ 0x140458AC8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404738D4 (PsSetCurrentThreadPrefetching.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rtt
  struct _KTHREAD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rsi
  __int64 v10; // rax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(a1 + 68) |= 8u;
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 68) ^= (*(_DWORD *)(a1 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  _m_prefetchw(&stru_1403535F0);
  v4 = stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v4 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_1403535F0,
               (stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&stru_1403535F0) )
  {
    return 3221226169LL;
  }
  *(_DWORD *)(a1 + 68) |= 1u;
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_140353600, 0LL, 0LL, v3);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353600, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_140353600, v6, (ULONG_PTR)&qword_140353600, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (dword_140353618 & 1) == 0 )
  {
    v10 = qword_140353608;
    *(_QWORD *)a1 = qword_140353608;
    *(_QWORD *)(a1 + 8) = &qword_140353608;
    if ( *(__int64 **)(v10 + 8) != &qword_140353608 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = a1;
    qword_140353608 = a1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353600, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353600);
  KeAbPostRelease((ULONG_PTR)&qword_140353600);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return *(_QWORD *)a1 == 0LL ? 0xC00002B9 : 0;
}
