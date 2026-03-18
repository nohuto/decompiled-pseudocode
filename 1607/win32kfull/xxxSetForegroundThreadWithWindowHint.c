/*
 * XREFs of xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundThread @ 0x1C000E5E0 (xxxSetForegroundThread.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C00A8060 (SetForegroundPriority.c)
 *     ?PublishFocusChange@@YAXXZ @ 0x1C00A96D8 (-PublishFocusChange@@YAXXZ.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A9E68 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[40]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-18h]

  v2 = gptiForeground;
  if ( a1 == gptiForeground )
    return;
  if ( !a1 || !gptiForeground || *(_QWORD *)(a1 + 376) != *(_QWORD *)(gptiForeground + 376LL) )
  {
    EtwTraceFocusedProcessChange();
    v13 = 0uLL;
    v14 = 0;
    if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v13) )
    {
      if ( a1 && (v5 = *(_QWORD *)(a1 + 408)) != 0 && *(_QWORD *)(v5 + 280) )
        DWORD1(v13) = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 56LL);
      else
        DWORD1(v13) = 0;
      if ( gptiForeground && (v6 = *(_QWORD *)(gptiForeground + 408LL)) != 0 && *(_QWORD *)(v6 + 280) )
        LODWORD(v13) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 56LL);
      else
        LODWORD(v13) = 0;
      memset(v12, 0, sizeof(v12));
      *(_QWORD *)v12 = 0LL;
      *(_DWORD *)&v12[8] = 9;
      HIWORD(v14) = 0;
      *(_OWORD *)&v12[16] = v13;
      *(_DWORD *)&v12[32] = (unsigned __int16)v14;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12);
    }
    if ( a1 )
    {
      SetForegroundPriority(a1, 1LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 272LL) = PsChargeProcessWakeCounter(**(_QWORD **)(a1 + 376), 0LL, 0LL);
    }
    if ( !gptiForeground )
      goto LABEL_24;
    SetForegroundPriority(gptiForeground, 0LL);
    v2 = gptiForeground;
    v7 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 272LL);
    if ( v7 )
    {
      PsReleaseProcessWakeCounter(v7, 1LL);
      v2 = gptiForeground;
      *(_QWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 272LL) = 0LL;
    }
  }
  if ( *(_QWORD *)v2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v2 + 392LL);
    goto LABEL_25;
  }
LABEL_24:
  v8 = 0LL;
LABEL_25:
  EtwTraceFocusChange(a1);
  gptiForeground = a1;
  if ( a1 && *(_DWORD *)(*(_QWORD *)(a1 + 376) + 56LL) == gpidLogonUI )
    gfEnableHexNumpad |= 2u;
  else
    gfEnableHexNumpad &= ~2u;
  PublishFocusChange();
  if ( gptiForeground )
  {
    v9 = *(_QWORD *)(gptiForeground + 392LL);
    if ( v9 )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v9 )
      {
        *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v13;
        *((_QWORD *)&v13 + 1) = v8;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        xxxChangeForegroundKeyboardTable((struct tagKL *)v8, *(struct tagKL **)(gptiForeground + 392LL));
        ThreadUnlock1(v11, v10);
      }
    }
  }
  memset(&gafAsyncKeyStateRecentDown, 0, 0x20uLL);
  ++*(_DWORD *)(gpsi + 5644LL);
}
