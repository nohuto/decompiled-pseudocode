/*
 * XREFs of ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0049878 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C0100170 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C01D663C (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C02021A8 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C0206820 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C004DF0C (xxxSendMessageCallback.c)
 *     IAMKeyAcquired @ 0x1C007B0A0 (IAMKeyAcquired.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01D5588 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyIAMWindowManagementEvent(const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[4]; // [rsp+50h] [rbp-28h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( v3 )
  {
    if ( IAMKeyAcquired(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
      v4 = *(_QWORD *)(v3 + 312);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD **)(v4 + 16), 0) )
        {
          SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v3);
        }
        else
        {
          v8[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v8;
          ++*(_DWORD *)(v4 + 8);
          v8[1] = v4;
          v1 = xxxSendMessageCallback((struct tagWND *)v4, 0x342u, 0LL, (__int64)a1, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v6, v5);
        }
      }
    }
  }
  return v1;
}
