/*
 * XREFs of xxxSetFocus @ 0x1C0080BD4
 * Callers:
 *     xxxCheckFocus @ 0x1C0069950 (xxxCheckFocus.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     NtUserSetFocus @ 0x1C0080B40 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0090D48 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C014CE1C (xxxDWP_ProcessVirtKey.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C01D2D3C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetFocus(struct tagWND *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // al
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // r8
  __int64 *v20; // rcx
  unsigned __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v26; // [rsp+28h] [rbp-30h]

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0 )
    {
      v19 = 0LL;
      v20 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
      if ( v20 )
        v19 = *v20;
      if ( (unsigned int)xxxCallHook(9LL, 0LL, v19) )
        return 0LL;
    }
    v21 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
    if ( v21 )
      v2 = *v21;
    xxxSendFocusMessages(gptiCurrent, 0LL, v3);
    return HMValidateHandleNoSecure(v2, 1);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 384) != *(_QWORD *)(gptiCurrent + 384LL)
    && !(unsigned int)CoreWindowProp::IsHostOrComponentThreadOf(gptiCurrent, a1) )
  {
    v18 = 5;
LABEL_29:
    UserSetLastError(v18);
    return 0LL;
  }
  v6 = a1;
  do
  {
    v7 = *((_BYTE *)v6 + 55);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v18 = 87;
      goto LABEL_29;
    }
    if ( (v7 & 0xC0) != 0x40 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
  }
  while ( v6 );
  v25 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v25;
  v26 = v6;
  if ( v6 )
    ++*((_DWORD *)v6 + 2);
  v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
  if ( a1 == (struct tagWND *)v8 )
  {
LABEL_16:
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = gptiCurrent;
    v14 = *(_QWORD *)(v13 + 392);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 40);
      if ( gLCIDSentToShell != v15
        && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
      {
        gLCIDSentToShell = v15;
        xxxCallHook(8LL, 0LL, v15);
      }
    }
    if ( v8 )
      v2 = *(_QWORD *)v8;
    ThreadUnlock1(v5, a2);
    return HMValidateHandleNoSecure(v2, 1);
  }
  v9 = *(_QWORD *)(gptiCurrent + 416LL);
  v10 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v9 + 24));
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v9 + 24)) & 0x40) == 0 )
    goto LABEL_12;
  v17 = 0LL;
  if ( v8 )
    v17 = *(_QWORD *)v8;
  if ( !(unsigned int)xxxCallHook(9LL, *(_QWORD *)a1, v17) )
  {
LABEL_12:
    v11 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( v6 != *(struct tagWND **)(v11 + 80) )
    {
      if ( v11 != gpqForeground && FAllowForegroundActivate((struct tagQ *)v11, v6) )
      {
        if ( (*((_BYTE *)v6 + 55) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x100u;
        if ( !(unsigned int)xxxSetForegroundWindow2(v6) )
          goto LABEL_48;
      }
      if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL)
        && !(unsigned int)xxxActivateThisWindow(v6) )
      {
LABEL_48:
        v24 = 87;
        goto LABEL_49;
      }
    }
    v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
    ThreadUnlock1(v11, v10);
    v25 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v25;
    v26 = (struct tagWND *)v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    xxxSendFocusMessages(gptiCurrent, a1, v3);
    goto LABEL_16;
  }
  v24 = 5;
LABEL_49:
  UserSetLastError(v24);
  ThreadUnlock1(v23, v22);
  return 0LL;
}
