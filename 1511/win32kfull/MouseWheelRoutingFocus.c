/*
 * XREFs of MouseWheelRoutingFocus @ 0x1C01DA4B4
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     IsWheelTargetDesktopApp @ 0x1C01DA448 (IsWheelTargetDesktopApp.c)
 * Callees:
 *     <none>
 */

__int64 MouseWheelRoutingFocus()
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  if ( *(_DWORD *)UPDWORDPointer(8220LL) == 2 )
    return 0LL;
  v1 = 0;
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 56LL);
    if ( v2 )
    {
      if ( gfRawMouse && (unsigned int)IsDesktopApp(*(_QWORD *)(v2 + 376)) )
        return 1;
    }
  }
  if ( !*(_DWORD *)UPDWORDPointer(8220LL) )
    return 1;
  return v1;
}
