/*
 * XREFs of ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1401A0304
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x14019FD9C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     WPP_RECORDER_AND_TRACE_SF_dds @ 0x14022F14C (WPP_RECORDER_AND_TRACE_SF_dds.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CallShell::xxxArrangementInfoHandler(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct tagTHREADINFO *v6; // rbx
  char v7; // si
  char v8; // r8
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v6 = PtiCurrent(a1);
  memset_0(a3, 0, 0x68uLL);
  v7 = 1;
  *a3 = **(_QWORD **)(a1 + 16);
  a3[2] = *(_QWORD *)(a1 + 260);
  *((_DWORD *)a3 + 7) = *((_DWORD *)v6 + 344);
  v8 = *(_BYTE *)(*((_QWORD *)v6 + 58) + 284LL);
  v9 = 4 * (v8 & 1);
  v10 = v9;
  LOWORD(v10) = v9 | 1;
  if ( (v8 & 0x10) == 0 )
    LOWORD(v10) = 4 * (v8 & 1);
  v11 = v10 | 2;
  if ( (v8 & 4) == 0 )
    v11 = v10;
  *((_DWORD *)a3 + 6) = v11;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v7;
    WPP_RECORDER_AND_TRACE_SF_dds(*((_QWORD *)WPP_GLOBAL_Control + 3), v15, v14, *(_QWORD *)(UserSessionState + 69152));
  }
  return anonymous_namespace_::xxxCallIAMWindowManagementHandler(a3, a2);
}
