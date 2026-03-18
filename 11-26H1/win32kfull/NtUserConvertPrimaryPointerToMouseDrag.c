/*
 * XREFs of NtUserConvertPrimaryPointerToMouseDrag @ 0x1402B03B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetMiPPromotion @ 0x140054DB4 (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x140135AFC (xxxPromotePointerToMouse.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GetPromotablePointerIdForThread @ 0x1402AA278 (GetPromotablePointerIdForThread.c)
 *     Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline @ 0x1402AF144 (Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 NtUserConvertPrimaryPointerToMouseDrag()
{
  struct tagTHREADINFO *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // rdx
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // r8d
  struct MOVESIZEDATA *v9; // rcx
  __int64 v10; // rdx
  char v11; // si
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v17; // rdx
  unsigned __int16 PromotablePointerIdForThread; // r13
  char v19; // bl
  char v20; // r12
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  bool v25; // si
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdx
  unsigned __int16 v30; // r13
  char v31; // r12
  __int64 v32; // rax
  int v33; // edx
  int v34; // r8d
  __int64 v35; // rdx
  __int16 v36; // [rsp+30h] [rbp-A8h]
  __int16 v37; // [rsp+30h] [rbp-A8h]
  char v38; // [rsp+40h] [rbp-98h]
  bool v39; // [rsp+E0h] [rbp+8h]
  bool v40; // [rsp+E0h] [rbp+8h]
  struct tagTHREADINFO *v41; // [rsp+E8h] [rbp+10h] BYREF

  v0 = (struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( (unsigned int)Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline() )
  {
    v41 = v0;
    if ( *((_DWORD *)v0 + 360) == 2 )
    {
      if ( !(unsigned __int8)IsCapturedByThread(&v41) )
      {
        v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_13;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
        v36 = 116;
        goto LABEL_12;
      }
      SetMiPPromotion(v41, 582);
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v11 = 0;
      }
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(v13 + 69152),
          4,
          10,
          117,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
      }
LABEL_21:
      v2 = 1LL;
      goto LABEL_22;
    }
    PromotablePointerIdForThread = GetPromotablePointerIdForThread((__int64)v0, v1);
    if ( !PromotablePointerIdForThread )
    {
      v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_13;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      v36 = 118;
      goto LABEL_12;
    }
    v19 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v20 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v39;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v23,
        *(_QWORD *)(v21 + 69152),
        4,
        10,
        119,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        PromotablePointerIdForThread);
    }
    if ( xxxPromotePointerToMouse(PromotablePointerIdForThread, 0x10001u) )
      goto LABEL_21;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v19 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
    v38 = PromotablePointerIdForThread;
    v37 = 120;
LABEL_47:
    LOBYTE(v28) = v25;
    LOBYTE(v27) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v28,
      *(_QWORD *)(v26 + 69152),
      3,
      10,
      v37,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
      v38);
    goto LABEL_13;
  }
  v30 = GetPromotablePointerIdForThread((__int64)v0, v1);
  if ( v30 )
  {
    v19 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
      || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v31 = 0;
    }
    v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v40;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v34,
        *(_QWORD *)(v32 + 69152),
        4,
        10,
        122,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        v30);
    }
    if ( xxxPromotePointerToMouse(v30, 0x10001u) )
      goto LABEL_21;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v19 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
    v38 = v30;
    v37 = 123;
    goto LABEL_47;
  }
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 9u)
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_13;
  UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
  v36 = 121;
LABEL_12:
  LOBYTE(v8) = v5;
  LOBYTE(v7) = v4;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v7,
    v8,
    *(_QWORD *)(UserSessionState + 69152),
    3,
    10,
    v36,
    (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
LABEL_13:
  UserSetLastError(5023);
LABEL_22:
  UserSessionSwitchLeaveCrit(v9);
  return v2;
}
