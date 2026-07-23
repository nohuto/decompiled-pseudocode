/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x1404C6E44
 * Callers:
 *     WdipSemDisableScenario @ 0x1404C6A5C (WdipSemDisableScenario.c)
 *     WdipTimeoutCheckRoutine @ 0x1404FF634 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x140541D18 (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  signed __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  ULONG_PTR v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDEF8, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDEF8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDEF8, v3, (ULONG_PTR)&qword_1402FDEF8);
  v6 = 0LL;
  if ( v5 )
    v5[26] |= 1u;
  v7 = *a1;
  v8 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v8 != a1 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --dword_1402FDEF0;
  _m_prefetchw(&qword_1402FDEF8);
  if ( (qword_1402FDEF8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = qword_1402FDEF8 - 16;
  if ( (qword_1402FDEF8 & 2) != 0
    || (v9 = qword_1402FDEF8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDEF8, v6, qword_1402FDEF8)) )
  {
    ExfReleasePushLock(&qword_1402FDEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDEF8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return WdipSemFastFree(3LL, a1);
}
