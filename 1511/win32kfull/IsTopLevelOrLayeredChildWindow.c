/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C0055FC4
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0050DA0 (NtUserGetWindowCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0069CF0 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1) || (*(_BYTE *)(v1 + 50) & 8) != 0 && GetTopLevelWindow(v1);
}
