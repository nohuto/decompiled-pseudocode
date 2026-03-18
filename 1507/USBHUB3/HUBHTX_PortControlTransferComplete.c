/*
 * XREFs of HUBHTX_PortControlTransferComplete @ 0x1C00030B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     Template_pqhh @ 0x1C00017B8 (Template_pqhh.c)
 *     Template_pqqq @ 0x1C00018F0 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C0001C50 (WPP_RECORDER_SF_ccccc.c)
 *     WPP_RECORDER_SF_cccccc @ 0x1C0001D74 (WPP_RECORDER_SF_cccccc.c)
 *     WPP_RECORDER_SF_cccccccc @ 0x1C0001EB4 (WPP_RECORDER_SF_cccccccc.c)
 *     WPP_RECORDER_SF_chcccc @ 0x1C000210C (WPP_RECORDER_SF_chcccc.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_PortControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+20h] [rbp-98h]
  __int64 v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  _QWORD v27[4]; // [rsp+70h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 44);
  if ( v4 >= 0 )
  {
    if ( !*(_BYTE *)(a4 + 169) )
    {
      v9 = *(_DWORD *)(a4 + 1336);
      if ( v6 == 1 )
      {
        if ( (v9 & 0x20) == 0
          && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)a4 + 16LL),
               0LL,
               0LL,
               1685,
               "drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c") >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v5 + 1336), 0x20u);
        }
      }
      else if ( (v9 & 0x20) != 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a4 + 16LL),
          0LL,
          1693LL,
          "drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
        _InterlockedAnd((volatile signed __int32 *)(v5 + 1336), 0xFFFFFFDF);
      }
      v10 = **(_DWORD **)(v5 + 80);
      if ( *(_DWORD *)(v5 + 1256) == 5000 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x400) != 0 )
        {
          LOWORD(v25) = *(_WORD *)(v5 + 184);
          LODWORD(v21) = *(unsigned __int16 *)(v5 + 200);
          Template_pqhh(
            *(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_30_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 208LL),
            v21,
            v25,
            *(_WORD *)(v5 + 186));
        }
        LOBYTE(a4) = ((v10 & 8) != 0) + 48;
        LOBYTE(a2) = ((v10 & 0x10) != 0) + 48;
        WPP_RECORDER_SF_chcccc(*(_QWORD *)(v5 + 1432), a2, (unsigned __int8)(((v10 & 0x200) != 0) + 48), a4, v21);
        LOBYTE(v11) = (BYTE2(v10) >> 7) + 48;
        LOBYTE(v12) = ((v10 & 0x80000) != 0) + 48;
        LOBYTE(v13) = ((v10 & 0x200000) != 0) + 48;
        WPP_RECORDER_SF_cccccc(*(_QWORD *)(v5 + 1432), v13, v12, v11, v23);
      }
      else
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x400) != 0 )
        {
          LOWORD(v25) = *(_WORD *)(v5 + 184);
          LODWORD(v21) = *(unsigned __int16 *)(v5 + 200);
          Template_pqhh(
            *(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_20_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 208LL),
            v21,
            v25,
            *(_WORD *)(v5 + 186));
        }
        LOBYTE(a4) = ((v10 & 4) != 0) + 48;
        LOBYTE(a3) = ((v10 & 0x10) != 0) + 48;
        LOBYTE(a2) = ((v10 & 2) != 0) + 48;
        WPP_RECORDER_SF_cccccccc(*(_QWORD *)(v5 + 1432), a2, a3, a4, v21);
        v14 = HIWORD(v10);
        LOBYTE(v15) = ((v10 & 0x80000) != 0) + 48;
        LOBYTE(v16) = ((v10 & 0x40000) != 0) + 48;
        LOBYTE(v14) = (BYTE2(v10) & 1) + 48;
        WPP_RECORDER_SF_ccccc(*(_QWORD *)(v5 + 1432), v16, v15, v14, v24);
      }
    }
    if ( *(_BYTE *)(v5 + 169) == 3 )
    {
      if ( *(_WORD *)(v5 + 170) == 2 )
      {
        *(_WORD *)(v5 + 192) |= 4u;
        *(_WORD *)(v5 + 184) |= 4u;
      }
      if ( *(_WORD *)(v5 + 170) == 5 )
      {
        if ( *(_BYTE *)(v5 + 173) == 3 )
        {
          *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x60;
          *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x60;
        }
        if ( *(_WORD *)(v5 + 170) == 5 && *(_BYTE *)(v5 + 173) == 4 )
        {
          *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x80;
          *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x80;
        }
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 1432),
      2u,
      4u,
      0x22u,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      *(_DWORD *)(a3 + 8),
      *(_DWORD *)(a4 + 44));
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2512LL) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", *(_QWORD *)v5 + 1184LL);
    *(_DWORD *)(*(_QWORD *)v5 + 2516LL) = 1073872897;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
    {
      LODWORD(v26) = v4;
      LODWORD(v25) = v6;
      LODWORD(v22) = *(unsigned __int16 *)(v5 + 200);
      Template_pqqq(
        v8,
        &USBHUB3_ETW_EVENT_PORT_CONTROL_TRANSFER_ERROR,
        0LL,
        *(_QWORD *)(*(_QWORD *)v5 + 208LL),
        v22,
        v25,
        v26);
    }
  }
  v27[1] = 0LL;
  v27[2] = 0LL;
  v27[0] = 24LL;
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          v27);
  if ( v17 < 0 )
  {
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C0057090);
    LODWORD(v25) = v17;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v18 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v25);
  }
  v19 = 3008LL;
  if ( v4 >= 0 )
    v19 = 3012LL;
  return (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 1240))(v5, v19);
}
