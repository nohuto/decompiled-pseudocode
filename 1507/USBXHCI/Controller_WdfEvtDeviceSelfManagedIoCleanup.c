/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C004F6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C004F368 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx

  v2 = *(__int64 **)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                       a1,
                       off_1C0040270)
                   + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(v2[8], 5u, 3u, 0x3Bu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, a1);
  v3 = v2[42];
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(v2[11], v3);
    v2[42] = 0LL;
  }
  return Controller_UpdateSqmDatapoints((__int64)v2);
}
