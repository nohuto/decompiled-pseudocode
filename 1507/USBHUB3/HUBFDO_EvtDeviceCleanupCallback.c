/*
 * XREFs of HUBFDO_EvtDeviceCleanupCallback @ 0x1C000A6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
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
         off_1C0057140);
  v2 = v1;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_HUB_CLEANUP_START,
      0LL,
      *(_QWORD *)(v1 + 208));
  v3 = *(void **)(v2 + 2488);
  if ( v3 )
  {
    v4 = PoUnregisterPowerSettingCallback(v3);
    if ( v4 < 0 )
    {
      v11 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 2440),
        2u,
        3u,
        0x1Fu,
        (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
        v11);
    }
    *(_QWORD *)(v2 + 2488) = 0LL;
  }
  v5 = *(void **)(v2 + 2480);
  if ( v5 )
  {
    v6 = PoUnregisterPowerSettingCallback(v5);
    if ( v6 < 0 )
    {
      LODWORD(v10) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 2440),
        2u,
        3u,
        0x20u,
        (__int64)&WPP_d42eb740404c6b27f086534fc2613da4_Traceguids,
        v10);
    }
    *(_QWORD *)(v2 + 2480) = 0LL;
  }
  if ( (*(_DWORD *)(v2 + 40) & 0x20) != 0 )
  {
    KeResetEvent((PRKEVENT)(v2 + 1072));
    HUBSM_AddEvent(v2 + 1184, 0x7EBu);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    HUBMISC_WaitForSignal((PVOID)(v2 + 1072));
  }
  if ( *(_QWORD *)(v2 + 2176) )
  {
    (*(void (**)(void))(v2 + 480))();
    (*(void (__fastcall **)(_QWORD))(v2 + 464))(*(_QWORD *)(v2 + 2176));
    *(_QWORD *)(v2 + 2176) = 0LL;
  }
  v7 = *(void **)(v2 + 1176);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x68334855u);
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v2 + 2440));
  v8 = *(unsigned int *)(v2 + 88);
  if ( (_DWORD)v8 )
  {
    USBD_ReleaseHubNumber();
    *(_DWORD *)(v2 + 88) = 0;
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    return Template_p(v8, &USBHUB3_ETW_EVENT_HUB_CLEANUP_COMPLETE, 0LL, *(_QWORD *)(v2 + 208));
  return result;
}
