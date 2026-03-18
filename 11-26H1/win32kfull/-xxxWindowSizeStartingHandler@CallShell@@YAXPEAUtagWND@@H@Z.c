/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402DCC64
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C7A78 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x140192A44 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  char v5; // r8
  __int64 v6; // rcx
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // ax
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // ecx
  bool v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // [rsp+50h] [rbp-88h] BYREF
  int v19; // [rsp+58h] [rbp-80h]
  _BYTE v20[16]; // [rsp+60h] [rbp-78h] BYREF
  int v21; // [rsp+70h] [rbp-68h]
  int v22; // [rsp+74h] [rbp-64h]
  int v23; // [rsp+78h] [rbp-60h]
  int v24; // [rsp+7Ch] [rbp-5Ch]

  v2 = (int)a2;
  memset_0(&v18, 0, 0x68uLL);
  v18 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 2);
  v19 = 2;
  v21 = v2;
  v5 = *(_BYTE *)(*(_QWORD *)(v4 + 464) + 284LL);
  v6 = v5 & 1;
  LOWORD(v6) = 4 * (v5 & 1);
  v7 = v6 | 1;
  if ( (v5 & 0x10) == 0 )
    v7 = 4 * (v5 & 1);
  v8 = v7 | 2;
  if ( (v5 & 4) == 0 )
    v8 = v7;
  v22 = v8;
  v9 = PtiCurrent(v6);
  TransformRectBetweenCoordinateSpaces(
    v20,
    *((_QWORD *)this + 5) + 88LL,
    *(_QWORD *)(*((_QWORD *)v9 + 61) + 328LL),
    this);
  if ( anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)&v18, 0) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 704LL);
    if ( v11 )
    {
      v12 = v23;
      *(_DWORD *)(v11 + 380) = v24;
      *(_DWORD *)(v11 + 376) = v12;
      v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_Dq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69152));
      }
    }
  }
}
