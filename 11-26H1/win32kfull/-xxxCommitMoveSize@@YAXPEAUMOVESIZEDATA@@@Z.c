/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402C623C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402C47F0 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402C48F8 (-MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowP.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402C4FD4 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall xxxCommitMoveSize(struct MOVESIZEDATA *a1)
{
  __int64 v1; // rdx
  const struct tagWND *v3; // r14
  char v4; // r13
  char v5; // bl
  bool v6; // si
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  __m128i v15; // xmm1
  int v16; // r8d
  int v17; // ebx
  int v18; // r13d
  int v19; // r8d
  __int64 v20; // rdx
  char v21; // r15
  char v22; // bl
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  bool v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+54h] [rbp-ACh]
  __int128 v31; // [rsp+58h] [rbp-A8h]
  _DWORD v32[10]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  int v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A4h] [rbp-5Ch]
  int v37; // [rsp+A8h] [rbp-58h]
  _BYTE v38[40]; // [rsp+128h] [rbp+28h] BYREF

  v1 = *((unsigned int *)a1 + 50);
  v3 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v4 = 1;
  if ( (v1 & 0x80u) == 0LL || (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 1) == 0 )
  {
    LODWORD(v1) = v1 | 0x1000000;
    *((_DWORD *)a1 + 50) = v1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_QWORD *)v3;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v1);
      LOBYTE(v12) = v4;
      LOBYTE(v13) = v29;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        1,
        57,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v10);
    }
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v32, 1);
    v14 = v32[0];
    v15 = *(__m128i *)((char *)a1 + 24);
    v16 = *((_DWORD *)a1 + 50);
    v17 = *((_DWORD *)a1 + 8);
    v32[0] |= 0x10u;
    v30 = v17;
    v18 = _mm_cvtsi128_si32(v15);
    v19 = v16 & 0x10000000;
    if ( v19 || *((_DWORD *)a1 + 62) || (*(_BYTE *)(*((_QWORD *)v3 + 5) + 30LL) & 1) == 0 )
    {
      v28 = v14 | 0x30;
      v33 = 3;
      if ( !v19 )
        v33 = 0;
      v32[3] = v18;
      v32[4] = v15.m128i_i32[1];
      v32[5] = v17 - v18;
      v32[0] = v28 | 6;
      v32[6] = v15.m128i_i32[3] - v15.m128i_i32[1];
      if ( !v19 )
      {
        AdvancedWindowPos::CWindowAction::SetMonitor(
          (AdvancedWindowPos::CWindowAction *)v32,
          *((struct tagMONITOR **)a1 + 27),
          0,
          v3);
LABEL_39:
        MarkActionForMoveSizeShellNotifications(a1, (struct AdvancedWindowPos::CWindowAction *)v32);
        AdvancedWindowPos::xxxApplyWindowAction(v3, v32, 9LL);
        CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v38);
        return;
      }
    }
    else
    {
      v33 = 1;
      v32[0] = v14 | 0x30;
      AdvancedWindowPos::CWindowAction::SetMonitor(
        (AdvancedWindowPos::CWindowAction *)v32,
        *((struct tagMONITOR **)a1 + 30),
        1,
        v3);
    }
    v31 = *(_OWORD *)((char *)a1 + 152);
    if ( KeepCheckpointLeftRightAligned(a1) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v21 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v22 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v22 = 0;
      }
      if ( v21 || v22 )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69152),
          5,
          1,
          58,
          (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
      }
      v26 = v32[0];
      v27 = v30;
    }
    else
    {
      v27 = DWORD2(v31);
      v26 = v32[0] | 0x80;
      v18 = v31;
    }
    v34 = v18;
    v32[0] = v26 | 0x40;
    v35 = DWORD1(v31);
    v37 = HIDWORD(v31);
    v36 = v27;
    goto LABEL_39;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = W32GetUserSessionState(WPP_GLOBAL_Control, v1);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(v7 + 69152),
      4,
      1,
      56,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
  }
}
