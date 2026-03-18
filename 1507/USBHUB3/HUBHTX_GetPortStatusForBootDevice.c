/*
 * XREFs of HUBHTX_GetPortStatusForBootDevice @ 0x1C00051B8
 * Callers:
 *     HUBMISC_IsBootDeviceReady @ 0x1C0026DF4 (HUBMISC_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_GetPortStatusForBootDevice(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rsi
  int v5; // edi
  __int64 v6; // rax
  char v7; // al
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int16 v10; // r9
  int v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+28h] [rbp-60h]
  _QWORD v14[3]; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-20h] BYREF

  v14[0] = 24LL;
  *a2 = 0;
  v2 = (_QWORD *)(a1 + 2232);
  v14[1] = 0LL;
  v14[2] = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 2232),
         v14);
  if ( v5 < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    v12 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v12);
  }
  v7 = *(_BYTE *)(a1 + 2384) & 0x1C;
  *(_BYTE *)(a1 + 2385) = 0;
  *(_WORD *)(a1 + 2386) = 0;
  *(_BYTE *)(a1 + 2384) = v7 | 0xA3;
  *(_WORD *)(a1 + 2388) = *(_WORD *)(*(_QWORD *)(a1 + 8) + 200LL);
  *(_WORD *)(a1 + 2390) = 4;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(*(_QWORD *)a1 + 208LL),
         (unsigned int)&Event,
         (_DWORD)v2,
         (__int64)HUBHTX_BootDevicePortStatusControlTransferComplete,
         (__int64)a2,
         4,
         0,
         1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 114;
LABEL_7:
    LODWORD(v13) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v10,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v13);
    return v9;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  HUBMISC_WaitForSignal(&Event);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *v2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 115;
    goto LABEL_7;
  }
  return v9;
}
