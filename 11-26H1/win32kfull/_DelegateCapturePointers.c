/*
 * XREFs of _DelegateCapturePointers @ 0x140135024
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x140134DD4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 *     EditionDelegateCapturePointers @ 0x1402A96F0 (EditionDelegateCapturePointers.c)
 * Callees:
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140135360 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x14013590C (-DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHL @ 0x1401359E0 (WPP_RECORDER_AND_TRACE_SF_LHL.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall DelegateCapturePointers(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rsi
  bool v6; // bp
  bool v7; // r14
  unsigned int v8; // ebx
  __int16 v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct tagWND *v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r14d
  struct MOVESIZEDATA *v18; // rcx
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  unsigned __int16 v24; // bx
  unsigned int v25; // edi
  __int64 v26; // rax
  bool v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // bp
  bool v34; // r14
  unsigned int v35; // ebx
  __int16 v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // [rsp+20h] [rbp-68h]
  int v41; // [rsp+28h] [rbp-60h]
  int v42; // [rsp+38h] [rbp-50h]

  v2 = 0;
  if ( a1 )
  {
    v5 = a2 + 4;
    do
    {
      if ( *(_DWORD *)(v5 + 116) )
      {
        v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v8 = *(_DWORD *)v5;
          v9 = *(_WORD *)(v5 - 4);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
          LOBYTE(v11) = v7;
          LOBYTE(v12) = v6;
          WPP_RECORDER_AND_TRACE_SF_LHL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v12,
            v11,
            *(_QWORD *)(UserSessionState + 69152),
            v40,
            v41,
            32,
            v42,
            v2,
            v9,
            v8);
        }
        v13 = *(struct tagWND **)(v5 + 84);
        v14 = *((_QWORD *)v13 + 2);
        v17 = DeferNotifyDelegateCapture(
                (struct tagTHREADINPUTPOINTERLIST *)(v14 + 1208),
                *(_WORD *)(v5 - 4),
                *(_DWORD *)v5,
                v13);
        if ( v17 )
        {
          v28 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v30 = W32GetUserSessionState(v16, WPP_GLOBAL_Control);
            LOBYTE(v31) = v29;
            LOBYTE(v32) = v28;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v32,
              v31,
              *(_QWORD *)(v30 + 69152),
              4,
              10,
              33,
              (__int64)&WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids);
          }
          SetWakeBit(v14, 4096LL);
        }
        else
        {
          v18 = WPP_GLOBAL_Control;
          v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
            LOBYTE(v22) = v20;
            LOBYTE(v23) = v19;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v23,
              v22,
              *(_QWORD *)(v21 + 69152),
              4,
              10,
              34,
              (__int64)&WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids);
          }
          v24 = *(_WORD *)(v5 - 4);
          v25 = *(_DWORD *)v5;
          v26 = W32GetUserSessionState(v18, v15);
          CTouchProcessor::SetPointerInfoNodeFlagFromEdition(*(CTouchProcessor **)(v26 + 3256), v25, v24, 0x200000u);
        }
        DelegateDiscardMessages(
          *(struct tagQ **)(v14 + 464),
          v17,
          (struct tagDELEGATEPOINTERMAP *)(a2 + ((unsigned __int64)v2 << 7)));
      }
      else
      {
        v33 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v35 = *(_DWORD *)v5;
          v36 = *(_WORD *)(v5 - 4);
          v37 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
          LOBYTE(v38) = v34;
          LOBYTE(v39) = v33;
          WPP_RECORDER_AND_TRACE_SF_LHL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v39,
            v38,
            *(_QWORD *)(v37 + 69152),
            v40,
            v41,
            31,
            v42,
            v2,
            v36,
            v35);
        }
      }
      ++v2;
      v5 += 128LL;
    }
    while ( v2 < a1 );
  }
  return 1LL;
}
