/*
 * XREFs of IsNonClientDpiScalingEnabledX @ 0x1C01DC110
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsNonClientDpiScalingEnabledX(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 2
    && (unsigned int)IsTopLevelWindow(a1)
    && (*(_DWORD *)(v2 + 288) & 0x40000000) != 0 )
  {
    return 1;
  }
  return v1;
}
