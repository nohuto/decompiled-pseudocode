/*
 * XREFs of xxxEndScroll @ 0x1402F857C
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5100 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5360 (-xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     zzzShowCaret @ 0x1401290A4 (zzzShowCaret.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ??$UserFreeIsolatedType@UtagSBTRACK@@@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F33B0 (--$UserFreeIsolatedType@UtagSBTRACK@@@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ql @ 0x1402F669C (WPP_RECORDER_AND_TRACE_SF_ql.c)
 */

struct tagTHREADINFO *__fastcall xxxEndScroll(struct tagWND *a1, __int64 a2)
{
  int v2; // r14d
  struct MOVESIZEDATA *v4; // rcx
  bool v5; // di
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct tagTHREADINFO *result; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  void (__fastcall *v14)(struct tagWND *, __int64, __int64, unsigned __int64); // rax
  struct tagSBCALC *v15; // rdx
  void (__fastcall *v16)(struct tagWND *, __int64, __int64, unsigned __int64); // rcx
  int MessagePos; // eax
  __int64 v18; // r8
  struct tagWND *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct tagWND *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_ql(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69152), 4);
  }
  result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  v11 = *((_QWORD *)result + 93);
  if ( v11 )
  {
    result = PtiCurrent((__int64)v4);
    v12 = *((_QWORD *)result + 58);
    if ( *(struct tagWND **)(v12 + 112) == a1 )
    {
      if ( *(_QWORD *)(v11 + 48) )
      {
        v13 = *(_DWORD *)(v11 + 56);
        *(_DWORD *)(v11 + 56) = 0;
        xxxReleaseCapture(v12);
        result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
        if ( v11 == *((_QWORD *)result + 93) )
        {
          v14 = *(void (__fastcall **)(struct tagWND *, __int64, __int64, unsigned __int64))(v11 + 48);
          if ( (char *)v14 != (char *)xxxTrackThumb )
          {
            v16 = xxxTrackBox;
            if ( v14 == xxxTrackBox )
            {
              if ( *(_QWORD *)(v11 + 64) )
              {
                FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
                *(_QWORD *)(v11 + 64) = 0LL;
              }
              MessagePos = GetMessagePos((__int64)v16);
              v18 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
                LODWORD(v33) = *(_DWORD *)(v18 + 96) - (__int16)MessagePos;
              else
                LODWORD(v33) = (__int16)MessagePos - *(_DWORD *)(v18 + 88);
              HIDWORD(v33) = SHIWORD(MessagePos) - *(_DWORD *)(v18 + 92);
              if ( PtInRect((_DWORD *)(v11 + 32), v33) )
                zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v11, 0, v13);
            }
            goto LABEL_27;
          }
          if ( v2 )
            *(_DWORD *)(v11 + 80) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 12LL);
          v15 = *(struct tagSBCALC **)(v11 + 24);
          if ( !v15
            || (xxxDoScroll(
                  *(struct tagWND **)(v11 + 16),
                  v15,
                  4u,
                  *(unsigned int *)(v11 + 80),
                  (*(_DWORD *)v11 >> 1) & 1),
                result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                v11 == *((_QWORD *)result + 93)) )
          {
            DrawThumb(a1, v15, (*(_DWORD *)v11 >> 1) & 1);
LABEL_27:
            result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
            if ( v11 == *((_QWORD *)result + 93) )
            {
              v19 = *(struct tagWND **)(v11 + 24);
              if ( !v19
                || (xxxDoScroll(*(struct tagWND **)(v11 + 16), v19, 8u, 0LL, (*(_DWORD *)v11 >> 1) & 1),
                    result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                    v11 == *((_QWORD *)result + 93)) )
              {
                SetOrClrWF(0, a1, 0x610u, 1);
                SetOrClrWF(0, a1, 0x620u, 1);
                if ( !*(_QWORD *)(W32GetUserSessionState(v21, v20) + 18928)
                  || (v25 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 18928), !*(_QWORD *)(v25 + 120))
                  || (v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18928),
                      v26 != *((_QWORD *)PtiCurrent(v27) + 58))
                  || (v30 = W32GetUserSessionState(v29, v28),
                      xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v30 + 18928) + 120LL), 0, 3, 33),
                      result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                      v11 == *((_QWORD *)result + 93)) )
                {
                  xxxWindowEvent(0x13u, a1, ((*(_DWORD *)v11 & 2) != 0) | 0xFFFFFFFA, 0, 0);
                  result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
                  if ( v11 == *((_QWORD *)result + 93) )
                  {
                    v31 = *(struct tagWND **)(v11 + 16);
                    if ( !v31
                      || (zzzShowCaret(v31),
                          result = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2),
                          v11 == *((_QWORD *)result + 93)) )
                    {
                      *(_QWORD *)(v11 + 48) = 0LL;
                      *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL) = 0LL;
                      HMAssignmentUnlock(v11 + 16);
                      HMAssignmentUnlock(v11 + 24);
                      HMAssignmentUnlock(v11 + 8);
                      return (struct tagTHREADINFO *)UserFreeIsolatedType<tagSBTRACK>(v11, v32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
