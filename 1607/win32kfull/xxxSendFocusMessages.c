/*
 * XREFs of xxxSendFocusMessages @ 0x1C00A85CC
 * Callers:
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxFocusSetInputContext @ 0x1C00A8920 (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00A89E0 (xxxApplyGlobalInputSettings.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxSendFocusMessages(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  _QWORD v19[3]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-30h] BYREF

  LODWORD(v3) = 0;
  v4 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 384) + 340LL) &= ~0x800u;
  if ( !a2 )
  {
    v17 = *(_QWORD *)(a1 + 384);
    if ( *(_QWORD *)(v17 + 88) )
      *(_DWORD *)(v17 + 340) |= 0x800u;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
  v19[0] = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = v19;
  v19[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  HMAssignmentLock(*(_QWORD *)(a1 + 384) + 80LL, a2);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 384) == gpqForeground )
    {
      v10 = 0;
      v11 = a2[2];
      if ( v11 != gptiCurrent )
      {
        LockW32Thread(v11, (__int64)v20);
        v10 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(a2[2], (__int64)a2);
      if ( v10 )
        PopAndFreeW32ThreadLock((__int64)v20, v8, v12, v13);
    }
    v9 = *(_QWORD *)(a1 + 384);
    if ( v9 == gpqForeground && a2 == *(__int64 **)(v9 + 80) )
    {
      v9 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v9 & 0x80u) == 0LL )
        xxxApplyGlobalInputSettings(0LL);
    }
    if ( v7 )
    {
      if ( *(_QWORD *)(a1 + 384) == gpqForeground )
      {
        if ( *(_QWORD *)(v7 + 16) == a2[2] )
          xxxWindowEvent(0x80000003, a2, 0, 0, 33);
        else
          xxxWindowEvent(0x80000003, (__int64 *)v7, 0, 0, 49);
      }
      xxxSendMessage((struct tagWND *)v7, 8u, *a2, 0LL);
      v9 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v7, 0LL, 0LL);
    }
    if ( a2 == *(__int64 **)(*(_QWORD *)(a1 + 384) + 80LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, a2, -4, 0, 0);
      if ( (*(_DWORD *)(a2[2] + 1096) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
      {
        v18 = 0LL;
        if ( v7 )
          v18 = *(_QWORD *)v7;
        xxxSendNotifyMessage(a2, 7LL, v18, v4, 1);
      }
      else
      {
        v14 = 0LL;
        if ( v7 )
          v14 = *(_QWORD *)v7;
        xxxSendMessage((struct tagWND *)a2, 7u, v14, v4);
      }
      v9 = gpqForeground;
      if ( gpqForeground && *(__int64 **)(gpqForeground + 80LL) == a2 )
      {
        v15 = *(_QWORD *)(a2[2] + 392);
        if ( v15 )
          v3 = *(_QWORD *)(v15 + 40);
        xxxWindowEvent(0x80000002, a2, v3, 0, 33);
      }
    }
  }
  else if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 384) == gpqForeground )
      xxxWindowEvent(0x80000003, (__int64 *)v7, 0, 0, 49);
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendMessage((struct tagWND *)v7, 8u, 0LL, 0LL);
    v8 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v7, 0LL, 0LL);
  }
  return ThreadUnlock1(v9, v8);
}
