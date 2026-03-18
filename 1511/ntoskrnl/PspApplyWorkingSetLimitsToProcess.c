/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x1403E9200
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x1401D2A7C (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // rsi
  int v4; // r14d
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  unsigned __int64 v12; // [rsp+20h] [rbp-78h]
  unsigned __int64 v13; // [rsp+30h] [rbp-68h]
  $D4FCF91253F76F57393CBFE908971F67 v14; // [rsp+38h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v14);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v12 = *(_QWORD *)(v3 + 792);
  v13 = *(_QWORD *)(v3 + 800);
  v5 = 2 - ((*(_BYTE *)(v3 + 856) & 1) != 0);
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_1402D4950, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402D4950, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1402D4950, v6, (ULONG_PTR)&qword_1402D4950);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  _InterlockedOr((volatile signed __int32 *)(v3 + 1296), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v12, v13, 0LL, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1296), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402D4950, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402D4950);
    KeAbPostRelease((ULONG_PTR)&qword_1402D4950);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v8 = *(_QWORD *)(a1 + 1016);
    if ( v8 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 736)) )
      {
        v9 = 0LL;
        v10 = *(__int64 **)(a1 + 1064);
        if ( v10 )
          v9 = *v10;
        _interlockedbittestandset((volatile signed __int32 *)(v8 + 80), 0);
        if ( v9 )
          _interlockedbittestandset((volatile signed __int32 *)(v9 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 736));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1296), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402D4950, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402D4950);
    KeAbPostRelease((ULONG_PTR)&qword_1402D4950);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess(&v14, 0LL);
  return (unsigned int)v4;
}
