/*
 * XREFs of HUBPDO_EvtIoInternalDeviceControl @ 0x1C0010840
 * Callers:
 *     <none>
 * Callees:
 *     Template_pq @ 0x1C000128C (Template_pq.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C00158D8 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

void __fastcall HUBPDO_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  PWDF_DRIVER_GLOBALS v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-68h]
  _QWORD v25[5]; // [rsp+30h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-30h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v6,
         off_1C0058070);
  v8 = WdfDriverGlobals;
  v9 = v7;
  *(_QWORD *)(*(_QWORD *)(v7 + 24) + 440LL) = a2;
  v10 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      v8,
                      v8->Driver,
                      off_1C00580E8)
                  + 4) & 0x1000) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    if ( (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
       || (*(int (__fastcall **)(__int64, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v12, &ActivityId) < 0)
      && EtwActivityIdControl(3u, &ActivityId) >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(v11, &ActivityId);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    Template_pq(v11, &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START, &ActivityId, *(_QWORD *)(v10 + 24), a5);
  if ( a5 != 2228227 )
  {
    if ( a5 != 2228231 && a5 != 2232243 )
    {
      v13 = 1000;
      goto LABEL_41;
    }
    v14 = *(_QWORD *)(v9 + 24);
    if ( (*(_DWORD *)(v14 + 2420) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPort", v14 + 488);
    v13 = 4023;
    v15 = 0LL;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL) + 1424LL) = 10;
    v16 = 2232243LL;
LABEL_36:
    EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v10, v16, v15);
    goto LABEL_41;
  }
  memset(v25, 0, sizeof(v25));
  LOWORD(v25[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v25);
  v18 = v25[1];
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
  {
    LODWORD(v24) = *(unsigned __int16 *)(v25[1] + 2LL);
    Template_pq(v17, &USBHUB3_ETW_EVENT_DEVICE_URB_START, &ActivityId, *(_QWORD *)(v10 + 24), v24);
  }
  v19 = *(unsigned __int16 *)(v18 + 2);
  if ( !*(_WORD *)(v18 + 2) )
  {
    v23 = *(_QWORD *)(v18 + 24) == 0LL;
    *(_QWORD *)(v18 + 8) = *(_QWORD *)(v10 + 24);
    if ( v23 )
    {
      *(_QWORD *)(v18 + 32) = 0LL;
      v13 = 4035;
    }
    else
    {
      v13 = 4031;
    }
    goto LABEL_41;
  }
  switch ( v19 )
  {
    case 1:
      v13 = 4039;
      goto LABEL_41;
    case 30:
      v22 = *(_QWORD *)(v9 + 24);
      if ( (*(_DWORD *)(v22 + 2420) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v22 + 488);
      v13 = 4027;
      v15 = 30LL;
      goto LABEL_35;
    case 48:
      v21 = *(_QWORD *)(v9 + 24);
      if ( (*(_DWORD *)(v21 + 2420) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v21 + 488);
      v13 = 4047;
      v15 = 48LL;
      goto LABEL_35;
    case 49:
      v20 = *(_QWORD *)(v9 + 24);
      if ( (*(_DWORD *)(v20 + 2420) & 0x100) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v20 + 488);
      v13 = 4043;
      v15 = 49LL;
LABEL_35:
      v16 = 2228227LL;
      goto LABEL_36;
  }
  v13 = 1000;
  if ( (unsigned int)(v19 - 53) <= 1 )
    v13 = 4019;
LABEL_41:
  HUBSM_AddEvent(*(_QWORD *)(v9 + 24) + 488LL, v13);
}
