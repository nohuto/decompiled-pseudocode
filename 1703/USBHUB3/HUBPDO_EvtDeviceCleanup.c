/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1C0015200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C0029A0C (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C0032E64 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C006AD00 (HUBPDO_BillboardCleanup.c)
 */

NTSTATUS __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // r14
  __int64 v3; // rbp
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  PVOID *v8; // rbx
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rcx
  NTSTATUS result; // eax
  __int64 v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v2 = *(_QWORD **)(v1 + 24);
  v3 = v2[3];
  v18 = v3;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    Template_p(LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink), &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v3);
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v1 + 416), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 < 0 )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2[1] + 1432LL),
      2u,
      5u,
      0x4Du,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      v4);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v1 + 416), "DRIPS SR Tag", 0x20u);
  v5 = *(void **)(v1 + 408);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    v6 = WdfFunctions_01015;
    *(_QWORD *)(v1 + 408) = 0LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v6 + 1632))(WdfDriverGlobals, v1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      6027LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v8 = (PVOID *)(v1 + 272);
  v9 = 5LL;
  do
  {
    if ( *v8 )
    {
      v10 = PoUnregisterPowerSettingCallback(*v8);
      if ( v10 < 0 )
      {
        LODWORD(v16) = v10;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL),
          2u,
          5u,
          0x4Cu,
          (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
          v16);
      }
      *v8 = 0LL;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  v11 = v18;
  if ( (*(_DWORD *)(v1 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v1 + 72, 6006LL, 0LL);
  v17 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(*v2 + 552LL))(*(_QWORD *)(*v2 + 240LL), &v17);
  KeClearEvent((PRKEVENT)(v2 + 196));
  HUBSM_AddEvent((__int64)(v2 + 61), 4063);
  HUBMISC_WaitForSignal(v2 + 196);
  HUBPDO_BillboardCleanup(v2);
  (*(void (__fastcall **)(_QWORD, char *))(*v2 + 560LL))(*(_QWORD *)(*v2 + 240LL), &v17);
  v12 = WdfFunctions_01015;
  v2[2] = 0LL;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(v12 + 1632))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v13,
    "DSM PDO Tag",
    6087LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v14 = *(void **)(v1 + 56);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x64334855u);
    *(_QWORD *)(v1 + 56) = 0LL;
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    return Template_p((__int64)v14, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v11);
  return result;
}
