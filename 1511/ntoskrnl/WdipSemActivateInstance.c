/*
 * XREFs of WdipSemActivateInstance @ 0x140505C38
 * Callers:
 *     WdipSemDisableScenario @ 0x140505648 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140505934 (WdipSemEnableScenario.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rbx
  signed __int64 v6; // rcx
  ULONG_PTR v7; // rtt

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
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_1402DA7B8);
  if ( (qword_1402DA7B8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = qword_1402DA7B8 - 16;
  if ( (qword_1402DA7B8 & 2) != 0
    || (v7 = qword_1402DA7B8,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DA7B8, v6, qword_1402DA7B8)) )
  {
    ExfReleasePushLock(&qword_1402DA7B8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DA7B8);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
