/*
 * XREFs of ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C008421C (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C00928D8 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C7308 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C0110C10 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01D7244 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01D8164 (xxxNotifyShellWindowBorderEnter.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0202548 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C0206C40 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209FA4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01D7144 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyIAMWindowManagementEvent(const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[4]; // [rsp+50h] [rbp-28h] BYREF
  char v9; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v3 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 280) )
    {
      v4 = *(_QWORD *)(v3 + 320);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD **)(v4 + 16), 0) )
        {
          SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v3);
        }
        else
        {
          v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v8;
          ++*(_DWORD *)(v4 + 8);
          v8[1] = v4;
          v2 = xxxSendMessageCallback((struct tagWND *)v4, 0x342u, 0LL, (__int64)a1, 0LL, 1LL, 0, 1);
          ThreadUnlock1(v6, v5);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  return v2;
}
