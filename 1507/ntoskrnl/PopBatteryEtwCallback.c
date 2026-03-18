/*
 * XREFs of PopBatteryEtwCallback @ 0x1406B669C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14014F8E0 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, __int64 MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  struct _KTHREAD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  __int64 v12; // rdx
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, MatchAnyKeyword);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v5, (ULONG_PTR)&PopPolicyDeviceLock, v6);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)&PopCB, 0LL, 0LL, v6);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopCB, 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&PopCB, v8, (ULONG_PTR)&PopCB, v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    qword_14032E988 = (__int64)KeGetCurrentThread();
    PopBatteryTraceSystemBatteryStatus(1);
    if ( qword_14032E988 )
      qword_14032E988 = 0LL;
    _m_prefetchw(&PopCB);
    v13 = PopCB - 16;
    if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (PopCB & 2) != 0
      || (v14 = PopCB, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v13, PopCB)) )
    {
      ExfReleasePushLock(&PopCB, v12);
    }
    KeAbPostRelease((ULONG_PTR)&PopCB);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( qword_14032DF48 )
      qword_14032DF48 = 0LL;
    _m_prefetchw(&PopPolicyDeviceLock);
    v18 = PopPolicyDeviceLock - 16;
    if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (PopPolicyDeviceLock & 2) != 0
      || (v19 = PopPolicyDeviceLock,
          v19 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PopPolicyDeviceLock,
                   v18,
                   PopPolicyDeviceLock)) )
    {
      ExfReleasePushLock(&PopPolicyDeviceLock, v15);
    }
    KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
