/*
 * XREFs of MouseWheelRoutingFocus @ 0x1C01D9EA0
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D9E34 (IsWheelTargetDesktopApp.c)
 * Callees:
 *     <none>
 */

__int64 MouseWheelRoutingFocus()
{
  __int64 v0; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rcx

  if ( *(_DWORD *)UPDWORDPointer(8220LL) == 2 )
    return 0LL;
  v2 = 0;
  if ( gpqForeground )
  {
    v3 = *(_QWORD *)(gpqForeground + 56LL);
    if ( v3 )
    {
      if ( gfRawMouse && (unsigned int)IsDesktopApp(*(_QWORD *)(v3 + 384), v0) )
        return 1;
    }
  }
  if ( !*(_DWORD *)UPDWORDPointer(8220LL) )
    return 1;
  return v2;
}
