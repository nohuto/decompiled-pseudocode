/*
 * XREFs of PopThermalUpdateTelemetryClientCount @ 0x140170B24
 * Callers:
 *     PopThermalZoneAdd @ 0x1405C343C (PopThermalZoneAdd.c)
 *     PopAssociateThermalRequest @ 0x1405C3744 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406B296C (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 */

void __fastcall PopThermalUpdateTelemetryClientCount(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopThermalTelemetryLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopThermalTelemetryLock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PopThermalTelemetryLock, v6, (ULONG_PTR)&PopThermalTelemetryLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14032DF68 = (__int64)KeGetCurrentThread();
  if ( a1 )
  {
    if ( ++PopThermalTelemetryClientCount == 1 )
    {
      v15[1] = -1LL;
      v15[0] = 0LL;
      KeSetTimer2((__int64)&PopThermalTelemetryTimer, -864000000000LL, 0LL, (__int64)v15);
    }
  }
  else if ( !--PopThermalTelemetryClientCount )
  {
    KeCancelTimer2((__int64)&PopThermalTelemetryTimer);
  }
  if ( qword_14032DF68 )
    qword_14032DF68 = 0LL;
  _m_prefetchw(&PopThermalTelemetryLock);
  v11 = PopThermalTelemetryLock - 16;
  if ( (PopThermalTelemetryLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (PopThermalTelemetryLock & 2) != 0
    || (v12 = PopThermalTelemetryLock,
        v12 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PopThermalTelemetryLock,
                 v11,
                 PopThermalTelemetryLock)) )
  {
    ExfReleasePushLock(&PopThermalTelemetryLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PopThermalTelemetryLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
