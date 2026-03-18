/*
 * XREFs of xxxSetForegroundThreadWithWindowHint @ 0x1C0081354
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxSetForegroundThread @ 0x1C0114C40 (xxxSetForegroundThread.c)
 * Callees:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0080AC8 (xxxChangeForegroundKeyboardTable.c)
 *     SetForegroundPriority @ 0x1C0081580 (SetForegroundPriority.c)
 *     ?PublishFocusChange@@YAXXZ @ 0x1C0081838 (-PublishFocusChange@@YAXXZ.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = gptiForeground;
  if ( a1 == gptiForeground )
    return;
  if ( !a1 || !gptiForeground || *(_QWORD *)(a1 + 376) != *(_QWORD *)(gptiForeground + 376LL) )
  {
    EtwTraceFocusedProcessChange();
    CitProcessForegroundChange(a1, a2, gptiForeground);
    if ( a1 )
    {
      SetForegroundPriority(a1, 1LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 272LL) = PsChargeProcessWakeCounter(**(_QWORD **)(a1 + 376), 0LL, 0LL);
      PsUpdateComponentPower(**(_QWORD **)(a1 + 376), 4LL, 1LL);
    }
    if ( !gptiForeground )
      goto LABEL_21;
    SetForegroundPriority(gptiForeground, 0LL);
    PsUpdateComponentPower(**(_QWORD **)(gptiForeground + 376LL), 4LL, 0LL);
    v2 = gptiForeground;
    v5 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 272LL);
    if ( v5 )
    {
      PsReleaseProcessWakeCounter(v5, 1LL);
      v2 = gptiForeground;
      *(_QWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 272LL) = 0LL;
    }
  }
  if ( *(_QWORD *)v2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v2 + 392LL);
    goto LABEL_12;
  }
LABEL_21:
  v6 = 0LL;
LABEL_12:
  EtwTraceFocusChange(a1);
  gptiForeground = a1;
  PublishFocusChange();
  if ( gptiForeground )
  {
    v7 = *(_QWORD *)(gptiForeground + 392LL);
    if ( v7 )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v7 )
      {
        v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v10;
        v10[1] = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        xxxChangeForegroundKeyboardTable((struct tagKL *)v6, *(struct tagKL **)(gptiForeground + 392LL));
        ThreadUnlock1(v9, v8);
      }
    }
  }
  memset(&gafAsyncKeyStateRecentDown, 0, 0x20uLL);
  ++*(_DWORD *)(gpsi + 4252LL);
}
