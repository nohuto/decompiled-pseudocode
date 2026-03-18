/*
 * XREFs of HUBFDO_EvtDeviceCleanupCallback @ 0x1C000B130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C0029A0C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBFDO_EvtDeviceCleanupCallback(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  NTSTATUS v6; // eax
  void *v7; // rcx
  __int64 v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+28h] [rbp-10h]
  NTSTATUS v11; // [rsp+28h] [rbp-10h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  v2 = v1;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      (const EVENT_DESCRIPTOR *)"'",
      0LL,
      *(_QWORD *)(v1 + 240));
  v3 = *(void **)(v2 + 2536);
  if ( v3 )
  {
    v4 = PoUnregisterPowerSettingCallback(v3);
    if ( v4 < 0 )
    {
      v11 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 2488),
        2u,
        3u,
        0x1Au,
        (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
        v11);
    }
    *(_QWORD *)(v2 + 2536) = 0LL;
  }
  v5 = *(void **)(v2 + 2528);
  if ( v5 )
  {
    v6 = PoUnregisterPowerSettingCallback(v5);
    if ( v6 < 0 )
    {
      LODWORD(v10) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 2488),
        2u,
        3u,
        0x1Bu,
        (__int64)&WPP_655f8cdbe4fd3d78bdf33e2084db6386_Traceguids,
        v10);
    }
    *(_QWORD *)(v2 + 2528) = 0LL;
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x20) != 0 )
  {
    KeResetEvent((PRKEVENT)(v2 + 1120));
    HUBSM_AddEvent(v2 + 1232, 2027);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    HUBMISC_WaitForSignal((PVOID)(v2 + 1120));
  }
  if ( *(_QWORD *)(v2 + 2224) )
  {
    (*(void (**)(void))(v2 + 512))();
    (*(void (__fastcall **)(_QWORD))(v2 + 496))(*(_QWORD *)(v2 + 2224));
    *(_QWORD *)(v2 + 2224) = 0LL;
  }
  v7 = *(void **)(v2 + 1224);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x68334855u);
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v2 + 2488));
  v8 = *(unsigned int *)(v2 + 96);
  if ( (_DWORD)v8 )
  {
    USBD_ReleaseHubNumber();
    *(_DWORD *)(v2 + 96) = 0;
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    return Template_p(v8, &USBHUB3_ETW_EVENT_HUB_CLEANUP_COMPLETE, 0LL, *(_QWORD *)(v2 + 240));
  return result;
}
