/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00051E0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C0006030 (Controller_PopulateDeviceFlagsFromKse.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Controller_SetDeviceDescription @ 0x1C0047CB0 (Controller_SetDeviceDescription.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C004A3DC (Controller_PopulateHardwareVerifierFlags.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoInit(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // edx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     a1,
                     off_1C0040270)
                 + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 64), v2, 3, 54, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v1);
  }
  Controller_SetDeviceDescription(v3);
  Controller_PopulateHardwareVerifierFlags(v3);
  Controller_PopulateDeviceFlagsFromKse(v3);
  if ( (*(_QWORD *)(v3 + 232) & 0x400000000LL) != 0 )
  {
    v4 = CommonBuffer_AcquireBuffer(*(PVOID *)(v3 + 88));
    *(_QWORD *)(v3 + 336) = v4;
    if ( !v4 )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 64), v5, 3, 55, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v1);
    }
  }
  return 0LL;
}
