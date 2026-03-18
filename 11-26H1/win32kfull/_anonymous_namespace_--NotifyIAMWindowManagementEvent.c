/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401D6BB8
 * Callers:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402DB564 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1402DC110 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 * Callees:
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

bool __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  struct tagWND *v6; // rdi

  v4 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v6 = (struct tagWND *)v4;
  if ( v4 )
  {
    if ( !IsThreadHung(*(const struct tagTHREADINFO **)(v4 + 16), v5) )
      return SendNotifyMessageAlways(v6, 0x342u, 0LL, a1, 3u);
    if ( !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
  }
  return 0;
}
