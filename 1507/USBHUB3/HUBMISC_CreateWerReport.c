/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C002723C
 * Callers:
 *     HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1C0019B80 (HUBDSM_MarkingUnknownDeviceAsFailed.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C0069400 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C002FB90 (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF

  v3 = a2;
  if ( KeGetCurrentIrql() < 2u )
  {
    v8 = 0LL;
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 == 1 )
      {
        v8 = 12289LL;
      }
      else if ( (_DWORD)a2 == 2 )
      {
        v8 = 12291LL;
      }
    }
    else
    {
      v8 = 12288LL;
    }
    return (unsigned int)WER_CreateReport(a1, a2, a3, v8);
  }
  else
  {
    memset(v11, 0, sizeof(v11));
    v11[6] = off_1C0057118;
    v11[4] = *(_QWORD *)(a1 + 16);
    v11[3] = 0x100000001LL;
    v10[1] = HUBMISC_WerReportWorkItem;
    v10[2] = 1LL;
    LODWORD(v11[0]) = 56;
    v10[0] = 24LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v10,
           v11,
           &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v12,
             off_1C0057118);
      *(_QWORD *)v7 = a1;
      *(_DWORD *)(v7 + 8) = v3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v12);
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2440),
        2u,
        3u,
        0x6Bu,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
        v5);
    }
  }
  return v6;
}
