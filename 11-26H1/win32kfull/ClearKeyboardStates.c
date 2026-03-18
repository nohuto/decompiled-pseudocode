/*
 * XREFs of ClearKeyboardStates @ 0x1402796E0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x140278B60 (-UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x140252A18 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void __fastcall ClearKeyboardStates(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 UserSessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  for ( i = 0LL; i < 64; ++i )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    *(_BYTE *)(UserSessionState + i + 14328) &= 0xAAu;
  }
  v4 = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(*(_QWORD *)(v4 + 19904) + 6988LL);
  ClearKeyboardToggleStates();
  ClearCachedHotkeyModifiers(v6, v5);
}
