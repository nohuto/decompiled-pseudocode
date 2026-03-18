/*
 * XREFs of zzzCancelJournalling @ 0x1C00945F8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     SendMsgCleanup @ 0x1C0106750 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzCancelJournalling()
{
  __int64 v0; // rdx
  __int64 GlobalValid; // rdi
  __int64 v2; // r8
  _DWORD *v3; // r9
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  _DWORD *v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 Valid; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  unsigned int v21; // eax

  gwMouseOwnerButton = 0;
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1);
  if ( GlobalValid )
  {
    do
    {
      v17 = *(_QWORD *)(GlobalValid + 16);
      if ( v17 )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16));
        SendMsgCleanup(v17);
      }
      Valid = PhkNextValid(GlobalValid, v0, v2);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
    v3 = (_DWORD *)gdwDeferWinEvent;
  }
  v4 = (*v3)-- == 1;
  if ( v4 && gpPendingNotifies )
  {
    xxxFlushDeferredWindowEvents();
    v3 = (_DWORD *)gdwDeferWinEvent;
  }
  ++*v3;
  v6 = PhkFirstGlobalValid(gptiRit, 0);
  if ( v6 )
  {
    do
    {
      v19 = *(_QWORD *)(v6 + 16);
      if ( v19 )
      {
        PostThreadMessage(*(_QWORD *)(v6 + 16));
        SendMsgCleanup(v19);
      }
      v20 = PhkNextValid(v6, v5, v7);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v6);
      v6 = v20;
    }
    while ( v20 );
    v8 = (_DWORD *)gdwDeferWinEvent;
  }
  v4 = (*v8)-- == 1;
  if ( v4 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  v9 = (_QWORD *)gsmsList;
  v10 = (_QWORD *)gsmsList;
  while ( v10 != v9 )
  {
    v12 = v10;
    v10 = (_QWORD *)*v10;
    v13 = v12[4];
    if ( v13 )
    {
      v11 = (_QWORD *)v12[5];
      if ( v11 )
      {
        if ( *(_QWORD *)(v13 + 384) != v11[48] )
        {
          if ( (unsigned int)IsThreadHung(v11, 0x1388u) )
          {
            v21 = *((_DWORD *)v12 + 26);
            if ( v21 >= 6
              && (v21 <= 8 || v21 == 28 || v21 == 81 || v21 == 134 || v21 == 783)
              && (*((_DWORD *)v12 + 21) & 0x10) == 0 )
            {
              xxxReceiverDied(v12);
            }
          }
          v9 = (_QWORD *)gsmsList;
        }
      }
    }
  }
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v15 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      if ( v16 )
      {
        if ( (*(_BYTE *)(v16 + 55) & 8) != 0 )
          return SetOrClrWF(0LL, v16, 3848LL, 1LL);
      }
    }
  }
  return result;
}
