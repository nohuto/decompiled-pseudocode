/*
 * XREFs of zzzCancelJournalling @ 0x1C010A868
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0064BC4 (PhkFirstGlobalValid.c)
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00821F0 (zzzUnhookWindowsHookEx.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     SendMsgCleanup @ 0x1C00D0790 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00D07E4 (xxxReceiverDied.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int16 __fastcall zzzCancelJournalling(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 GlobalValid; // rdi
  __int64 v4; // r8
  _DWORD *v5; // r9
  bool v6; // zf
  __int64 v7; // rdi
  _DWORD *v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int16 result; // ax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 Valid; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax

  gwMouseOwnerButton = 0;
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1, a3, gdwDeferWinEvent);
  if ( GlobalValid )
  {
    do
    {
      v17 = *(_QWORD *)(GlobalValid + 16);
      if ( v17 )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup(v17);
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid, v19, v20);
      GlobalValid = Valid;
    }
    while ( Valid );
    v5 = (_DWORD *)gdwDeferWinEvent;
  }
  v6 = (*v5)-- == 1;
  if ( v6 && gpPendingNotifies )
  {
    xxxFlushDeferredWindowEvents();
    v5 = (_DWORD *)gdwDeferWinEvent;
  }
  ++*v5;
  v7 = PhkFirstGlobalValid(gptiRit, 0, v4, (__int64)v5);
  if ( v7 )
  {
    do
    {
      v21 = *(_QWORD *)(v7 + 16);
      if ( v21 )
      {
        PostThreadMessage(*(_QWORD *)(v7 + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup(v21);
      }
      v22 = PhkNextValid(v7);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v7, v23, v24);
      v7 = v22;
    }
    while ( v22 );
    v8 = (_DWORD *)gdwDeferWinEvent;
  }
  v6 = (*v8)-- == 1;
  if ( v6 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  v9 = (_QWORD *)gsmsList;
  v10 = (_QWORD *)gsmsList;
  while ( v10 != v9 )
  {
    v11 = (__int64)v10;
    v10 = (_QWORD *)*v10;
    v12 = *(_QWORD *)(v11 + 32);
    if ( v12 )
    {
      v13 = *(_QWORD **)(v11 + 40);
      if ( v13 )
      {
        if ( *(_QWORD *)(v12 + 384) != v13[48] )
        {
          if ( (unsigned int)IsThreadHung(v13, 0x1388u) )
          {
            v25 = *(_DWORD *)(v11 + 104);
            if ( v25 >= 6
              && (v25 <= 8 || v25 == 28 || v25 == 81 || v25 == 134 || v25 == 783)
              && (*(_DWORD *)(v11 + 84) & 0x10) == 0 )
            {
              xxxReceiverDied(v11);
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
          return SetOrClrWF(0, (_DWORD *)v16, 0xF08u, 1);
      }
    }
  }
  return result;
}
