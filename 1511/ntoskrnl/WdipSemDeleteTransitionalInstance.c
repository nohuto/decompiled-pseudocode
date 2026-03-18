/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x1405048A0
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1404B691C (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140505648 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140505934 (WdipSemEnableScenario.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rbx
  signed __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1402DA7B8, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DA7B8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DA7B8, v3, (ULONG_PTR)&qword_1402DA7B8);
  v6 = 0LL;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = *a1;
  v8 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v8 != a1 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --dword_1402DA7B0;
  _m_prefetchw(&qword_1402DA7B8);
  if ( (qword_1402DA7B8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = qword_1402DA7B8 - 16;
  if ( (qword_1402DA7B8 & 2) != 0
    || (v9 = qword_1402DA7B8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DA7B8, v6, qword_1402DA7B8)) )
  {
    ExfReleasePushLock(&qword_1402DA7B8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DA7B8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
