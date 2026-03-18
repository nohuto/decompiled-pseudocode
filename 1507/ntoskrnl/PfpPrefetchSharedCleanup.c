/*
 * XREFs of PfpPrefetchSharedCleanup @ 0x140458F0C
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x14042D1C0 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404738D4 (PsSetCurrentThreadPrefetching.c)
 */

void __fastcall PfpPrefetchSharedCleanup(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rsi
  __int64 *v10; // rdx
  __int64 **v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  unsigned __int64 v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&qword_140353600, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353600, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140353600, v6, (ULONG_PTR)&qword_140353600, v7);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = (__int64 *)*a1;
    v11 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v11 != a1 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = (__int64)v11;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353600, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353600);
    KeAbPostRelease((ULONG_PTR)&qword_140353600);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( (*((_DWORD *)a1 + 17) & 1) != 0 )
  {
    _m_prefetchw(&stru_1403535F0);
    v14 = stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v14 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&stru_1403535F0,
                  (stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_1403535F0);
    *((_DWORD *)a1 + 17) &= ~1u;
  }
  if ( a1[2] )
    PsSetCurrentThreadPrefetching((*((_DWORD *)a1 + 17) & 2) != 0);
  if ( (*((_DWORD *)a1 + 17) & 8) != 0 )
  {
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
