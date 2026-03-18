/*
 * XREFs of CreateSprite @ 0x14014D24C
 * Callers:
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400145A8 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     IsWindowContentProtected @ 0x14001475C (IsWindowContentProtected.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CreateSprite(Gre::Base *a1, __int64 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ebp
  int v9; // r8d
  BOOL v10; // r12d
  __int64 v11; // rcx
  BOOL v12; // esi
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  char Prop; // bl
  int v18; // eax
  void *Sprite; // rdx
  __int64 result; // rax
  _BYTE v22[144]; // [rsp+70h] [rbp-E8h] BYREF

  memset_0(v22, 0, 0x88uLL);
  InitializeMiniWinInfo((const struct tagWND *const)a2, (struct tagMINIWINDOWINFO *)v22);
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_BYTE *)(v7 + 31) & 0x10;
  v9 = *(_WORD *)(v7 + 42) & 0x2FFF;
  v10 = v9 == 669;
  v11 = *(_QWORD *)(v7 + 88) - *(_QWORD *)(v7 + 104);
  if ( !v11 )
    v11 = *(_QWORD *)(v7 + 96) - *(_QWORD *)(v7 + 112);
  v12 = !v11 || v9 == 669;
  v13 = IsWindowContentProtected(a2, v7);
  UserSessionState = W32GetUserSessionState(v15, v14);
  Prop = GetProp(a2, *(unsigned __int16 *)(UserSessionState + 41400), 1u);
  v18 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(
             a1,
             *(HWND *)a2,
             a3,
             (struct tagMINIWINDOWINFO *)v22,
             *(_DWORD *)(a2 + 256),
             v18,
             v8,
             v10,
             v12,
             v13,
             (Prop & 0x11) != 0,
             0LL);
  result = Sprite == 0LL ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
