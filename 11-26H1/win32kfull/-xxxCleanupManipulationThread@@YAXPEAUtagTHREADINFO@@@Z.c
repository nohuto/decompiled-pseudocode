/*
 * XREFs of ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402C3AE8
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1401364E0 (xxxCleanupThreadPointerInputInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall xxxCleanupManipulationThread(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(UserSessionState + 3256));
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18872) = 0LL;
}
