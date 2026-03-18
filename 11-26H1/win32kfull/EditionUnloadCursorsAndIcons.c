/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x140239690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CleanupGlobalCursorSizes@@YAXXZ @ 0x140239834 (-CleanupGlobalCursorSizes@@YAXXZ.c)
 */

void __fastcall EditionUnloadCursorsAndIcons(__int64 a1, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rcx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax

  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      10,
      (__int64)&WPP_6f3f2e22ce9e317051f30d9635f1d0e7_Traceguids);
  }
  v8 = 0LL;
  v9 = 7LL;
  do
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v2, a2) + v8 + 32400);
    if ( v10 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
      {
        v20 = -*(_QWORD *)CurrentProcessWin32Process;
        v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        CurrentProcessWin32Process &= v19;
      }
      *(_QWORD *)(v10 + 24) = CurrentProcessWin32Process;
      v21 = W32GetUserSessionState(v20, v19);
      HMAssignmentUnlock(v8 + v21 + 32400);
    }
    v8 += 552LL;
    --v9;
  }
  while ( v9 );
  v11 = 0LL;
  v12 = 19LL;
  do
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v2, a2) + v11 + 21912);
    if ( v13 )
    {
      v14 = PsGetCurrentProcessWin32Process(v2);
      if ( v14 )
      {
        v16 = -*(_QWORD *)v14;
        v15 = -(__int64)(*(_QWORD *)v14 != 0LL);
        v14 &= v15;
      }
      *(_QWORD *)(v13 + 24) = v14;
      v17 = W32GetUserSessionState(v16, v15);
      HMAssignmentUnlock(v11 + v17 + 21912);
    }
    v11 += 552LL;
    --v12;
  }
  while ( v12 );
  CleanupGlobalCursorSizes();
}
