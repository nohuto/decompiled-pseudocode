/*
 * XREFs of xxxSetFocus @ 0x1C00A8300
 * Callers:
 *     xxxCheckFocus @ 0x1C00715AC (xxxCheckFocus.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     NtUserSetFocus @ 0x1C00A8F20 (NtUserSetFocus.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C011B3C8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01523EC (xxxDWP_ProcessVirtKey.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00AB1B8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C01CA93C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
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
  int *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int *v20; // r8
  __int64 v21; // rcx
  unsigned __int64 *v22; // rcx
  int *v23; // r8
  int **v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v29; // [rsp+28h] [rbp-30h]

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x40) != 0 )
    {
      v23 = 0LL;
      v24 = *(int ***)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
      if ( v24 )
        v23 = *v24;
      if ( (unsigned int)xxxCallHook(9u, 0LL, v23, 5u) )
        return 0LL;
    }
    v22 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
    if ( v22 )
      v2 = *v22;
    xxxSendFocusMessages(gptiCurrent, 0LL, v3);
LABEL_23:
    LOBYTE(v16) = 1;
    return HMValidateHandleNoSecure(v2, v16, v17, v18);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 384) != *(_QWORD *)(gptiCurrent + 384LL)
    && !(unsigned int)CoreWindowProp::IsHostOrComponentThreadOf(gptiCurrent, a1) )
  {
    v21 = 5LL;
LABEL_29:
    UserSetLastError(v21);
    return 0LL;
  }
  v6 = a1;
  do
  {
    v7 = *((_BYTE *)v6 + 55);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v21 = 87LL;
      goto LABEL_29;
    }
    if ( (v7 & 0xC0) != 0x40 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
  }
  while ( v6 );
  v28 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v28;
  v29 = v6;
  if ( v6 )
    ++*((_DWORD *)v6 + 2);
  v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( a1 == (struct tagWND *)v8 )
  {
LABEL_16:
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = gptiCurrent;
    v14 = *(_QWORD *)(v13 + 392);
    if ( v14 )
    {
      v15 = *(int **)(v14 + 40);
      if ( (int *)gLCIDSentToShell != v15
        && ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
      {
        gLCIDSentToShell = (__int64)v15;
        xxxCallHook(8u, 0LL, v15, 0xAu);
      }
    }
    if ( v8 )
      v2 = *(_QWORD *)v8;
    ThreadUnlock1(v5, a2);
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(gptiCurrent + 416LL);
  v10 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v9 + 24));
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v9 + 24)) & 0x40) == 0 )
    goto LABEL_12;
  v20 = 0LL;
  if ( v8 )
    v20 = *(int **)v8;
  if ( !(unsigned int)xxxCallHook(9u, *(_QWORD *)a1, v20, 5u) )
  {
LABEL_12:
    v11 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( v6 != *(struct tagWND **)(v11 + 88) )
    {
      if ( v11 != gpqForeground && FAllowForegroundActivate((struct tagQ *)v11, v6) )
      {
        if ( (*((_BYTE *)v6 + 55) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x100u;
        if ( !(unsigned int)xxxSetForegroundWindow2((LARGE_INTEGER *)v6, gptiCurrent, 8u, v3) )
          goto LABEL_52;
      }
      if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL)
        && !(unsigned int)xxxActivateThisWindow(v6, 0, 0, v3) )
      {
LABEL_52:
        v25 = 87LL;
        goto LABEL_53;
      }
    }
    v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
    ThreadUnlock1(v11, v10);
    v28 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v28;
    v29 = (struct tagWND *)v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    xxxSendFocusMessages(gptiCurrent, a1, v3);
    goto LABEL_16;
  }
  v25 = 5LL;
LABEL_53:
  UserSetLastError(v25);
  ThreadUnlock1(v27, v26);
  return 0LL;
}
