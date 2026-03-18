/*
 * XREFs of ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00A3AC0 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C0121224 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0124174 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C012F6D8 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01CE0F8 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01CF1DC (xxxNotifyShellWindowBorderEnter.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F9864 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FDFC0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0201088 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01CDFC8 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyIAMWindowManagementEvent(const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[4]; // [rsp+50h] [rbp-28h] BYREF
  char v8; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v2 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 280) )
    {
      v3 = *(_QWORD *)(v2 + 320);
      if ( v3 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD **)(v3 + 16), 0) )
        {
          SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v2);
        }
        else
        {
          v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v7;
          ++*(_DWORD *)(v3 + 8);
          v7[1] = v3;
          v1 = xxxSendMessageCallback((struct tagWND *)v3, 0x342u, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v5, v4);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  return v1;
}
