/*
 * XREFs of IsChildWindowDpiMessageEnabledX @ 0x1C01E57D4
 * Callers:
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall IsChildWindowDpiMessageEnabledX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 TopLevelWindow; // rcx

  v1 = 0;
  v2 = a1;
  if ( *(_DWORD *)(a1 + 344) == 2 )
  {
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( v2 == TopLevelWindow )
    {
      return 1;
    }
    else if ( !TopLevelWindow || *(_DWORD *)(TopLevelWindow + 364) == 1 )
    {
      do
      {
        if ( *(_DWORD *)(v2 + 364) )
          break;
        v2 = *(_QWORD *)(v2 + 88);
      }
      while ( v2 );
      if ( v2 && *(_DWORD *)(v2 + 364) == 1 )
        return 1;
    }
  }
  return v1;
}
