/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x140469428
 * Callers:
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmEnforceWorkingSetLimit @ 0x140076D74 (MmEnforceWorkingSetLimit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x1401E296C (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r14
  int v4; // esi
  int v5; // r13d
  _BYTE *v6; // rax
  _BYTE *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  unsigned __int64 v12; // [rsp+20h] [rbp-78h]
  unsigned __int64 v13; // [rsp+28h] [rbp-70h]
  _BYTE v14[48]; // [rsp+38h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v14);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v13 = *(_QWORD *)(v3 + 792);
  v12 = *(_QWORD *)(v3 + 800);
  v5 = 2 - ((*(_BYTE *)(v3 + 848) & 1) != 0);
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402F9CD0, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402F9CD0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402F9CD0, v6, (ULONG_PTR)&qword_1402F9CD0);
  if ( v7 )
    v7[26] |= 1u;
  _InterlockedOr((volatile signed __int32 *)(v3 + 1304), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v13, v12, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402F9CD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402F9CD0);
    KeAbPostRelease((ULONG_PTR)&qword_1402F9CD0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v8 = *(_QWORD *)(a1 + 1016);
    if ( v8 )
    {
      if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 736)) )
      {
        v9 = 0LL;
        v10 = *(__int64 **)(a1 + 1064);
        if ( v10 )
          v9 = *v10;
        _interlockedbittestandset((volatile signed __int32 *)(v8 + 80), 0);
        if ( v9 )
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 40), 0);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 736));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402F9CD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402F9CD0);
    KeAbPostRelease((ULONG_PTR)&qword_1402F9CD0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
  return (unsigned int)v4;
}
