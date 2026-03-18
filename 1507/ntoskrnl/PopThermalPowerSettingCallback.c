/*
 * XREFs of PopThermalPowerSettingCallback @ 0x140159E74
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1406B8174 (PopThermalZoneUpdateCoolingPolicy.c)
 */

__int64 __fastcall PopThermalPowerSettingCallback(_QWORD *a1, unsigned int *a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct _KTHREAD *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&PopThermalLock, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&PopThermalLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&PopThermalLock, v8, (ULONG_PTR)&PopThermalLock, v9);
  v12 = 1LL;
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v13 = KeGetCurrentThread();
  qword_14032E098 = (__int64)v13;
  v14 = *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 == *a1 )
    v14 = *(_QWORD *)GUID_SYSTEM_COOLING_POLICY.Data4 - a1[1];
  if ( v14 || a3 != 4 )
  {
    v15 = dword_14032E888;
  }
  else
  {
    v15 = *a2;
    dword_14032E888 = *a2;
  }
  if ( !PopPlatformAoAc || PopConsoleDisplayState )
    v12 = v15;
  if ( (_DWORD)v12 != PopCoolingMode )
  {
    PopCoolingMode = v12;
    PopThermalZoneUpdateCoolingPolicy();
    v13 = (struct _KTHREAD *)qword_14032E098;
  }
  if ( v13 )
    qword_14032E098 = 0LL;
  _m_prefetchw(&PopThermalLock);
  v16 = PopThermalLock - 16;
  if ( (PopThermalLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (PopThermalLock & 2) != 0
    || (v17 = PopThermalLock,
        v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopThermalLock, v16, PopThermalLock)) )
  {
    ExfReleasePushLock(&PopThermalLock, v12);
  }
  KeAbPostRelease((ULONG_PTR)&PopThermalLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
