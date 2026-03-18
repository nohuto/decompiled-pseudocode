/*
 * XREFs of ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0231ED0
 * Callers:
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D1FE4 (safe_cast_fnid_to_PSBWND.c)
 *     xxxInvalidateRect @ 0x1C0215844 (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rbx
  int v6; // edi
  unsigned int v7; // eax
  struct tagWND *v8; // rcx
  int v9; // ebx

  v2 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  v6 = *(_DWORD *)(v2 + 380);
  v7 = v3 ? v3 | v6 : v6 & 0xFFFFFFFC;
  *(_DWORD *)(v4 + 380) = v7;
  if ( v6 == v7 )
    return 0LL;
  if ( (unsigned int)IsVisible((__int64)a1) )
    xxxInvalidateRect(v8, 0LL, 1);
  v9 = *(_DWORD *)(v4 + 380);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v9) & 1) != 0 )
    xxxWindowEvent(0x800Au, (__int64 *)a1, -4, 1, 1);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v9) & 2) != 0 )
    xxxWindowEvent(0x800Au, (__int64 *)a1, -4, 5, 1);
  return 1LL;
}
