/*
 * XREFs of xxxSetFocus @ 0x1C0046624
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0045988 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     NtUserSetFocus @ 0x1C0046550 (NtUserSetFocus.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C007750C (xxxDWP_ProcessVirtKey.c)
 *     xxxCheckFocus @ 0x1C00880B8 (xxxCheckFocus.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0009730 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 */

__int64 __fastcall xxxSetFocus(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // al
  struct tagWND *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v27; // [rsp+28h] [rbp-30h]

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x40) != 0 )
    {
      v20 = 0LL;
      v21 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
      if ( v21 )
        v20 = *v21;
      if ( (unsigned int)xxxCallHook(9LL, 0LL, v20) )
        return 0LL;
    }
    v22 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
    if ( v22 )
      v2 = *v22;
    xxxSendFocusMessages(gptiCurrent, 0LL, v3);
LABEL_23:
    LOBYTE(v16) = 1;
    return HMValidateHandleNoSecure(v2, v16);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 392) != *(_QWORD *)(gptiCurrent + 392LL)
    && !(unsigned int)CoreWindowProp::IsHostOrComponentThreadOf(gptiCurrent, a1) )
  {
    v19 = 5LL;
LABEL_29:
    UserSetLastError(v19);
    return 0LL;
  }
  v6 = a1;
  do
  {
    v7 = *((_BYTE *)v6 + 55);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v19 = 87LL;
      goto LABEL_29;
    }
    if ( (v7 & 0xC0) != 0x40 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
  }
  while ( v6 );
  v26 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v26;
  v27 = v6;
  if ( v6 )
    ++*((_DWORD *)v6 + 2);
  v8 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
  if ( a1 == v8 )
  {
LABEL_16:
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = gptiCurrent;
    v14 = *(_QWORD *)(v13 + 400);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 40);
      if ( gLCIDSentToShell != v15
        && ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
      {
        gLCIDSentToShell = v15;
        xxxCallHook(8LL, 0LL, v15);
      }
    }
    if ( v8 )
      v2 = *(_QWORD *)v8;
    ThreadUnlock1(v5, a2);
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  v10 = (unsigned int)(*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(v9 + 24));
  if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(v9 + 24)) & 0x40) == 0 )
    goto LABEL_12;
  v18 = 0LL;
  if ( v8 )
    v18 = *(_QWORD *)v8;
  if ( !(unsigned int)xxxCallHook(9LL, *(_QWORD *)a1, v18) )
  {
LABEL_12:
    v11 = *(_QWORD *)(gptiCurrent + 392LL);
    if ( v6 != *(struct tagWND **)(v11 + 80) )
    {
      if ( v11 != gpqForeground && (unsigned int)FAllowForegroundActivate((struct tagQ *)v11, v6) )
      {
        if ( (*((_BYTE *)v6 + 55) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) |= 0x100u;
        if ( !(unsigned int)xxxSetForegroundWindow2(v6, gptiCurrent, 8LL, v3) )
          goto LABEL_48;
      }
      if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL)
        && !(unsigned int)xxxActivateThisWindow(v6) )
      {
LABEL_48:
        v25 = 87LL;
        goto LABEL_49;
      }
    }
    v8 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
    ThreadUnlock1(v11, v10);
    v26 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v26;
    v27 = v8;
    if ( v8 )
      ++*((_DWORD *)v8 + 2);
    xxxSendFocusMessages(gptiCurrent, a1, v3);
    goto LABEL_16;
  }
  v25 = 5LL;
LABEL_49:
  UserSetLastError(v25);
  ThreadUnlock1(v24, v23);
  return 0LL;
}
