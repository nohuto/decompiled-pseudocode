/*
 * XREFs of Controller_InitiateRecovery @ 0x1C001515C
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C0015ED0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C00013A0 (CommonBuffer_FlushWorkItems.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_FailAllCommands @ 0x1C00119BC (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C0014C50 (Controller_DisableController.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 *     UsbDevice_ControllerGone @ 0x1C002E8A4 (UsbDevice_ControllerGone.c)
 */

char __fastcall Controller_InitiateRecovery(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rbp
  unsigned int i; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+44h] [rbp-54h]
  __int64 v15; // [rsp+4Ch] [rbp-4Ch]
  int v16; // [rsp+54h] [rbp-44h]
  int v17; // [rsp+58h] [rbp-40h]

  LOBYTE(v6) = WPP_RECORDER_SF_(a1[8], 4u, 3u, 0xD9u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
  if ( (a3 & 2) != 0 )
  {
    v6 = *((_DWORD *)a1 + 72);
    if ( v6 > 0xA )
    {
      a3 |= 4u;
      LOBYTE(v6) = WPP_RECORDER_SF_dd(
                     a1[8],
                     1u,
                     3u,
                     0xDAu,
                     (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
                     *((_DWORD *)a1 + 72),
                     10);
    }
  }
  while ( a3 )
  {
    if ( (a3 & 0x18) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 84) & 2) == 0 )
      {
        Command_FailAllCommands(a1[14]);
        KeFlushQueuedDpcs();
        CommonBuffer_FlushWorkItems((_QWORD *)a1[11]);
        v7 = a1[13];
        for ( i = 1; i <= *(_DWORD *)(v7 + 16); ++i )
        {
          v9 = *(_QWORD *)(v7 + 32);
          if ( v9 )
            v9 = *(_QWORD *)(v9 + 8LL * i);
          if ( v9 )
            UsbDevice_ControllerGone();
        }
        KeFlushQueuedDpcs();
        ((void (__fastcall *)(__int64, _QWORD))qword_1C0041520)(UcxGlobals, a1[1]);
        if ( (a3 & 8) != 0 )
          (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 696))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            *a1,
            2LL);
        *(_DWORD *)(a2 + 84) |= 2u;
      }
      LOBYTE(v6) = (a3 & 0x10) != 0;
      if ( (((*(_DWORD *)(a2 + 84) & 4) == 0) & (unsigned __int8)v6) != 0 )
      {
        WPP_RECORDER_SF_(a1[8], 4u, 3u, 0xDBu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
        v10 = *a1;
        v14 = 0x200000002LL;
        v15 = 0x200000002LL;
        v13 = 28;
        v17 = 2;
        v16 = 1;
        LOBYTE(v6) = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, int *))(WdfFunctions_01015 + 232))(
                       WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                       v10,
                       &v13);
        *(_DWORD *)(a2 + 84) |= 4u;
      }
      a3 &= 0xFFFFFFE0;
    }
    else if ( (a3 & 4) != 0 )
    {
      Controller_DisableController((__int64)a1);
      LOBYTE(v6) = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 696))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     *a1,
                     2LL);
      a3 &= 0xFFFFFFF8;
    }
    else if ( (a3 & 1) != 0 )
    {
      LOBYTE(v6) = Controller_InternalReset(a1);
      a3 &= ~1u;
    }
    else if ( (a3 & 2) != 0 )
    {
      LOBYTE(v6) = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0041510)(UcxGlobals, a1[1]);
      a3 &= ~2u;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
      {
        LODWORD(v12) = a3;
        LOBYTE(v6) = WPP_RECORDER_SF_d(
                       a1[8],
                       2u,
                       3u,
                       0xDCu,
                       (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
                       v12);
        return v6;
      }
      LOBYTE(v6) = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 696))(
                     WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                     *a1,
                     2LL);
      a3 &= ~0x20u;
    }
  }
  return v6;
}
