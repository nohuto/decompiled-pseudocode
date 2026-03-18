/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C0062114
 * Callers:
 *     ValidateNewParent @ 0x1C0061FF8 (ValidateNewParent.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 TopLevelWindow; // rdi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v6; // r8d
  unsigned __int8 Prop; // al

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( TopLevelWindow )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v6 = 1;
    if ( *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 384LL) == CurrentProcessWin32Process )
      return v6;
    Prop = GetProp(TopLevelWindow, (unsigned __int16)atomDispAffinity, 1LL);
    if ( (Prop & (unsigned __int8)v6) == 0 )
      return v6;
  }
  else
  {
    return 1;
  }
  return v1;
}
