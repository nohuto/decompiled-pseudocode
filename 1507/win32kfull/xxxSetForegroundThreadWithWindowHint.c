/*
 * XREFs of xxxSetForegroundThreadWithWindowHint @ 0x1C0046D80
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     xxxSetForegroundThread @ 0x1C0124820 (xxxSetForegroundThread.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C0046FC0 (SetForegroundPriority.c)
 *     ?PublishFocusChange@@YAXXZ @ 0x1C0047238 (-PublishFocusChange@@YAXXZ.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00472A4 (xxxChangeForegroundKeyboardTable.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
  if ( !a1 || !gptiForeground || *(_QWORD *)(a1 + 384) != *(_QWORD *)(gptiForeground + 384LL) )
  {
    EtwTraceFocusedProcessChange();
    CitProcessForegroundChange(a1, a2, gptiForeground);
    if ( a1 )
    {
      SetForegroundPriority(a1, 1LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 384) + 272LL) = PsChargeProcessWakeCounter(**(_QWORD **)(a1 + 384), 0LL, 0LL, 1LL);
      PsUpdateComponentPower(**(_QWORD **)(a1 + 384), 4LL, 1LL);
    }
    if ( !gptiForeground )
      goto LABEL_12;
    SetForegroundPriority(gptiForeground, 0LL);
    PsUpdateComponentPower(**(_QWORD **)(gptiForeground + 384LL), 4LL, 0LL);
    v2 = gptiForeground;
    v5 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 384LL) + 272LL);
    if ( v5 )
    {
      PsReleaseProcessWakeCounter(v5, 1LL);
      v2 = gptiForeground;
      *(_QWORD *)(*(_QWORD *)(gptiForeground + 384LL) + 272LL) = 0LL;
    }
  }
  if ( *(_QWORD *)v2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v2 + 400LL);
    goto LABEL_13;
  }
LABEL_12:
  v6 = 0LL;
LABEL_13:
  EtwTraceFocusChange(a1);
  gptiForeground = a1;
  if ( a1 && *(_DWORD *)(*(_QWORD *)(a1 + 384) + 56LL) == gpidLogonUI )
    gfEnableHexNumpad |= 2u;
  else
    gfEnableHexNumpad &= ~2u;
  PublishFocusChange();
  if ( gptiForeground )
  {
    v7 = *(_QWORD *)(gptiForeground + 400LL);
    if ( v7 )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v7 )
      {
        v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v10;
        v10[1] = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        xxxChangeForegroundKeyboardTable((struct tagKL *)v6, *(struct tagKL **)(gptiForeground + 400LL));
        ThreadUnlock1(v9, v8);
      }
    }
  }
  memset(&gafAsyncKeyStateRecentDown, 0, 0x20uLL);
  ++*(_DWORD *)(gpsi + 4252LL);
}
