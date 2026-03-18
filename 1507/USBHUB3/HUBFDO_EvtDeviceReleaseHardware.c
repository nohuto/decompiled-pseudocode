/*
 * XREFs of HUBFDO_EvtDeviceReleaseHardware @ 0x1C0062FC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     Template_p @ 0x1C0005B18 (Template_p.c)
 *     HUBSM_AddHsmEvent @ 0x1C00083C8 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C0068BC8 (HUBCONNECTOR_UnMapHubPorts.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  const void *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  void *v8; // rcx
  int v10; // [rsp+20h] [rbp-18h]
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057140);
  v2 = v1;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
    Template_p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_START,
      0LL,
      *(_QWORD *)(v1 + 208));
  HUBCONNECTOR_UnMapHubPorts(v2);
  v11 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(v2 + 520))(*(_QWORD *)(v2 + 208), &v11);
  KeResetEvent((PRKEVENT)(v2 + 1072));
  HUBSM_AddHsmEvent(v2, 2035LL);
  v3 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v2);
  HUBMISC_WaitForSignal((PVOID)(v2 + 1072), "Hub FDO PnpCallback", v3);
  v4 = *(_DWORD *)(v2 + 1096);
  (*(void (__fastcall **)(_QWORD, char *))(v2 + 528))(*(_QWORD *)(v2 + 208), &v11);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0057090);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 32),
    0LL);
  v6 = *(_QWORD *)(v2 + 2352);
  v7 = *(_QWORD **)(v2 + 2360);
  if ( *(_QWORD *)(v6 + 8) != v2 + 2352 || *v7 != v2 + 2352 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 32));
  v8 = *(void **)(v2 + 2472);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x68334855u);
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 2464), 0LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 2) != 0 )
  {
    v10 = v4;
    Template_pq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
      &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v2 + 208),
      v10);
  }
  return v4;
}
