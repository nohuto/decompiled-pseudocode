/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1C00138C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBPDO_BillboardCleanup @ 0x1C0013AB8 (HUBPDO_BillboardCleanup.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C002F1B8 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // r14
  __int64 v3; // rbp
  PVOID *v4; // rbx
  __int64 v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rax
  void *v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  v2 = *(_QWORD **)(v1 + 24);
  v3 = v2[3];
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    Template_p(LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp), &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v2[3]);
  v4 = (PVOID *)(v1 + 272);
  v5 = 5LL;
  do
  {
    if ( *v4 )
    {
      v6 = PoUnregisterPowerSettingCallback(*v4);
      if ( v6 < 0 )
      {
        LODWORD(v10) = v6;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL),
          2u,
          5u,
          0x4Cu,
          (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
          v10);
      }
      *v4 = 0LL;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( (*(_DWORD *)(v1 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v1 + 72, 6006LL, 0LL);
  v11 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(*v2 + 520LL))(*(_QWORD *)(*v2 + 208LL), &v11);
  KeClearEvent((PRKEVENT)(v2 + 196));
  HUBSM_AddEvent((__int64)(v2 + 61), 0xFDFu);
  HUBMISC_WaitForSignal(v2 + 196);
  HUBPDO_BillboardCleanup(v2);
  (*(void (__fastcall **)(_QWORD, char *))(*v2 + 528LL))(*(_QWORD *)(*v2 + 208LL), &v11);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v7,
    "DSM PDO Tag",
    5985LL,
    "drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v8 = *(void **)(v1 + 56);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x64334855u);
    *(_QWORD *)(v1 + 56) = 0LL;
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    return Template_p((__int64)v8, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v3);
  return result;
}
