/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC
 * Callers:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x140213DAC (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r14
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r13
  __int16 v10; // ax
  __int64 v11; // rbx
  unsigned __int64 v12; // rtt
  __int64 v13; // rax
  unsigned __int64 v14; // rtt
  __int16 v16; // ax
  unsigned __int64 v17; // [rsp+20h] [rbp-78h]
  unsigned __int64 v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[48]; // [rsp+38h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v19);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v17 = *(_QWORD *)(v3 + 792);
  v18 = *(_QWORD *)(v3 + 800);
  v5 = 2 - ((*(_BYTE *)(v3 + 856) & 1) != 0);
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_140323A70, 0LL, 0LL, v6);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140323A70, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140323A70, v7, (ULONG_PTR)&qword_140323A70, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  _InterlockedOr((volatile signed __int32 *)(v3 + 1296), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v17, v18, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1296), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140323A70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140323A70);
    KeAbPostRelease((ULONG_PTR)&qword_140323A70);
    v10 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v11 = *(_QWORD *)(a1 + 1016);
    if ( v11 )
    {
      _m_prefetchw((const void *)(a1 + 736));
      v12 = *(_QWORD *)(a1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 736), v12 + 2, v12)
        || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 736)) )
      {
        v13 = *(_QWORD *)(a1 + 1064);
        _interlockedbittestandset((volatile signed __int32 *)(v11 + 80), 0);
        if ( v13 )
          _interlockedbittestandset((volatile signed __int32 *)(v13 + 40), 0);
        _m_prefetchw((const void *)(a1 + 736));
        v14 = *(_QWORD *)(a1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 736), v14 - 2, v14) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 736));
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140323A70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140323A70);
    KeAbPostRelease((ULONG_PTR)&qword_140323A70);
    v16 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
  return (unsigned int)v4;
}
