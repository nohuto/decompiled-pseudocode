/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C004F540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_ReleaseHardware @ 0x1C004E15C (Command_ReleaseHardware.c)
 *     DeviceSlot_ReleaseHardware @ 0x1C004F7FC (DeviceSlot_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0050A68 (Interrupter_ReleaseInterrupter.c)
 *     RootHub_ReleaseHardware @ 0x1C0050B78 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  unsigned int i; // edi
  void *v5; // rcx
  __int64 v6; // rbx
  void *v7; // rcx

  v2 = *(__int64 **)((*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                       a1,
                       off_1C0040270)
                   + 8);
  WPP_RECORDER_SF_q(v2[8], 4u, 3u, 0x34u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, a1);
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3056))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v2[32]);
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 3056))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v2[47]);
  RootHub_ReleaseHardware(v2[15]);
  Command_ReleaseHardware(v2[14]);
  DeviceSlot_ReleaseHardware(v2[13]);
  v3 = v2[12];
  if ( *(_QWORD *)(v3 + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 24); ++i )
      Interrupter_ReleaseInterrupter(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * i));
    ExFreePoolWithTag(*(PVOID *)(v3 + 32), 0x49434858u);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v5 = *(void **)(v3 + 56);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x49434858u);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  v6 = v2[10];
  v7 = *(void **)(v6 + 24);
  if ( v7 )
  {
    MmUnmapIoSpace(v7, *(unsigned int *)(v6 + 20));
    *(_BYTE *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
  }
  return 0LL;
}
