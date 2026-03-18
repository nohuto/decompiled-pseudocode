/*
 * XREFs of DelegateReleasePointerMessage @ 0x140096C84
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14025E4B0 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 * Callees:
 *     DelegateCoalescePointerMessage @ 0x140096CE4 (DelegateCoalescePointerMessage.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(a2 + 24) == 583 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(
      *(CTouchProcessor **)(UserSessionState + 3256),
      *(_QWORD *)(a2 + 40));
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
