/*
 * XREFs of Endpoint_SM_CompleteResetRequestFromClient @ 0x1C0019CBC
 * Callers:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C0019D4C (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 *     ESM_CompletingResetRequestWhenEndpointNotHalted @ 0x1C00392E0 (ESM_CompletingResetRequestWhenEndpointNotHalted.c)
 * Callees:
 *     WPP_RECORDER_SF_ddqL @ 0x1C001C868 (WPP_RECORDER_SF_ddqL.c)
 */

__int64 __fastcall Endpoint_SM_CompleteResetRequestFromClient(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx

  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFEFF);
  v3 = *(_DWORD *)(a1 + 264);
  v4 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_DWORD *)(a1 + 264) = 259;
  WPP_RECORDER_SF_ddqL(*(_QWORD *)(a1 + 80), a2, a3, 111);
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           v4,
           v3);
}
