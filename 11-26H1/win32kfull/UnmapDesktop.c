/*
 * XREFs of UnmapDesktop @ 0x1401D2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x14005A254 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1401D2F9C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1, __int64 a2)
{
  struct tagDESKTOP *v2; // rsi
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 UserGdiSessionState; // rax
  struct _KPROCESS *v9; // rcx

  v2 = *(struct tagDESKTOP **)(a1 + 24);
  v4 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2);
  if ( !v4 )
    EnterCrit(1LL, 0LL);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(*(_QWORD *)(a1 + 24) - 40LL) + 1;
  v6 = ReferenceDwmProcess();
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v5);
    v9 = *(struct _KPROCESS **)(a1 + 16);
    if ( v9 != *(struct _KPROCESS **)(UserGdiSessionState + 40) && v9 != (struct _KPROCESS *)v6 )
      FreeView(v9, v2);
  }
  DereferenceDwmProcess(v6);
  if ( *(_DWORD *)(a1 + 36) == 1 )
    DestroyDesktop(v2);
  if ( !v4 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return 0LL;
}
