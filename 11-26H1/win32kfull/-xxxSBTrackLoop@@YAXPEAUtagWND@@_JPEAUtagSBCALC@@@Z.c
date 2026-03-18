/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4
 * Callers:
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     xxxCallMsgFilter @ 0x14002004C (xxxCallMsgFilter.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x14005BDE8 (xxxTranslateMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SystoChar @ 0x1401BAD70 (SystoChar.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140251CD4 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     GetMouseMessageString @ 0x1402F59EC (GetMouseMessageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDdd @ 0x1402F7890 (WPP_RECORDER_AND_TRACE_SF_qsDdd.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  struct MOVESIZEDATA *v5; // rcx
  char v6; // di
  char v7; // r14
  char v8; // r15
  __int64 UserSessionState; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // r12
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r9
  void (__fastcall *v31)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  bool v32; // si
  __int64 MouseMessageString; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  unsigned __int64 v48; // [rsp+28h] [rbp-49h]
  int v49; // [rsp+30h] [rbp-41h]
  int v50; // [rsp+40h] [rbp-31h]
  __int128 v51; // [rsp+78h] [rbp+7h] BYREF
  __int128 v52; // [rsp+88h] [rbp+17h]
  __int128 v53; // [rsp+98h] [rbp+27h]

  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 69152),
      4u,
      9u,
      0x30u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL);
  if ( v10
    && (v11 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v10 + 48)) != 0LL )
  {
    if ( (*(_DWORD *)v10 & 2) != 0 )
      SetOrClrWF(1, a1, 0x620u, 1);
    v12 = PtiCurrent((__int64)v5);
    if ( !*(_QWORD *)(W32GetUserSessionState(v14, v13) + 18928) )
      goto LABEL_22;
    v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18928);
    if ( !*(_QWORD *)(v18 + 120) )
      goto LABEL_22;
    v20 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18928);
    if ( v20 != *((_QWORD *)v12 + 58) )
      goto LABEL_22;
    v22 = 33;
    if ( *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v19) + 18928) + 120LL) + 16LL) != v12 )
      v22 = 49;
    v24 = *(_QWORD *)(W32GetUserSessionState(49LL, v21) + 18928);
    v25 = *(struct tagTHREADINFO **)(*(_QWORD *)(v24 + 120) + 16LL) == v12
        ? a1
        : *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928) + 120LL);
    xxxWindowEvent(0x80000004, v25, 0, 3, v22);
    if ( v10 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL) )
    {
LABEL_22:
      xxxWindowEvent(0x12u, a1, ((*(_DWORD *)v10 & 2) != 0) | 0xFFFFFFFA, 0, 0);
      v11(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*((_QWORD *)v12 + 58) + 112LL) == a1 )
      {
        LODWORD(v48) = 1;
        if ( !(unsigned int)xxxInternalGetMessage((__int64)&v51, 0, 0, 0, v48, 1) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v6 = 0;
          }
          v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v40 = *(_QWORD *)a1;
            v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
            LOBYTE(v42) = v39;
            LOBYTE(v43) = v6;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v43,
              v42,
              *(_QWORD *)(v41 + 69152),
              4,
              9,
              50,
              (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
              v40);
          }
          return;
        }
        if ( !(unsigned int)xxxCallMsgFilter((__int64)&v51, 5) )
        {
          v27 = *(_QWORD *)a1;
          if ( (_QWORD)v51 == *(_QWORD *)a1
            && ((unsigned int)(DWORD2(v51) - 512) <= 0xE || (unsigned int)(DWORD2(v51) - 256) <= 9) )
          {
            v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL);
            if ( !v28 || !*(_QWORD *)(v28 + 48) )
            {
              if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
              {
                v6 = 0;
              }
              v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                MouseMessageString = GetMouseMessageString(DWORD2(v51));
                v36 = W32GetUserSessionState(v35, v34);
                LOBYTE(v37) = v32;
                LOBYTE(v38) = v6;
                WPP_RECORDER_AND_TRACE_SF_qsDdd(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v38,
                  v37,
                  *(_QWORD *)(v36 + 69152),
                  v48,
                  v49,
                  51,
                  v50,
                  v27,
                  MouseMessageString,
                  SBYTE8(v51),
                  SBYTE8(v52),
                  SBYTE10(v52));
              }
              return;
            }
            v29 = SystoChar(DWORD2(v51), SDWORD2(v52));
            v31(a1, v29, v52, v30, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)&v51, 0);
            xxxDispatchMessage((struct tagMSG *)&v51);
          }
        }
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v6 = 0;
    }
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v46,
        *(_QWORD *)(v45 + 69152),
        4,
        9,
        49,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
    }
  }
}
