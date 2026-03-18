/*
 * XREFs of HUBFDO_EvtDeviceD0Exit @ 0x1C000A8F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     Template_pqqh @ 0x1C000A234 (Template_pqqh.c)
 *     Template_pqq @ 0x1C000A2BC (Template_pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C0027444 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  NTSTATUS v4; // ebx
  char v5; // r14
  __int64 v6; // rdi
  int v7; // eax
  __int64 CurrentIrp_low; // rcx
  int v9; // esi
  __int64 v10; // rcx
  void *v11; // rbx
  unsigned int v12; // edx
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057198);
  *(_DWORD *)(v6 + 2544) = a2;
  _InterlockedAnd((volatile signed __int32 *)(v6 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    v4 = EtwActivityIdControl(3u, (LPGUID)(v6 + 2220));
    if ( v4 >= 0 )
    {
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
        (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
          *(_QWORD *)(v6 + 760),
          v6 + 2220);
      v5 = 1;
    }
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  CurrentIrp_low = LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  v9 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    v10 = *(_DWORD *)(v6 + 40) >> 10;
    LOWORD(v10) = (*(_DWORD *)(v6 + 40) & 0x400) != 0;
    Template_pqqh(
      v10,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_START,
      (const GUID *)(v6 + 2220),
      *(_QWORD *)(v6 + 224),
      a2,
      v7,
      v10);
  }
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 2) > 4 )
      goto LABEL_12;
  }
  else if ( a2 == 5 )
  {
    v11 = (void *)(v6 + 1096);
    KeResetEvent((PRKEVENT)(v6 + 1096));
    v12 = 2019;
    goto LABEL_11;
  }
  v11 = (void *)(v6 + 1096);
  KeResetEvent((PRKEVENT)(v6 + 1096));
  v12 = 2015;
LABEL_11:
  HUBSM_AddEvent(v6 + 1208, v12);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  HUBMISC_WaitForSignal(v11);
  v4 = *(_DWORD *)(v6 + 1120);
LABEL_12:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 8) != 0 )
  {
    LODWORD(v15) = v9;
    LODWORD(v14) = v4;
    Template_pqq(
      CurrentIrp_low,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_COMPLETE,
      (const GUID *)(v6 + 2220),
      *(_QWORD *)(v6 + 224),
      v14,
      v15);
  }
  if ( v5 == 1 )
  {
    *(_QWORD *)(v6 + 2220) = 0LL;
    *(_QWORD *)(v6 + 2228) = 0LL;
  }
  return (unsigned int)v4;
}
