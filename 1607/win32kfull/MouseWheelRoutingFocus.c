/*
 * XREFs of MouseWheelRoutingFocus @ 0x1C01D225C
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     IsWheelTargetDesktopApp @ 0x1C01D21F0 (IsWheelTargetDesktopApp.c)
 * Callees:
 *     <none>
 */

__int64 MouseWheelRoutingFocus()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v4; // ebx
  __int64 v5; // rcx

  if ( *(_DWORD *)UPDWORDPointer(8220LL) == 2 )
    return 0LL;
  v4 = 0;
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 64LL);
    if ( v5 )
    {
      if ( gfRawMouse && (unsigned int)IsDesktopApp(*(_QWORD *)(v5 + 376), v0, v1, v2) )
        return 1;
    }
  }
  if ( !*(_DWORD *)UPDWORDPointer(8220LL) )
    return 1;
  return v4;
}
