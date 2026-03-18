/*
 * XREFs of UnlockCaptureWindow @ 0x140054860
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A04C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 */

void __fastcall UnlockCaptureWindow(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(a1 + 112) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    --*(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 6992LL);
    HMAssignmentUnlock(a1 + 112);
    EditionUpdateRawMouseMode(a1);
  }
}
