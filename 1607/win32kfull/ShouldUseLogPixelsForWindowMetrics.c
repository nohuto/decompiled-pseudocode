/*
 * XREFs of ShouldUseLogPixelsForWindowMetrics @ 0x1C0072364
 * Callers:
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall ShouldUseLogPixelsForWindowMetrics(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 TopLevelWindow; // rax
  int v7; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      v7 = 2 * *(_DWORD *)(v4 + 288);
    }
    else
    {
      TopLevelWindow = GetTopLevelWindow(v4, v2, v3, v4);
      if ( !TopLevelWindow )
        return v1;
      v7 = *(_DWORD *)(TopLevelWindow + 288);
    }
    return (unsigned int)(v7 >> 31);
  }
  return v1;
}
