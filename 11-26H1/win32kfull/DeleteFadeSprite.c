/*
 * XREFs of DeleteFadeSprite @ 0x14009B6F0
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 */

__int64 __fastcall DeleteFadeSprite(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 UserSessionState; // rsi
  __int64 v4; // rax
  void *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  v2 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(UserSessionState + 43056) & 8) != 0 )
  {
    v4 = HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 43008), 1);
    v2 = v4;
    if ( v4 && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 26LL) & 8) != 0 )
      UnsetLayeredWindow(v4, 0LL);
  }
  else if ( (unsigned int)GreIsDynamicModeChangeLocked() )
  {
    GreLockVisRgnWithDmcLockAcquiredEx();
    v5 = *(void **)(UserSessionState + 43008);
    v8 = W32GetUserSessionState(v7, v6);
    GreDeleteSprite(*(HDEV *)(*(_QWORD *)(v8 + 56968) + 40LL), 0LL, v5, 1);
    GreUnlockVisRgnWithDmcLockAcquiredEx();
  }
  else
  {
    GreLockVisRgn();
    v9 = *(void **)(UserSessionState + 43008);
    v12 = W32GetUserSessionState(v11, v10);
    GreDeleteSprite(*(HDEV *)(*(_QWORD *)(v12 + 56968) + 40LL), 0LL, v9, 1);
    GreUnlockVisRgn(v13);
  }
  result = v2;
  *(_QWORD *)(UserSessionState + 43008) = 0LL;
  return result;
}
