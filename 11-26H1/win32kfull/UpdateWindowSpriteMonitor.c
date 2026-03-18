/*
 * XREFs of UpdateWindowSpriteMonitor @ 0x1400A6748
 * Callers:
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x14021643C (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GreDwmNotifySpriteMonitorChange @ 0x1400A67DC (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1400A6978 (InitializeMonitorInfo.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall UpdateWindowSpriteMonitor(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  _BYTE v9[80]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset_0(v9, 0, 0x48uLL);
      InitializeMonitorInfo(v9, *(unsigned int *)(v2 + 288), a2, a1);
      v5 = *a1;
      UserSessionState = W32GetUserSessionState(v7, v6);
      GreDwmNotifySpriteMonitorChange(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), v5, 0LL, v9);
    }
  }
}
