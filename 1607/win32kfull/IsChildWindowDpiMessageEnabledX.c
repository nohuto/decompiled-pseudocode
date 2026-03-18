/*
 * XREFs of IsChildWindowDpiMessageEnabledX @ 0x1C01DC0C0
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall IsChildWindowDpiMessageEnabledX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 2 )
  {
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( a1 == TopLevelWindow )
    {
      return 1;
    }
    else if ( TopLevelWindow )
    {
      return *(int *)(TopLevelWindow + 288) < 0;
    }
  }
  return v1;
}
