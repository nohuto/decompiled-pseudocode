/*
 * XREFs of WdipSemActivateInstance @ 0x140541F30
 * Callers:
 *     WdipSemDisableScenario @ 0x1404C6A5C (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140541D18 (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
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
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDEF8, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDEF8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDEF8, v3, (ULONG_PTR)&qword_1402FDEF8);
  v6 = 0LL;
  if ( v5 )
    v5[26] |= 1u;
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_1402FDEF8);
  if ( (qword_1402FDEF8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = qword_1402FDEF8 - 16;
  if ( (qword_1402FDEF8 & 2) != 0
    || (v7 = qword_1402FDEF8,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDEF8, v6, qword_1402FDEF8)) )
  {
    ExfReleasePushLock(&qword_1402FDEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDEF8);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
}
