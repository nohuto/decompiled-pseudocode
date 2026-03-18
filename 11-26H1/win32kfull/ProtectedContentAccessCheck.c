/*
 * XREFs of ProtectedContentAccessCheck @ 0x1401F6B6C
 * Callers:
 *     ValidateNewParent @ 0x14012E85C (ValidateNewParent.c)
 * Callees:
 *     IsWindowContentProtected @ 0x14001475C (IsWindowContentProtected.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 */

__int64 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  __int64 TopLevelWindow; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx

  TopLevelWindow = GetTopLevelWindow(a1);
  v3 = TopLevelWindow;
  if ( !TopLevelWindow )
    return 1LL;
  v4 = *(_QWORD *)(TopLevelWindow + 40);
  if ( *(char *)(v4 + 232) < 0 )
  {
    v4 = *(_QWORD *)(TopLevelWindow + 16);
    if ( *(_QWORD *)(v4 + 1592) )
      v3 = *(_QWORD *)(v4 + 1592);
  }
  if ( !(unsigned int)IsWindowContentProtected(v3, v4) )
    return 1LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v7 = *(_QWORD *)(v3 + 16);
  v8 = *(_QWORD *)(v7 + 456);
  if ( v8 == CurrentProcessWin32Process )
    return 1LL;
  if ( v8 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) )
    return (*((_DWORD *)PtiCurrent(v7) + 340) >> 18) & 1;
  return 0LL;
}
