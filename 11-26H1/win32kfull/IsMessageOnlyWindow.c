/*
 * XREFs of IsMessageOnlyWindow @ 0x14019D910
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x14019D39C (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageOnlyWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 112);
  return *(_QWORD *)(a1 + 104) == v2;
}
