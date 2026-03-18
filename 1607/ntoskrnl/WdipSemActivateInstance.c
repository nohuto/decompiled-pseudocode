/*
 * XREFs of WdipSemActivateInstance @ 0x1405419F0
 * Callers:
 *     WdipSemDisableScenario @ 0x1404E3DA4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1405417D8 (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

__int64 __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  signed __int64 v6; // rcx
  ULONG_PTR v7; // rtt
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDF18, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDF18, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDF18, v3, (ULONG_PTR)&qword_1402FDF18);
  v6 = 0LL;
  if ( v5 )
    v5[26] |= 1u;
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_1402FDF18);
  if ( (qword_1402FDF18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = qword_1402FDF18 - 16;
  if ( (qword_1402FDF18 & 2) != 0
    || (v7 = qword_1402FDF18,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDF18, v6, qword_1402FDF18)) )
  {
    ExfReleasePushLock(&qword_1402FDF18);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDF18);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
}
