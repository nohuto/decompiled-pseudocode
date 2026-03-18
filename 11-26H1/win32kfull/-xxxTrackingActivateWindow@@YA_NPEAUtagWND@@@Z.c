/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14029D8E8
 * Callers:
 *     xxxActiveWindowTracking @ 0x14008DA14 (xxxActiveWindowTracking.c)
 * Callees:
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14015BB1C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rax

  v3 = *(unsigned int *)(W32GetUserSessionState(a1, a2) + 66796);
  if ( (v3 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3601);
  result = IsForegroundWindow(a1, v3);
  if ( !result )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928);
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == v8 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      return anonymous_namespace_::xxxLocalActivateWindow(
               a1,
               0,
               ~(unsigned __int16)(*(_DWORD *)(UserSessionState + 66796) >> 5) & 2);
    }
    else
    {
      v10 = W32GetUserSessionState(v8, v7);
      return (unsigned int)xxxSetForegroundWindow2(
                             (__int64)a1,
                             0LL,
                             ~(unsigned __int8)(*(_DWORD *)(v10 + 66796) >> 4) & 4 | 2u) != 0;
    }
  }
  return result;
}
