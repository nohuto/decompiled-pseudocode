/*
 * XREFs of xxxCompositionInputSinkLuidFromPoint @ 0x1C022D750
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1C0218780 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     WakeDIT @ 0x1C0007B04 (WakeDIT.c)
 */

__int64 __fastcall xxxCompositionInputSinkLuidFromPoint(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = 0LL;
  v4 = gbDIT == 0;
  *a2 = 0LL;
  if ( !v4 )
  {
    gptCompositionInputSinkLuidFromPoint = *a1;
    gbCompositionInputSinkQueryBlockedOnDIT = 1;
    WakeDIT(0x80u);
    UserSessionSwitchLeaveCrit(v6, v5);
    KeWaitForSingleObject(gpkeDITCompositionInputSinkQueryResponseEvent, UserRequest, 1, 1u, 0LL);
    EnterCrit(1LL);
    result = (unsigned int)gbCompositionInputSinkLuidFromPoint;
    gbCompositionInputSinkQueryBlockedOnDIT = 0;
    if ( gbCompositionInputSinkLuidFromPoint )
      *a2 = gluidCompositionInputSinkLuidFromPoint;
  }
  return result;
}
