/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C004FB48
 * Callers:
 *     ValidateNewParent @ 0x1C004FA4C (ValidateNewParent.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 ProtectedContentAccessCheck()
{
  unsigned int v0; // edi
  __int64 TopLevelWindow; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v6; // r8d
  unsigned __int8 Prop; // al
  __int64 v8; // rax

  v0 = 0;
  TopLevelWindow = GetTopLevelWindow();
  v3 = TopLevelWindow;
  if ( TopLevelWindow )
  {
    if ( *(char *)(TopLevelWindow + 290) < 0 )
    {
      v8 = *(_QWORD *)(TopLevelWindow + 16);
      v2 = *(_QWORD *)(v8 + 1232);
      if ( v2 )
        v3 = *(_QWORD *)(v8 + 1232);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v6 = 1;
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 16) + 376LL) == CurrentProcessWin32Process )
      return v6;
    Prop = GetProp(v3, (unsigned __int16)atomDispAffinity, 1LL);
    if ( (Prop & (unsigned __int8)v6) == 0 )
      return v6;
  }
  else
  {
    return 1;
  }
  return v0;
}
