/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518
 * Callers:
 *     ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1401A0304 (-xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14022CAD4 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402DCA30 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402DCC64 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x140295B74 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402DBAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

char __fastcall anonymous_namespace_::xxxCallIAMWindowManagementHandler(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  struct tagTHREADINFO **v5; // rdi
  bool v6; // bl
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF

  v4 = anonymous_namespace_::ResolveWindowManagementTargetWindow(a2);
  v5 = (struct tagTHREADINFO **)v4;
  if ( v4 )
  {
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v4);
    v9 = 0LL;
    if ( !xxxSendTransformableMessageTimeout(v5, 833LL, 0LL, a1, 2u, 0x7D0u, &v9, 1u, 1) && !a2 )
      anonymous_namespace_::SeverWindowManagementConnectionToShell();
    v6 = v9 == 1;
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    LOBYTE(v4) = v6;
  }
  return v4;
}
