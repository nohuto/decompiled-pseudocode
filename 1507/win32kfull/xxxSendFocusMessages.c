/*
 * XREFs of xxxSendFocusMessages @ 0x1C0046914
 * Callers:
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C0046C38 (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0046CF8 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0046D80 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendFocusMessages(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-30h] BYREF

  LODWORD(v3) = 0;
  v4 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 392) + 332LL) &= ~0x800u;
  if ( !a2 )
  {
    v7 = *(_QWORD *)(a1 + 392);
    if ( *(_QWORD *)(v7 + 80) )
      *(_DWORD *)(v7 + 332) |= 0x800u;
  }
  v8 = *(__int64 **)(*(_QWORD *)(a1 + 392) + 72LL);
  v17[0] = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = v17;
  v17[1] = v8;
  if ( v8 )
    ++*((_DWORD *)v8 + 2);
  HMAssignmentLock(*(_QWORD *)(a1 + 392) + 72LL, a2);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 392) == gpqForeground )
    {
      v11 = 0;
      v12 = a2[2];
      if ( v12 != gptiCurrent )
      {
        LockW32Thread(v12, (__int64)v18);
        v11 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(a2[2], a2);
      if ( v11 )
        PopAndFreeW32ThreadLock(v18);
    }
    v10 = *(_QWORD *)(a1 + 392);
    if ( v10 == gpqForeground && a2 == *(_QWORD **)(v10 + 72) )
    {
      v10 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v10 & 0x80u) == 0LL )
        xxxApplyGlobalInputSettings(0LL);
    }
    if ( v8 )
    {
      if ( *(_QWORD *)(a1 + 392) == gpqForeground )
      {
        if ( v8[2] == a2[2] )
          xxxWindowEvent(-2147483645, (_DWORD)a2, 0, 0, 33);
        else
          xxxWindowEvent(-2147483645, (_DWORD)v8, 0, 0, 49);
      }
      xxxSendMessage(v8, 8LL, *a2);
      v10 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v8, 0LL, 0LL);
    }
    if ( a2 == *(_QWORD **)(*(_QWORD *)(a1 + 392) + 72LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(32773, (_DWORD)a2, -4, 0, 0);
      if ( (*(_DWORD *)(a2[2] + 1080LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 )
      {
        v13 = 0LL;
        if ( v8 )
          v13 = *v8;
        xxxSendNotifyMessage(a2, 7LL, v13, v4, 1);
      }
      else
      {
        v14 = 0LL;
        if ( v8 )
          v14 = *v8;
        xxxSendMessage(a2, 7LL, v14);
      }
      v10 = gpqForeground;
      if ( gpqForeground && *(_QWORD **)(gpqForeground + 72LL) == a2 )
      {
        v15 = *(_QWORD *)(a2[2] + 400LL);
        if ( v15 )
          v3 = *(_QWORD *)(v15 + 40);
        xxxWindowEvent(-2147483646, (_DWORD)a2, v3, 0, 33);
      }
    }
  }
  else if ( v8 )
  {
    if ( *(_QWORD *)(a1 + 392) == gpqForeground )
      xxxWindowEvent(-2147483645, (_DWORD)v8, 0, 0, 49);
    xxxWindowEvent(32773, 0, -4, 0, 0);
    xxxSendMessage(v8, 8LL, 0LL);
    v9 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v8, 0LL, 0LL);
  }
  return ThreadUnlock1(v10, v9);
}
