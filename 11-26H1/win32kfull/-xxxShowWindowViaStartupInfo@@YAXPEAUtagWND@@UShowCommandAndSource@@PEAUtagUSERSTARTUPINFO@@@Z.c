/*
 * XREFs of ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229AA8
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

unsigned int *__fastcall xxxShowWindowViaStartupInfo(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  char v6; // si
  bool v7; // bp
  bool v8; // r14
  char v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bp
  bool v14; // r14
  const char *v15; // rbx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // bl
  bool v20; // bp
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v26; // r8
  bool v27; // zf
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdx
  unsigned int *result; // rax
  bool v32; // bl
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int64 v36; // [rsp+50h] [rbp-58h] BYREF
  BOOL v37; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+5Ch] [rbp-4Ch]
  int v39; // [rsp+60h] [rbp-48h]
  int v40; // [rsp+64h] [rbp-44h]
  int v41; // [rsp+68h] [rbp-40h]
  int v42; // [rsp+6Ch] [rbp-3Ch]
  int v43; // [rsp+70h] [rbp-38h]

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_BYTE *)(a2 + 4);
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      12,
      17,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      (char)a1,
      v9);
  }
  v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = "still contains";
    if ( (a3[5] & 7) == 0 )
      v15 = "does not have";
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v17) = v14;
    LOBYTE(v18) = v13;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 69152),
      4,
      12,
      18,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      (char)a1,
      (__int64)v15);
  }
  a3[5] &= 0xFFFFFFF8;
  v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69152),
      4,
      12,
      19,
      (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
      (char)a1);
  }
  v24 = a3[1];
  v25 = a3[3];
  v26 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)(unsigned int)a3[2];
  a3[5] &= ~0x20000u;
  v27 = *(_BYTE *)(a2 + 4) == 3;
  v39 = v24;
  v36 = 0LL;
  v37 = v27;
  v28 = 148;
  v40 = (int)v26;
  v43 = 0;
  if ( !v27 )
    v28 = 144;
  v41 = v24 + v25;
  v29 = a3[4];
  v38 = v28;
  v42 = (_DWORD)v26 + v29;
  AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v36, v26);
  result = (unsigned int *)a1[95];
  if ( ((unsigned __int8)result & 2) == 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v6 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
      LOBYTE(v34) = v32;
      LOBYTE(v35) = v6;
      result = (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                                 *((_QWORD *)WPP_GLOBAL_Control + 3),
                                 v35,
                                 v34,
                                 *(_QWORD *)(v33 + 69152),
                                 4,
                                 12,
                                 20,
                                 (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
                                 (char)a1);
    }
    a3[5] |= 0x20000u;
  }
  return result;
}
