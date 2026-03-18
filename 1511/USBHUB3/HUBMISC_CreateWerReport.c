/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C0027E8C
 * Callers:
 *     HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1C001A540 (HUBDSM_MarkingUnknownDeviceAsFailed.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C006A070 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C00308C0 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  PWDF_DRIVER_GLOBALS v9; // rcx
  __int64 v10; // r9
  _QWORD v12[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h] BYREF

  v3 = a2;
  if ( KeGetCurrentIrql() < 2u )
  {
    v10 = 0LL;
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 == 1 )
      {
        v10 = 12289LL;
      }
      else if ( (_DWORD)a2 == 2 )
      {
        v10 = 12291LL;
      }
    }
    else
    {
      v10 = 12288LL;
    }
    return (unsigned int)WER_CreateReport(a1, a2, a3, v10);
  }
  else
  {
    memset(v13, 0, sizeof(v13));
    v13[6] = off_1C0057170;
    v13[4] = *(_QWORD *)(a1 + 16);
    v13[3] = 0x100000001LL;
    v12[0] = 0LL;
    v12[1] = HUBMISC_WerReportWorkItem;
    v12[2] = 1LL;
    v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032);
    LODWORD(v13[0]) = 56;
    LODWORD(v12[0]) = 24;
    v6 = v5(WdfDriverGlobals, v12, v13, &v14);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v14,
             off_1C0057170);
      v9 = WdfDriverGlobals;
      *(_QWORD *)v8 = a1;
      *(_DWORD *)(v8 + 8) = v3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(v9, v14);
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2464),
        2u,
        3u,
        0x6Bu,
        (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids,
        v6);
    }
  }
  return v7;
}
