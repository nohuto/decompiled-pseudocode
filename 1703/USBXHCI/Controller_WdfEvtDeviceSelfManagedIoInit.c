/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0008660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Controller_InUseByDebugger @ 0x1C0008488 (Controller_InUseByDebugger.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0008FA0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_SetDeviceDescription @ 0x1C004D100 (Controller_SetDeviceDescription.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C004D534 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004DF0C (Controller_PopulateHardwareVerifierFlags.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rax
  int v6; // edx
  NTSTATUS v8; // eax
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 64), v2, 3, 54, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v1);
  }
  if ( (unsigned __int8)Controller_InUseByDebugger((_QWORD *)v3) )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 64), v4, 3, 55, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v1);
    v8 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           Controller_LPEEnterExitCallback,
           (PVOID)v3,
           (PVOID *)(v3 + 408));
    if ( v8 < 0 )
    {
      LODWORD(v9) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        3u,
        3u,
        0x38u,
        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
        v9);
    }
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlagsFromKse(v3);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(v3);
  if ( (*(_QWORD *)(v3 + 232) & 0x400000000LL) != 0 )
  {
    v5 = CommonBuffer_AcquireBuffer(*(PVOID *)(v3 + 88));
    *(_QWORD *)(v3 + 344) = v5;
    if ( !v5 )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 64), v6, 3, 57, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v1);
    }
  }
  return 0LL;
}
