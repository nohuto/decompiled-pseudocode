/*
 * XREFs of xxxBroadcastMessageEx @ 0x140092830
 * Callers:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140004B14 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x1400927F4 (xxxBroadcastMessage.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x140238BF0 (xxxBroadcastDisplaySettingsChange.c)
 * Callees:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140004B14 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z @ 0x140092484 (-TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqd @ 0x14026CA7C (WPP_RECORDER_AND_TRACE_SF_sqd.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402915C8 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        struct tagWND **a1,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG_PTR *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned __int64 v9; // r12
  struct tagWND **v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  struct MOVESIZEDATA *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  ULONG_PTR *v24; // r14
  ULONG_PTR v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rax
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v31; // r8
  ULONG_PTR *v32; // rcx
  __int64 v33; // rbx
  _WORD *v34; // rcx
  unsigned __int16 v35; // ax
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v37; // r9
  bool v38; // al
  char v39; // r12
  char v40; // al
  char v41; // r12
  struct _LARGE_STRING *v42; // r9
  unsigned int v43; // edx
  unsigned __int64 v44; // r8
  __int64 v46; // rax
  char v47; // al
  char v48; // r12
  unsigned __int8 v49; // al
  struct tagTHREADINFO *v50; // rdi
  char v51; // bl
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // edx
  const char *v56; // rcx
  int v57; // r8d
  __int64 v58; // rcx
  unsigned int v59; // ecx
  unsigned __int8 v60; // al
  struct tagTHREADINFO *v61; // rdi
  char v62; // bl
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // edx
  int v67; // r8d
  unsigned __int8 ThreadId; // al
  struct tagTHREADINFO *v69; // rdi
  char v70; // bl
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // edx
  int v75; // r8d
  int BugCheckParameter4; // [rsp+20h] [rbp-A9h]
  int v77; // [rsp+28h] [rbp-A1h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v79; // [rsp+70h] [rbp-59h]
  ULONG_PTR v80[2]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v81; // [rsp+88h] [rbp-41h]
  __int64 v82; // [rsp+90h] [rbp-39h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-31h] BYREF
  struct tagTHREADINFO *v84; // [rsp+A8h] [rbp-21h]
  struct tagBWL *v85; // [rsp+B0h] [rbp-19h]
  bool v86; // [rsp+118h] [rbp+4Fh]
  char v87; // [rsp+118h] [rbp+4Fh]
  char v88; // [rsp+118h] [rbp+4Fh]

  v9 = a3;
  v11 = a1;
  v84 = PtiCurrent((__int64)a1);
  if ( a2 - 1024 > 0xBBFF )
  {
    v12 = a7;
    if ( !a7 && (a2 == 21 || a2 == 26 || a2 == 29 || a2 == 295 || a2 == 794 || a2 - 804 <= 1) )
    {
      v12 = 1;
      a7 = 1;
    }
    if ( v11 )
    {
LABEL_4:
      v85 = BuildHwndList(v11[14], 2LL, 0LL, 1);
      if ( v85 )
      {
        TraceLoggingBroadcastMessage((const struct tagWND *)v11, a2, v9, a5);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v81 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v16 = (struct MOVESIZEDATA *)-*(_QWORD *)CurrentProcessWin32Process;
          v15 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v81 = v15;
        }
        v80[0] = (ULONG_PTR)v85 + 32;
        v17 = *((_QWORD *)v85 + 4);
        if ( v17 != 1 )
        {
          while ( 1 )
          {
            PsGetCurrentThreadWin32Thread(v16);
            v16 = *(struct MOVESIZEDATA **)(W32GetUserSessionState(v19, v18) + 19904);
            if ( (unsigned __int64)(unsigned __int16)v17 < *((_QWORD *)v16 + 1) )
            {
              UserSessionState = W32GetUserSessionState(v16, v15);
              v23 = *(_DWORD *)(W32GetUserSessionState(v22, v21) + 19928) * (unsigned int)(unsigned __int16)v17
                  + *(_QWORD *)(UserSessionState + 19920);
              v24 = (ULONG_PTR *)HMPkheFromPhe(v23);
              LOWORD(v17) = WORD1(v17) & 0x7FFF;
              if ( ((WORD1(v17) & 0x7FFF) == *(_WORD *)(v23 + 26)
                 || (_WORD)v17 == 0x7FFF
                 || !(_WORD)v17 && PsGetCurrentProcessWow64Process(v16, v15))
                && (*(_BYTE *)(v23 + 25) & 1) == 0
                && *(_BYTE *)(v23 + 24) == 1 )
              {
                v25 = *v24;
                if ( v25 )
                {
                  v16 = (struct MOVESIZEDATA *)(*(_WORD *)(*(_QWORD *)(v25 + 40) + 42LL) & 0x2FFF);
                  if ( (_DWORD)v16 != 668 )
                  {
                    v15 = *(unsigned __int16 *)(W32GetUserSessionState(v16, v15) + 41370);
                    v16 = *(struct MOVESIZEDATA **)(*(_QWORD *)(v25 + 136) + 8LL);
                    if ( (_WORD)v15 != *(_WORD *)v16 )
                    {
                      if ( a2 - 784 > 1
                        || (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 0x10) != 0
                        || (v16 = *(struct MOVESIZEDATA **)(v25 + 16),
                            (_InterlockedCompareExchange((volatile signed __int32 *)v16 + 130, 0, 0) & 0x800) != 0) )
                      {
                        if ( a8 == 1 )
                        {
                          if ( *(_DWORD *)(*(_QWORD *)(v25 + 40) + 236LL) != 1 )
                            goto LABEL_31;
                        }
                        else if ( a8 == 2 )
                        {
                          v46 = *(_QWORD *)(v25 + 40);
                          if ( *(_DWORD *)(v46 + 236) == 1 && (*(_BYTE *)(v46 + 232) & 0x40) == 0 )
                            goto LABEL_31;
                        }
                        if ( (*(_DWORD *)(v25 + 380) & 0x10) == 0
                          || (a2 != 126 || a4 != (ULONG_PTR *)1) && (a2 != 26 || v9 != 47) )
                        {
                          BugCheckParameter3[1] = v25;
                          BugCheckParameter3[0] = *((_QWORD *)v84 + 56);
                          *((_QWORD *)v84 + 56) = BugCheckParameter3;
                          HMLockObject(v25);
                          switch ( a5 )
                          {
                            case 0u:
                              xxxSendTransformableMessageTimeout(
                                (struct tagTHREADINFO **)v25,
                                a2,
                                v9,
                                (__int64)a4,
                                0,
                                0,
                                0LL,
                                a7,
                                1);
                              goto LABEL_27;
                            case 1u:
                              v28 = a7;
                              break;
                            case 2u:
                              if ( !*(_QWORD *)(v25 + 120) )
                                PostTransformableMessageIL((struct tagWND *)v25, a2, v9, (__int64)a4, a7);
                              goto LABEL_27;
                            case 3u:
                              xxxSendMessageCallback(
                                (struct tagWND *)v25,
                                a2,
                                v9,
                                (__int64)a4,
                                *(void (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64))a6,
                                *((_QWORD *)a6 + 1),
                                *((_DWORD *)a6 + 4),
                                a7,
                                1);
                              goto LABEL_27;
                            case 4u:
LABEL_26:
                              v28 = a7;
                              v29 = xxxSendTransformableMessageTimeout(
                                      (struct tagTHREADINFO **)v25,
                                      a2,
                                      v9,
                                      (__int64)a4,
                                      *(_DWORD *)a6,
                                      *((_DWORD *)a6 + 1),
                                      *((__int64 **)a6 + 1),
                                      a7,
                                      1);
                              v27 = 0LL;
                              if ( v29 || a5 != 6 )
                                goto LABEL_27;
                              break;
                            case 5u:
                              v58 = *(_QWORD *)(v25 + 16);
                              if ( *(_QWORD *)(v58 + 456) == v81
                                && (_InterlockedCompareExchange((volatile signed __int32 *)(v58 + 520), 0, 0) & 8) == 0 )
                              {
                                xxxSendTransformableMessageTimeout(
                                  (struct tagTHREADINFO **)v25,
                                  a2,
                                  v9,
                                  (__int64)a4,
                                  0,
                                  0,
                                  0LL,
                                  1u,
                                  1);
                                goto LABEL_27;
                              }
                              v28 = a7;
LABEL_126:
                              v42 = (struct _LARGE_STRING *)a4;
                              v44 = v9;
                              v43 = a2;
                              goto LABEL_74;
                            case 6u:
                              goto LABEL_26;
                            default:
LABEL_27:
                              CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v27);
                              if ( CurrentThreadWin32Thread )
                                v31 = *CurrentThreadWin32Thread;
                              else
                                v31 = 0LL;
                              v32 = *(ULONG_PTR **)(v31 + 448);
                              if ( v32 != BugCheckParameter3 )
                                KeBugCheckEx(0x164u, 0x3BuLL, v31, (ULONG_PTR)BugCheckParameter3, 0LL);
                              *(_QWORD *)(v31 + 448) = *v32;
                              HMUnlockObject(v32[1]);
                              goto LABEL_31;
                          }
                          v33 = 0LL;
                          if ( a2 == 26 || a2 == 27 )
                          {
                            if ( a4 )
                            {
                              v34 = (_WORD *)a4[1];
                              if ( *v34 )
                              {
                                v35 = UserAddAtomEx(v34, 0LL, 2LL);
                                v33 = v35;
                                if ( !v35 )
                                  goto LABEL_27;
                              }
                              else
                              {
                                v33 = -1LL;
                              }
                            }
                            if ( !(unsigned int)PostEventMessageEx(
                                                  *(struct tagTHREADINFO **)(v25 + 16),
                                                  *(struct tagQ **)(*(_QWORD *)(v25 + 16) + 464LL),
                                                  9u,
                                                  (struct tagWND *)v25,
                                                  a2,
                                                  v9,
                                                  v33,
                                                  0LL)
                              && (unsigned __int64)(v33 + 1) > 1 )
                            {
                              UserDeleteAtom((unsigned __int16)v33);
                            }
                            goto LABEL_27;
                          }
                          if ( a2 != 126 )
                            goto LABEL_126;
                          GetDispInfo(0LL, v26);
                          WindowCompositedDpiContext = GetWindowCompositedDpiContext((const struct tagWND *)v25);
                          GetMonitorRectForDpi(
                            (__m128i *)BugCheckParameter2,
                            *(_QWORD *)(v37 + 96),
                            (WindowCompositedDpiContext >> 8) & 0x1FF);
                          v82 = (unsigned __int16)(LOWORD(BugCheckParameter2[1]) - LOWORD(BugCheckParameter2[0])) | (unsigned __int64)((HIDWORD(BugCheckParameter2[1]) << 16) - (HIDWORD(BugCheckParameter2[0]) << 16));
                          if ( a4 )
                          {
                            v38 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
                               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
                            v86 = v38;
                            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                              || (v39 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                            {
                              v39 = 0;
                            }
                            if ( v38 || v39 )
                            {
                              ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v25 + 16));
                              v69 = *(struct tagTHREADINFO **)v25;
                              v70 = ThreadId;
                              v73 = W32GetUserSessionState(v72, v71);
                              LOBYTE(v74) = v86;
                              LOBYTE(v75) = v39;
                              WPP_RECORDER_AND_TRACE_SF_qd(
                                *((_QWORD *)WPP_GLOBAL_Control + 3),
                                v74,
                                v75,
                                *(_QWORD *)(v73 + 69152),
                                5,
                                7,
                                15,
                                (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                                (char)v69,
                                v70);
                            }
                            PostEventMessageEx(
                              *(struct tagTHREADINFO **)(v25 + 16),
                              *(struct tagQ **)(*(_QWORD *)(v25 + 16) + 464LL),
                              9u,
                              (struct tagWND *)v25,
                              0x7Eu,
                              a3,
                              v82,
                              0LL);
                            goto LABEL_27;
                          }
                          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                            || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                          {
                            v40 = 0;
                          }
                          v87 = v40;
                          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                            || (v41 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                          {
                            v41 = 0;
                          }
                          if ( v40 || v41 )
                          {
                            v60 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v25 + 16));
                            v61 = *(struct tagTHREADINFO **)v25;
                            v62 = v60;
                            v65 = W32GetUserSessionState(v64, v63);
                            LOBYTE(v66) = v87;
                            LOBYTE(v67) = v41;
                            WPP_RECORDER_AND_TRACE_SF_qd(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v66,
                              v67,
                              *(_QWORD *)(v65 + 69152),
                              5,
                              7,
                              14,
                              (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                              (char)v61,
                              v62);
                            v28 = a7;
                          }
                          v42 = (struct _LARGE_STRING *)v82;
                          v43 = 126;
                          v44 = a3;
LABEL_74:
                          xxxSendNotifyMessage((struct tagWND *)v25, v43, v44, v42, v28);
                          goto LABEL_27;
                        }
                        v16 = WPP_GLOBAL_Control;
                        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
                          || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
                        {
                          v47 = 0;
                        }
                        v15 = (__int64)&WPP_RECORDER_INITIALIZED;
                        v88 = v47;
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                          || (v48 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
                        {
                          v48 = 0;
                        }
                        if ( v47 || v48 )
                        {
                          v49 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v25 + 16));
                          v50 = *(struct tagTHREADINFO **)v25;
                          v51 = v49;
                          v54 = W32GetUserSessionState(v53, v52);
                          LOBYTE(v55) = v88;
                          v56 = "WM_DISPLAYCHANGE";
                          LOBYTE(v57) = v48;
                          if ( a2 != 126 )
                            v56 = "WM_SETTINGCHANGE (for SPI_SETWORKAREA)";
                          WPP_RECORDER_AND_TRACE_SF_sqd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v55,
                            v57,
                            *(_QWORD *)(v54 + 69152),
                            BugCheckParameter4,
                            v77,
                            13,
                            (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                            (__int64)v56,
                            (char)v50,
                            v51);
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_31:
            v80[0] += 8LL;
            v17 = *(_QWORD *)v80[0];
            if ( *(_QWORD *)v80[0] == 1LL )
              break;
            v9 = a3;
          }
        }
        FreeHwndList(v85, v15);
        return 1LL;
      }
      return 0LL;
    }
    *(_OWORD *)v80 = 0LL;
    if ( a2 == 26 || a2 == 27 )
    {
      v79 = -1LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString(
                              (struct _LARGE_UNICODE_STRING *)v80,
                              (struct _LARGE_STRING *volatile)a4) )
          return 0LL;
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          (ULONG_PTR)BugCheckParameter2,
          v80[1]);
        a4 = v80;
      }
      xxxSystemBroadcastMessage(a2, v9, (__int64)a4, a5, a6, v12, a8);
      if ( v79 != -1 )
        PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    }
    else
    {
      if ( a2 == 30 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v84 + 130, 0, 0) & 4) == 0 )
          return 0LL;
        goto LABEL_85;
      }
      if ( a2 == 42 )
      {
        v59 = 42;
      }
      else
      {
        if ( a2 - 712 >= 2 )
        {
LABEL_85:
          v11 = *(struct tagWND ***)(*(_QWORD *)(*((_QWORD *)v84 + 61) + 8LL) + 24LL);
          if ( v11 )
            goto LABEL_4;
          UserSetLastError(5);
          return 0LL;
        }
        v59 = a2;
      }
      xxxSystemBroadcastMessage(v59, v9, (__int64)a4, a5, a6, v12, a8);
    }
    return 1LL;
  }
  UserSetLastError(87);
  return 1LL;
}
