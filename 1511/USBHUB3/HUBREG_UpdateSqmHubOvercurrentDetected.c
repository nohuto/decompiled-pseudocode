/*
 * XREFs of HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C0004014 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004628 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C00048D0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00051C4 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0006F30 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBHSM_QueueingHubStatusForLostChanges @ 0x1C00075F0 (HUBHSM_QueueingHubStatusForLostChanges.c)
 *     HUBPSM20_CheckingIfOvercurrentBitOne @ 0x1C000D980 (HUBPSM20_CheckingIfOvercurrentBitOne.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

void __fastcall HUBREG_UpdateSqmHubOvercurrentDetected(__int64 a1)
{
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *); // rax
  int v3; // eax
  _QWORD v4[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v5[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v6; // [rsp+90h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x20000000u);
    memset(v5, 0, sizeof(v5));
    v5[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v5[0]) = 56;
    v4[0] = 0LL;
    v5[3] = 0x100000001LL;
    v4[1] = HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected;
    v4[2] = 1LL;
    v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032);
    LODWORD(v4[0]) = 24;
    v3 = v2(WdfDriverGlobals, v4, v5, &v6);
    if ( v3 >= 0 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v6);
    else
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2464),
        2u,
        3u,
        0x36u,
        (__int64)&WPP_488b6272cf1c0d12ea361b5ad05fb8f5_Traceguids,
        v3);
  }
}
