/*
 * XREFs of ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EC750
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

void __fastcall AdvancedWindowPos::xxxSetForegroundForWindowAction(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  AdvancedWindowPos *v4; // rbx
  __int64 v5; // rdx
  char v6; // si
  char v7; // bl
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // si
  char v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  __int16 v18; // r8
  __int64 v19; // rdx
  bool v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v25; // [rsp+90h] [rbp+18h]

  v4 = this;
  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 18928) == *(_QWORD *)(*((_QWORD *)this + 2) + 464LL) )
  {
    v6 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v7 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v6 = 0;
    }
    if ( v7 || v6 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        108,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  else
  {
    v11 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)v4;
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v25;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v16,
        *(_QWORD *)(v14 + 69152),
        4,
        4,
        109,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v13);
      v4 = this;
    }
    v17 = *((_DWORD *)a2 + 1);
    v18 = ((*(_BYTE *)a2 & 8) != 0 || (v17 & 4) != 0 ? 4 : 0) | 0x100;
    if ( (v17 & 0x2000) == 0 )
      v18 = (*(_BYTE *)a2 & 8) != 0 || (v17 & 4) != 0 ? 4 : 0;
    if ( !xxxSetForegroundWindowWithOptions((__int64)v4, 31LL, v18, 0) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v11 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69152),
          3,
          4,
          110,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
}
