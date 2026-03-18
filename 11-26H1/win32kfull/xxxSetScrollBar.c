/*
 * XREFs of xxxSetScrollBar @ 0x140127BBC
 * Callers:
 *     NtUserSetScrollInfo @ 0x1402BDBB0 (NtUserSetScrollInfo.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x140128450 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsllllDddddd @ 0x140128938 (WPP_RECORDER_AND_TRACE_SF_qsllllDddddd.c)
 *     GetScrollbarTypeString @ 0x14012905C (GetScrollbarTypeString.c)
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxEnableWndSBArrows @ 0x1401EFCBC (xxxEnableWndSBArrows.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // r14
  int v5; // r13d
  __int64 v6; // r11
  unsigned int v7; // r10d
  struct tagWND *v8; // rsi
  char v9; // di
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  BOOL v19; // ebp
  __int64 v20; // rax
  unsigned __int16 v21; // r15
  char v22; // r12
  __int64 inited; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // r14d
  unsigned int v27; // ebx
  char v29; // r15
  bool v30; // zf
  struct tagSBCALC *v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  char v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  char v39; // cl
  int v40; // ecx
  __int64 v41; // rcx
  char v42; // r14
  bool v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  bool v49; // r14
  __int64 v50; // rbx
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rbx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // [rsp+A0h] [rbp-68h]
  bool v63; // [rsp+A1h] [rbp-67h]
  int v64; // [rsp+A4h] [rbp-64h] BYREF
  int v65; // [rsp+A8h] [rbp-60h]
  int v66; // [rsp+ACh] [rbp-5Ch]
  __int64 v67; // [rsp+B0h] [rbp-58h]
  unsigned int v69; // [rsp+118h] [rbp+10h]
  int v71; // [rsp+128h] [rbp+20h] BYREF

  v71 = a4;
  v69 = a2;
  v4 = 0;
  v5 = a4;
  v64 = 0;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v10 = 0;
  }
  v62 = v10;
  v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v65 = *(_DWORD *)(a3 + 8);
    IsVisible(a1);
    UserSessionState = W32GetUserSessionState(v12, v11);
    GetScrollbarTypeString(v69, v14, v15, *(_QWORD *)(UserSessionState + 69152));
    LOBYTE(v16) = v63;
    LOBYTE(v17) = v62;
    v5 = v71;
    WPP_RECORDER_AND_TRACE_SF_qsllllDddddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v17, v16, v18);
    v7 = v69;
    v6 = a3;
    v4 = 0;
    v8 = a1;
    v9 = 1;
  }
  if ( v5 )
    v5 = IsVisible(v8);
  v66 = (v7 != 0) - 6;
  v19 = v7 != 0;
  v20 = *((_QWORD *)v8 + 5);
  v21 = v7 != 0 ? 3616 : 3600;
  v67 = v21;
  v22 = *(_BYTE *)(((unsigned __int64)v21 >> 8) + v20 + 16) & (v7 != 0 ? 32 : 16);
  v65 = v22 != 0;
  v71 = v65;
  if ( (*(_DWORD *)(v6 + 4) & 1) != 0 || v22 || *((_QWORD *)v8 + 19) )
  {
    inited = *((_QWORD *)v8 + 19);
    if ( inited )
    {
      v24 = 0;
    }
    else
    {
      v24 = 1;
      inited = InitPwSB(v8);
      if ( !inited )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v9 = 0;
        }
        v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v50 = *(_QWORD *)v8;
          v51 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
          LOBYTE(v52) = v49;
          LOBYTE(v53) = v9;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v53,
            v52,
            *(_QWORD *)(v51 + 69152),
            2,
            9,
            29,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v50);
        }
        return 0LL;
      }
      v6 = a3;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(16LL * v19 + 4 + inited),
                          (struct tagSCROLLINFO *)v6,
                          &v71,
                          &v64)
      && !v24 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v29 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v4 = 1;
      }
      if ( v29 || v4 )
      {
        v54 = *(_QWORD *)v8;
        v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v56) = v4;
        LOBYTE(v57) = v29;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v57,
          v56,
          *(_QWORD *)(v55 + 69152),
          5,
          9,
          30,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v54);
      }
      if ( !v22 )
        return (unsigned int)v64;
      v30 = v5 == 0;
      goto LABEL_31;
    }
    SetOrClrWF(0, v8, v21, 1);
    v26 = v71;
    if ( v71 )
    {
      SetOrClrWF(1, v8, v21, 1);
    }
    else if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 30LL) & 0x30) == 0 )
    {
      v33 = (_DWORD *)*((_QWORD *)v8 + 19);
      if ( v33[1] == v33[2] && v33[5] == v33[6] )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
          || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v34 = 0;
        }
        LOBYTE(v71) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v35 = *(_QWORD *)v8;
          v36 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v37) = v34;
          LOBYTE(v38) = v71;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v37,
            v38,
            *(_QWORD *)(v36 + 69152),
            4,
            9,
            31,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v35);
        }
        RtlFreeHeap(*(PVOID *)(*((_QWORD *)v8 + 3) + 136LL), 0, *((PVOID *)v8 + 19));
        v21 = v67;
        *(_QWORD *)(*((_QWORD *)v8 + 5) + 144LL) = 0LL;
        *((_QWORD *)v8 + 19) = 0LL;
      }
    }
    if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
    {
      if ( v22 )
      {
        SetOrClrWF(1, v8, v21, 1);
        v27 = v69;
        xxxEnableWndSBArrows(v8, v69, v26 == 0 ? 3 : 0);
LABEL_18:
        if ( !v26 || !v5 )
          return (unsigned int)v64;
        v39 = *(_BYTE *)(*((_QWORD *)v8 + 5) + 16LL);
        if ( v27 )
          v40 = v39 & 2;
        else
          v40 = v39 & 4;
        v30 = v40 == 0;
LABEL_31:
        if ( !v30 )
        {
          xxxWindowEvent(0x800Eu, v8, v66, 0, 1);
          v32 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 744LL);
          if ( !v32
            || v8 != *(struct tagWND **)(v32 + 8)
            || ((*(_DWORD *)v32 >> 1) & 1) != v19
            || *(void (__usercall **)(struct tagWND *@<rcx>, unsigned int@<edx>, unsigned __int64@<r8>, __int64@<r9>, struct tagSBCALC *))(v32 + 48) != xxxTrackThumb )
          {
            DrawThumb(v8, v31, v19);
          }
        }
        return (unsigned int)v64;
      }
    }
    else
    {
      v65 ^= v26;
      if ( v65 )
      {
        v41 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 744LL);
        if ( v41 && v8 == *(struct tagWND **)(v41 + 8) )
          *(_DWORD *)v41 |= 8u;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
          || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v42 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v9 = 0;
        }
        if ( v42 || v9 )
        {
          v58 = *(_QWORD *)v8;
          v59 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v60) = v9;
          LOBYTE(v61) = v42;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v61,
            v60,
            *(_QWORD *)(v59 + 69152),
            5,
            9,
            32,
            (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
            v58);
        }
        xxxSetWindowPos(v8, 0LL, 0LL, 0LL, 0, 0, 55);
        return (unsigned int)v64;
      }
    }
    v27 = v69;
    goto LABEL_18;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v9 = 0;
  }
  v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v45 = *(_QWORD *)v8;
    v46 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v47) = v43;
    LOBYTE(v48) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v48,
      v47,
      *(_QWORD *)(v46 + 69152),
      2,
      9,
      28,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v45);
  }
  UserSetLastError(1447);
  return 0LL;
}
