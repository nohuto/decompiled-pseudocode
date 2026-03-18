/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x14014A2D0
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x14014A7F0 (DwmSyncFlushWindowChanges.c)
 */

__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  void *v4; // rbx

  result = ReferenceDwmApiPort(a1, a2);
  v4 = (void *)result;
  if ( result )
  {
    UserSessionSwitchLeaveCrit(v3);
    DwmSyncFlushWindowChanges(v4);
    return EnterCrit(1LL, 0LL);
  }
  return result;
}
