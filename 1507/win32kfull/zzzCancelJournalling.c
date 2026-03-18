/*
 * XREFs of zzzCancelJournalling @ 0x1C00FEE88
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C0049B20 (zzzUnhookWindowsHookEx.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     SendMsgCleanup @ 0x1C007B270 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C007B2C4 (xxxReceiverDied.c)
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     _PostThreadMessage @ 0x1C0090EB0 (_PostThreadMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int16 zzzCancelJournalling()
{
  __int64 GlobalValid; // rdi
  _DWORD *v1; // r9
  bool v2; // zf
  __int64 v3; // rdi
  _DWORD *v4; // r9
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int16 result; // ax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 Valid; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned int v17; // eax

  gwMouseOwnerButton = 0;
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1);
  if ( GlobalValid )
  {
    do
    {
      v13 = *(_QWORD *)(GlobalValid + 16);
      if ( v13 )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup(v13);
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
    v1 = (_DWORD *)gdwDeferWinEvent;
  }
  v2 = (*v1)-- == 1;
  if ( v2 && gpPendingNotifies )
  {
    xxxFlushDeferredWindowEvents();
    v1 = (_DWORD *)gdwDeferWinEvent;
  }
  ++*v1;
  v3 = PhkFirstGlobalValid(gptiRit, 0);
  if ( v3 )
  {
    do
    {
      v15 = *(_QWORD *)(v3 + 16);
      if ( v15 )
      {
        PostThreadMessage(*(_QWORD *)(v3 + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup(v15);
      }
      v16 = PhkNextValid(v3);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v3);
      v3 = v16;
    }
    while ( v16 );
    v4 = (_DWORD *)gdwDeferWinEvent;
  }
  v2 = (*v4)-- == 1;
  if ( v2 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  v5 = (_QWORD *)gsmsList;
  v6 = (_QWORD *)gsmsList;
  while ( v6 != v5 )
  {
    v7 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    v8 = *(_QWORD *)(v7 + 32);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v7 + 40);
      if ( v9 )
      {
        if ( *(_QWORD *)(v8 + 392) != v9[49] )
        {
          if ( (unsigned int)IsThreadHung(v9, 0x1388u) )
          {
            v17 = *(_DWORD *)(v7 + 104);
            if ( v17 >= 6
              && (v17 <= 8 || v17 == 28 || v17 == 81 || v17 == 134 || v17 == 783)
              && (*(_DWORD *)(v7 + 84) & 0x10) == 0 )
            {
              xxxReceiverDied(v7);
            }
          }
          v5 = (_QWORD *)gsmsList;
        }
      }
    }
  }
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v11 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 55) & 8) != 0 )
          return SetOrClrWF(0, (_DWORD *)v12, 0xF08u, 1);
      }
    }
  }
  return result;
}
