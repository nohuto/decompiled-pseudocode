/*
 * XREFs of _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140163D1C
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall anonymous_namespace_::xxxAwpMinMaximizeEx(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // bp
  char v12; // bl
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // bp
  bool v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v5 = a3;
  if ( a4 )
  {
    v8 = *(_QWORD *)(a4 + 16);
    if ( v8 )
    {
      if ( (a3 & 0x20) != 0 )
      {
        v9 = HMValidateHandleNoSecure(v8, 1);
        if ( v9 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 24LL) & 8) == 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) & 8) == 0 )
          {
            v5 |= 0x400u;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
              || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
            {
              v11 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
            {
              v12 = 0;
            }
            if ( v11 || v12 )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
              LOBYTE(v14) = v12;
              LOBYTE(v15) = v11;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v15,
                v14,
                *(_QWORD *)(UserSessionState + 69152),
                5,
                4,
                10,
                (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
            }
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v16 = 0;
          }
          v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = *(_QWORD *)(a4 + 16);
            v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
            LOBYTE(v20) = v17;
            LOBYTE(v21) = v16;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v21,
              v20,
              *(_QWORD *)(v19 + 69152),
              3,
              4,
              11,
              (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
              v18);
          }
          *(_QWORD *)(a4 + 16) = 0LL;
        }
      }
    }
  }
  return xxxMinMaximizeEx(a1, a2, v5 | 1u, a4);
}
