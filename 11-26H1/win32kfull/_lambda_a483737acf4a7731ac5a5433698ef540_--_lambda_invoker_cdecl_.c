/*
 * XREFs of _lambda_a483737acf4a7731ac5a5433698ef540_::_lambda_invoker_cdecl_ @ 0x1402A4CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientEnableMMCSS @ 0x14024F2D0 (xxxClientEnableMMCSS.c)
 *     ?WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ @ 0x14025E950 (-WakeDTForMMCSS@Win32k@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall lambda_a483737acf4a7731ac5a5433698ef540_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  v1 = PtiCurrent(a1);
  if ( v1 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v3, v2) + 68472) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 932);
  InputTraceLogging::Win32k::WakeDTForMMCSS();
  UserSessionState = W32GetUserSessionState(v5, v4);
  return xxxClientEnableMMCSS((**(_DWORD **)(UserSessionState + 19904) >> 12) & 1);
}
