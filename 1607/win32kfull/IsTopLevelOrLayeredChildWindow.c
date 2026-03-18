/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00725BC
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0053B90 (NtUserUpdateLayeredWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0078810 (NtUserGetWindowCompositionAttribute.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  return (unsigned int)IsTopLevelWindow(a1) || (*(_BYTE *)(v3 + 50) & 8) != 0 && GetTopLevelWindow(v3, v1, v2, v3);
}
