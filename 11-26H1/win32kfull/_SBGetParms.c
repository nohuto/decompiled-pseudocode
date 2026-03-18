/*
 * XREFs of _SBGetParms @ 0x140128C2C
 * Callers:
 *     NtUserSBGetParms @ 0x1402BAFF0 (NtUserSBGetParms.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qsDdddddl @ 0x140128DF0 (WPP_RECORDER_AND_TRACE_SF_qsDdddddl.c)
 *     GetScrollbarTypeString @ 0x14012905C (GetScrollbarTypeString.c)
 */

__int64 __fastcall SBGetParms(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v6; // r10d
  int v8; // ecx
  __int64 v9; // r9
  unsigned int v10; // r12d
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r8d
  int v15; // edx
  int v16; // r9d
  int v18; // eax
  char v19; // [rsp+E0h] [rbp+8h]
  unsigned int v20; // [rsp+E8h] [rbp+10h]
  bool v21; // [rsp+F8h] [rbp+20h]

  v20 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = a2;
  LOBYTE(a2) = 1;
  v19 = 1;
  v8 = a4[1];
  v9 = *(_QWORD *)(v4 + 744);
  if ( (v8 & 1) != 0 )
  {
    a4[2] = *a3;
    a4[3] = a3[1];
  }
  if ( (v8 & 2) != 0 )
    a4[4] = a3[2];
  if ( (v8 & 4) != 0 )
    a4[5] = a3[3];
  v10 = 0;
  if ( (v8 & 0x10) != 0 )
  {
    if ( v9 && *(_DWORD *)(v9 + 88) == v6 && *(_QWORD *)(v9 + 8) == a1 )
      v18 = *(_DWORD *)(v9 + 84);
    else
      v18 = a3[3];
    a4[6] = v18;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    LOBYTE(a2) = 0;
    v19 = 0;
  }
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    GetScrollbarTypeString(v20, v12, v13, *(_QWORD *)(UserSessionState + 69152));
    LOBYTE(v14) = v21;
    LOBYTE(v15) = v19;
    WPP_RECORDER_AND_TRACE_SF_qsDdddddl(*((_QWORD *)WPP_GLOBAL_Control + 3), v15, v14, v16);
  }
  LOBYTE(v10) = (a4[1] & 0x17) != 0;
  return v10;
}
