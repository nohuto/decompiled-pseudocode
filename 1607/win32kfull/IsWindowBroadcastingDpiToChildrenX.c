/*
 * XREFs of IsWindowBroadcastingDpiToChildrenX @ 0x1C011DD14
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1C011DCA0 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsWindowBroadcastingDpiToChildrenX(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v3; // r10

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 2 && (unsigned int)IsTopLevelWindow(a1) && *(int *)(v3 + 288) < 0 )
    return 1;
  return v1;
}
