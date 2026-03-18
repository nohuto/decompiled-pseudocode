/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C000F700
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C001034C (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase6(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rax
  char v3; // r8
  __int64 *v5; // rdx
  __int64 v6; // rcx
  POWER_STATE v7; // ebx
  struct _DEVICE_OBJECT *v8; // rdi
  __int64 v10; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = qword_1C002C340;
  v3 = 0;
  v5 = qword_1C002C340;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = *(__int64 **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(__int64 **)(v1 + 568);
    }
  }
  v10 = (__int64)v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v5,
    10,
    79,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v3,
    (__int64)v2,
    v10);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 496);
  *(POWER_STATE *)(v1 + 336) = v7;
  v8 = *(struct _DEVICE_OBJECT **)(v1 + 720);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v8 )
    PoSetPowerState(v8, DevicePowerState, v7);
  *(_DWORD *)(a1 + 256) = 0;
  ACPIDeviceCompletePhase3Common(a1 + 208, 0LL);
  return 0LL;
}
