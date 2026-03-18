/*
 * XREFs of ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C6F74 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14019DC18 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1401A0704 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1401A07E8 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140261F74 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x140292C38 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall MoveSizeApi::xxxMoveSizeWithoutCapture(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  bool v8; // bl
  bool v9; // si
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // r13
  __int64 UserSessionState; // rax
  struct MOVESIZEDATA *v19; // r13
  struct MOVESIZEDATA *v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  char v23; // [rsp+20h] [rbp-60h]
  __int16 v24; // [rsp+30h] [rbp-50h]
  char v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h] BYREF
  struct MOVESIZEDATA *v28; // [rsp+78h] [rbp-8h] BYREF
  int v29; // [rsp+CCh] [rbp+4Ch]
  __int64 v30; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+D8h] [rbp+58h]

  v31 = a4;
  v30 = a3;
  v29 = HIDWORD(a2);
  v4 = a2;
  result = (__int64)MOVESIZEDATA::CreateMoveSizeData(a1);
  v28 = (struct MOVESIZEDATA *)result;
  if ( result )
  {
    v13 = *((_QWORD *)a1 + 5);
    v26 = 0LL;
    v14 = ValidateHmonitor(*(_QWORD *)(v13 + 256));
    v15 = *((_QWORD *)a1 + 5);
    v27 = v14;
    PhysicalToLogicalDPIPoint(&v26, &v30, *(unsigned int *)(v15 + 288), &v27);
    v17 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      WPP_RECORDER_AND_TRACE_SF_dddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v25,
        *(_QWORD *)(UserSessionState + 69152),
        4u,
        1u,
        0x77u,
        (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
        v4,
        v29,
        v26,
        HIDWORD(v26));
    }
    xxxSendMessage(a1, 0x231u);
    v19 = v28;
    v20 = v28;
    v21 = v31;
    *(_QWORD *)((char *)v28 + 260) = v30;
    *((_DWORD *)v20 + 50) &= 0xFFFFC7FF;
    xxxInitializeMoveSizeData(a1, v20, v21, (unsigned __int16)v4 | ((unsigned __int16)v29 << 16));
    xxxMS_TrackMove(
      a1,
      514,
      0LL,
      (unsigned __int16)(*((_WORD *)v19 + 84) + v26) | ((unsigned __int16)(*((_WORD *)v19 + 86) + WORD2(v26)) << 16),
      v19);
    DWM_ARRANGEMENT_DATA::SetShrinkWidth((struct MOVESIZEDATA *)((char *)v19 + 400), 0LL, v19);
    DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)v19 + 400), v19);
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((struct MOVESIZEDATA *)((char *)v19 + 400), 0LL, v19);
    MOVESIZEDATA::FreeMoveSizeData(&v28);
    result = xxxSendMessage(a1, 0x232u);
    v8 = 0;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      result = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
        v8 = 1;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      v24 = 120;
      v23 = 4;
      goto LABEL_26;
    }
  }
  else
  {
    v8 = 0;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
    {
      result = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v8 = 1;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      v24 = 118;
      v23 = 2;
LABEL_26:
      LOBYTE(v12) = v9;
      LOBYTE(v11) = v8;
      return WPP_RECORDER_AND_TRACE_SF_(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v11,
               v12,
               *(_QWORD *)(v10 + 69152),
               v23,
               1,
               v24,
               (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids);
    }
  }
  return result;
}
