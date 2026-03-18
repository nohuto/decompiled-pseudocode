/*
 * XREFs of HUBREG_WriteValueToHubHardwareKey @ 0x1C006D058
 * Callers:
 *     HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C0067274 (HUBFDO_LogHubResetRecoveryWasInvoked.c)
 *     HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected @ 0x1C006D160 (HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteValueToHubHardwareKey(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  int *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         131078LL,
         0LL,
         &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = &v11;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 1928))(
           WdfDriverGlobals,
           v10,
           a2);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_6;
    v7 = 53;
  }
  else
  {
    v7 = 52;
  }
  LODWORD(v9) = v5;
  WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2464), 2u, 3u, v7, (__int64)&WPP_d9e6b8ce2d2d3a2fc161dd0ed8437b42_Traceguids, v9);
LABEL_6:
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v6;
}
