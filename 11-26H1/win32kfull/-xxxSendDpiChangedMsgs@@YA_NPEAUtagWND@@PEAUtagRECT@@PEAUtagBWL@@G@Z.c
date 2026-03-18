/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x14021F578 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x14023A878 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14028E0D0 (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1402A211C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

bool __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 v5; // r9
  int v8; // r15d
  int v9; // esi
  int v10; // eax
  __int64 v11; // r9
  struct tagRECT *v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rbx
  char v15; // al
  char v16; // r12
  __int64 v17; // rsi
  __int16 v18; // di
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 *i; // rbx
  __int64 v23; // rdx
  int v24; // ebx
  __int64 *j; // rbx
  char v27; // [rsp+80h] [rbp-19h]
  char v28; // [rsp+81h] [rbp-18h]
  char v29; // [rsp+82h] [rbp-17h]
  struct tagRECT v30; // [rsp+88h] [rbp-11h] BYREF
  struct tagRECT v31; // [rsp+98h] [rbp-1h] BYREF

  v5 = *((_QWORD *)a1 + 5);
  v8 = 0;
  v9 = 0;
  if ( (*(_BYTE *)(v5 + 288) & 0xF) == 3 )
  {
    v27 = 1;
  }
  else
  {
    v27 = 0;
    if ( *(_WORD *)(v5 + 286) )
      return 0;
    v10 = *((_DWORD *)a1 + 95);
    if ( (v10 & 0x40000) == 0 )
      return 0;
    *((_DWORD *)a1 + 95) = v10 & 0xFFFBFFFF;
  }
  v31 = 0LL;
  if ( IsTopLevelWindow((__int64)a1) )
  {
    v28 = 1;
    if ( (*(_BYTE *)(v11 + 31) & 1) != 0 )
    {
      GetRect(a1, (__int64)&v31, 66);
    }
    else if ( v12 )
    {
      v31 = *v12;
    }
    else
    {
      GetRect(a1, (__int64)&v31, 66);
      if ( a4 )
      {
        v13 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 284LL);
        if ( a4 != (_WORD)v13 )
        {
          v14 = *(_QWORD *)&v31.left;
          v30 = v31;
          if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v13, &v30, &v31) )
            ScaleDPIRect(&v31, (__m128i *)&v31, *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL), a4, v14, *(__int64 *)&v31.left);
        }
      }
    }
  }
  else
  {
    v28 = 0;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v15 = 0;
  }
  v29 = v15;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    v17 = *(_QWORD *)a1;
    v18 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v20) = v16;
    v21 = v31.bottom - v31.top;
    LOBYTE(v21) = v29;
    WPP_RECORDER_AND_TRACE_SF_qddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      22,
      (__int64)&WPP_1438f2a5ce8b301fefff07164e1e1908_Traceguids,
      v17,
      v18,
      v31.left,
      v31.top,
      v31.right,
      v31.bottom,
      LOBYTE(v31.right) - LOBYTE(v31.left),
      LOBYTE(v31.bottom) - LOBYTE(v31.top));
    v9 = 0;
  }
  if ( a1 && ((*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 || v27) )
  {
    if ( (*((_DWORD *)a1 + 95) & 0x100000) != 0 || v27 )
    {
      if ( a3 || (a3 = BuildHwndList(a1, 1LL, 0LL, 1), v9 = 1, a3) )
      {
        for ( i = (__int64 *)*((_QWORD *)a3 + 1);
              --i > (__int64 *)a3 + 4;
              v8 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
        {
          ;
        }
        if ( v28 )
        {
          v8 |= xxxSendDpiChangedMessageToTopLevelWindow(a1, &v31);
        }
        else
        {
          v24 = v8 | xxxSendDpiChangedMessageToChildWindow(*(_QWORD *)a1, 1);
          v8 = v24 | xxxSendDpiChangedMessageToChildWindow(*(_QWORD *)a1, 0);
        }
        for ( j = (__int64 *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v8 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
        if ( v9 )
          FreeHwndList(a3, v23);
      }
    }
    else if ( v28 )
    {
      v8 = xxxSendDpiChangedMessageToTopLevelWindow(a1, &v31);
    }
  }
  return v8 != 0;
}
