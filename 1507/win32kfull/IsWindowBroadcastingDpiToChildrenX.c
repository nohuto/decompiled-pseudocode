/*
 * XREFs of IsWindowBroadcastingDpiToChildrenX @ 0x1C01001C4
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsWindowBroadcastingDpiToChildrenX(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r9

  if ( *(_DWORD *)(a1 + 344) != 2 )
    return 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a1) )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(v2 + 364) != 1 )
    return 0LL;
  return result;
}
