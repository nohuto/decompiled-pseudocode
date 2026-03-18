/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x140505800
 * Callers:
 *     WdipSemDisableScenario @ 0x140505648 (WdipSemDisableScenario.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1405058F4 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rsi
  __int64 EnabledInstanceTable; // rax
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_1402DA7B8, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DA7B8, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DA7B8, v5, (ULONG_PTR)&qword_1402DA7B8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v4 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v4 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
  _m_prefetchw(&qword_1402DA7B8);
  if ( (qword_1402DA7B8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_1402DA7B8 - 16;
  if ( (qword_1402DA7B8 & 2) != 0
    || (v9 = qword_1402DA7B8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DA7B8, v2, qword_1402DA7B8)) )
  {
    ExfReleasePushLock(&qword_1402DA7B8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DA7B8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
