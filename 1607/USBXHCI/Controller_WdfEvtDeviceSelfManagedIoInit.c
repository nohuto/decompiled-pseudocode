/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0009270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00076D0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     Controller_InUseByDebugger @ 0x1C00094D0 (Controller_InUseByDebugger.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004BFBC (Controller_PopulateHardwareVerifierFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x1C004DCC4 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 *     Controller_SetDeviceDescription @ 0x1C004DD90 (Controller_SetDeviceDescription.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // r8d
  __int64 *v5; // rax
  NTSTATUS v7; // eax
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
                 + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v2 + 64),
      5u,
      3u,
      0x36u,
      (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      a1);
  if ( (unsigned __int8)Controller_InUseByDebugger(v2) )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v2 + 64),
      4u,
      3u,
      0x37u,
      (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
      a1);
    v7 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_LOW_POWER_EPOCH,
           Controller_LPEEnterExitCallback,
           (PVOID)v2,
           (PVOID *)(v2 + 408));
    if ( v7 < 0 )
    {
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 64),
        3u,
        3u,
        0x38u,
        (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
        v8);
    }
  }
  Controller_SetDeviceDescription(v2);
  Controller_PopulateHardwareVerifierFlags(v2);
  Controller_PopulateDeviceFlagsFromKse(v2, v3, v4);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(v2);
  if ( (*(_QWORD *)(v2 + 232) & 0x400000000LL) != 0 )
  {
    v5 = CommonBuffer_AcquireBuffer(*(KSPIN_LOCK **)(v2 + 88), 0x200u, v2, 0x31727443u);
    *(_QWORD *)(v2 + 344) = v5;
    if ( !v5 )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v2 + 64),
        3u,
        3u,
        0x39u,
        (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
        a1);
  }
  return 0LL;
}
