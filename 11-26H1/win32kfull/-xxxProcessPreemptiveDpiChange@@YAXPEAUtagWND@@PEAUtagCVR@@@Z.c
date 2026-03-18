/*
 * XREFs of ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddq @ 0x140299890 (WPP_RECORDER_AND_TRACE_SF_ddddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddds @ 0x1402999D0 (WPP_RECORDER_AND_TRACE_SF_qddddddds.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

void __fastcall xxxProcessPreemptiveDpiChange(struct tagWND *a1, struct tagCVR *a2)
{
  struct tagWND *v3; // rdi
  __int16 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r11d
  LONG v7; // esi
  LONG v8; // r14d
  LONG v9; // eax
  __int64 v10; // rdx
  struct tagMONITOR *v11; // rbx
  char v12; // si
  bool v13; // r14
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rdx
  char v19; // si
  bool v20; // r14
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int16 WindowDpiLastNotify; // ax
  __int64 v26; // rdx
  __int16 v27; // r8
  __int64 v28; // rax
  char v29; // si
  char v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  struct MOVESIZEDATA *v34; // rcx
  char v35; // si
  bool v36; // al
  __int64 v37; // rdi
  __int64 v38; // rax
  LONG right; // r8d
  LONG v40; // edx
  __int64 v41; // rdx
  bool v42; // r14
  __int64 v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  bool v49; // bl
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  __int64 v53; // rdx
  bool v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  char v58; // bl
  __int64 v59; // rax
  __int64 v60; // [rsp+40h] [rbp-79h]
  LONG top; // [rsp+90h] [rbp-29h]
  __int128 Buf1; // [rsp+98h] [rbp-21h] BYREF
  struct tagRECT Buf2; // [rsp+A8h] [rbp-11h] BYREF
  _OWORD v64[5]; // [rsp+B8h] [rbp-1h] BYREF
  struct tagBWL *v66; // [rsp+128h] [rbp+6Fh] BYREF
  bool v67; // [rsp+130h] [rbp+77h]
  __int16 v68; // [rsp+138h] [rbp+7Fh]

  v3 = a1;
  if ( (*((_DWORD *)a2 + 8) & 0x80000) == 0
    || (*((_DWORD *)a2 + 39) & 0x20) == 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2
    || (*((_DWORD *)a1 + 95) & 0x100000) == 0
    || !IsTopLevelWindow((__int64)a1)
    || (*(_BYTE *)(v5 + 31) & 0x21) != 0 )
  {
    return;
  }
  v7 = *((_DWORD *)a2 + 4);
  v8 = *((_DWORD *)a2 + 5);
  Buf2.right = v7 + *((_DWORD *)a2 + 6);
  v9 = v8 + *((_DWORD *)a2 + 7);
  Buf2.left = v7;
  top = v8;
  Buf2.top = v8;
  Buf2.bottom = v9;
  if ( (v4 & 0x200) != 0 )
  {
    *(_QWORD *)&Buf1 = ValidateHmonitorNoRip(*((_QWORD *)a2 + 16));
    v11 = (struct tagMONITOR *)Buf1;
    if ( !(_QWORD)Buf1 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v12 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v14 = *(_QWORD *)v3;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v16) = v13;
        LOBYTE(v17) = v12;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69152),
          3,
          4,
          10,
          (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
          v14);
      }
      return;
    }
    goto LABEL_25;
  }
  *(_QWORD *)&Buf1 = MonitorFromRect(&Buf2.left, 0LL, v6);
  v11 = (struct tagMONITOR *)Buf1;
  if ( (_QWORD)Buf1 )
  {
    top = Buf2.top;
LABEL_25:
    v24 = *((_QWORD *)v3 + 5);
    if ( *(_QWORD *)(v24 + 256) != *(_QWORD *)v11 || *(_WORD *)(v24 + 286) )
    {
      v68 = *(_WORD *)(*((_QWORD *)v11 + 5) + 60LL);
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v3);
      if ( v27 != WindowDpiLastNotify )
        goto LABEL_41;
      v28 = *(_QWORD *)(v26 + 88) - *(_QWORD *)&Buf2.left;
      if ( !v28 )
        v28 = *(_QWORD *)(v26 + 96) - *(_QWORD *)&Buf2.right;
      if ( v28 )
      {
        v29 = 1;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v30 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v29 = 0;
        }
        if ( v30 || v29 )
        {
          v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
          LOBYTE(v32) = v29;
          LOBYTE(v33) = v30;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v32,
            *(_QWORD *)(v31 + 69152),
            5,
            4,
            12,
            (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids);
        }
      }
      else
      {
LABEL_41:
        v34 = WPP_GLOBAL_Control;
        v35 = 1;
        v36 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        LOBYTE(v66) = v36;
        v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v36 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v37 = *(_QWORD *)v3;
          LOBYTE(v34) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v38 = W32GetUserSessionState(v34, v26);
          right = Buf2.right;
          v40 = top;
          LOBYTE(right) = v67;
          LOBYTE(v40) = (_BYTE)v66;
          HIDWORD(v60) = HIDWORD(v37);
          WPP_RECORDER_AND_TRACE_SF_qddddddds(*((_QWORD *)WPP_GLOBAL_Control + 3), v40, right, *(_QWORD *)(v38 + 69152));
          v3 = a1;
          v11 = (struct tagMONITOR *)Buf1;
        }
        v66 = 0LL;
        if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)v3, v11, (__int64 *)&v66, 0) )
        {
          v64[0] = *(_OWORD *)(*((_QWORD *)v3 + 5) + 88LL);
          xxxNotifyMonitorChanged(v3, &Buf2, v66, 0);
          Buf1 = *(_OWORD *)(*((_QWORD *)v3 + 5) + 88LL);
          if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v35 = 0;
            }
            v49 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v50 = W32GetUserSessionState(WPP_GLOBAL_Control, v48);
              LOBYTE(v51) = v49;
              LOBYTE(v52) = v35;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v52,
                v51,
                *(_QWORD *)(v50 + 69152),
                4,
                4,
                15,
                (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids);
            }
            *((_DWORD *)a2 + 8) |= 0x403u;
          }
          else if ( !memcmp(&Buf1, v64, 0x10uLL) )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v35 = 0;
            }
            v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
              LOBYTE(v56) = v54;
              LOBYTE(v57) = v35;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v57,
                v56,
                *(_QWORD *)(v55 + 69152),
                4,
                4,
                16,
                (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids);
            }
          }
          else
          {
            *((_DWORD *)a2 + 8) |= 0x403u;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
            {
              v35 = 0;
            }
            v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v59 = W32GetUserSessionState(WPP_GLOBAL_Control, v53);
              LODWORD(v60) = Buf1;
              WPP_RECORDER_AND_TRACE_SF_dddd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v35,
                v58,
                *(_QWORD *)(v59 + 69152),
                3u,
                4u,
                0x11u,
                (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                v60,
                DWORD1(Buf1),
                DWORD2(Buf1),
                HIDWORD(Buf1));
            }
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v35 = 0;
          }
          v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v43 = *(_QWORD *)v11;
            v44 = *(_QWORD *)v3;
            v45 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
            LOBYTE(v46) = v42;
            LOBYTE(v47) = v35;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v47,
              v46,
              *(_QWORD *)(v45 + 69152),
              2,
              4,
              14,
              (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
              v44,
              v43);
          }
        }
      }
    }
    return;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v19 = 0;
  }
  v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_ddddq(*((_QWORD *)WPP_GLOBAL_Control + 3), v23, v22, *(_QWORD *)(v21 + 69152));
  }
}
