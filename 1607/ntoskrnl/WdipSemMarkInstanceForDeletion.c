/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1404E3F5C
 * Callers:
 *     WdipSemDisableScenario @ 0x1404E3DA4 (WdipSemDisableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1404E4050 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  __int64 v4; // rdi
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rsi
  __int64 EnabledInstanceTable; // rax
  ULONG_PTR v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDF18, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDF18, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDF18, v5, (ULONG_PTR)&qword_1402FDF18);
  if ( v7 )
    v7[26] |= 1u;
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
  _m_prefetchw(&qword_1402FDF18);
  if ( (qword_1402FDF18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_1402FDF18 - 16;
  if ( (qword_1402FDF18 & 2) != 0
    || (v9 = qword_1402FDF18,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDF18, v2, qword_1402FDF18)) )
  {
    ExfReleasePushLock(&qword_1402FDF18);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDF18);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v4;
}
