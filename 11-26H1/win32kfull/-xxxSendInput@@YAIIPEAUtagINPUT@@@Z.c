/*
 * XREFs of ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC
 * Callers:
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1402FF8D0 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1402FF9A8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x14014A2D0 (xxxSynchronizeDWMWindowChanges.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401FDDC0 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14029B5FC (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x14029D0FC (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned int __fastcall xxxSendInput(unsigned int a1, struct tagINPUT *a2)
{
  __int64 v4; // rcx
  int v5; // r15d
  unsigned __int16 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // r12d
  BOOL v11; // edi
  unsigned int v12; // esi
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  char v15; // di
  bool v16; // bp
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  bool v22; // di
  bool v23; // bp
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  int v27; // r8d
  __int64 v28; // rdx
  bool v29; // di
  bool v30; // bp
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  _DWORD *v36; // rcx
  unsigned __int64 v37; // r9
  __int64 v38; // rdx
  __int16 v40; // [rsp+30h] [rbp-48h]
  __int16 v41; // [rsp+30h] [rbp-48h]
  char v42; // [rsp+40h] [rbp-38h]
  char v43; // [rsp+40h] [rbp-38h]
  char v44; // [rsp+48h] [rbp-30h]

  if ( (unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
    return xxxSendInputEx(a1, a2);
  v5 = 0;
  v6 = *((_WORD *)PtiCurrent(v4) + 332);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    v10 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 18792);
  else
    v10 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 16332);
  v11 = v10 == 0;
  v12 = 0;
  v13 = (unsigned __int64 *)((char *)a2 + 24);
  while ( v12 < a1 )
  {
    v14 = *((unsigned int *)v13 - 6);
    if ( (_DWORD)v14 )
    {
      v9 = (unsigned int)(v14 - 1);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == 1 )
        {
          v9 = (__int64)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
            || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v15 = 0;
          }
          v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 1LL);
            LOBYTE(v18) = v16;
            LOBYTE(v19) = v15;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v19,
              v18,
              *(_QWORD *)(UserSessionState + 69152),
              2,
              20,
              42,
              (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
              v12,
              v6 >= 0x501u);
          }
          if ( v6 >= 0x501u )
          {
            UserSetLastError(120);
            return v12;
          }
        }
        goto LABEL_76;
      }
      v21 = *(_DWORD **)(W32GetUserSessionState(v9, 1LL) + 19904);
      if ( (*v21 & 0x2000) == 0 )
      {
        if ( v5 )
        {
          v5 = 0;
          xxxWaitForDITMouseInjectionFlush((__int64)v21, v20);
        }
        v27 = *((_DWORD *)v13 - 3);
        if ( (v27 & 4) == 0 || *((_WORD *)v13 - 8) || (v27 & 0xFFFFFFF9) != 0 )
        {
          LOBYTE(v21) = *((_BYTE *)v13 - 16);
          if ( !xxxInternalKeyEventDirect((__int64)v21, *((unsigned __int8 *)v13 - 14), v27, *((_DWORD *)v13 - 2), *v13) )
          {
            v9 = (__int64)WPP_GLOBAL_Control;
            v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
            v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v33 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v34) + 69152);
              v44 = v6 >= 0x501u;
              v43 = v12;
              v41 = 41;
              goto LABEL_74;
            }
            goto LABEL_75;
          }
        }
        else
        {
          LOBYTE(v21) = -25;
          if ( !xxxInternalKeyEventDirect((__int64)v21, *((_WORD *)v13 - 7), v27, *((_DWORD *)v13 - 2), *v13) )
          {
            v9 = (__int64)WPP_GLOBAL_Control;
            v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
            v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v33 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v28) + 69152);
              v44 = v6 >= 0x501u;
              v43 = v12;
              v41 = 40;
              goto LABEL_74;
            }
            goto LABEL_75;
          }
        }
        goto LABEL_76;
      }
      v9 = (__int64)WPP_GLOBAL_Control;
      v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        v42 = v12;
        v40 = 39;
LABEL_28:
        LOBYTE(v26) = v23;
        LOBYTE(v25) = v22;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v26,
          *(_QWORD *)(v24 + 69152),
          2,
          20,
          v40,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
          v42);
      }
    }
    else
    {
      v36 = *(_DWORD **)(W32GetUserSessionState(v14, 1LL) + 19904);
      if ( (*v36 & 0x2000) == 0 )
      {
        if ( (*((_DWORD *)v13 - 1) & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges((__int64)v36, v35);
        v37 = UpconvertTime(*(unsigned int *)v13);
        if ( v10 )
          v5 = 1;
        if ( !(unsigned int)xxxMouseEventDirect(
                              *((unsigned int *)v13 - 4),
                              *((_DWORD *)v13 - 3),
                              *((_DWORD *)v13 - 2),
                              *((_DWORD *)v13 - 1),
                              v37,
                              gliQpcFreq * v37 / 0x3E8,
                              v13[1],
                              v11) )
        {
          v9 = (__int64)WPP_GLOBAL_Control;
          v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v33 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v38) + 69152);
            v44 = v6 >= 0x501u;
            v43 = v12;
            v41 = 38;
LABEL_74:
            LOBYTE(v32) = v30;
            LOBYTE(v31) = v29;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v31,
              v32,
              v33,
              2,
              20,
              v41,
              (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
              v43,
              v44);
          }
LABEL_75:
          if ( v6 >= 0x501u )
            return v12;
        }
LABEL_76:
        v13 += 5;
        goto LABEL_77;
      }
      v9 = (__int64)WPP_GLOBAL_Control;
      v22 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
        v42 = v12;
        v40 = 37;
        goto LABEL_28;
      }
    }
LABEL_77:
    v11 = v10 == 0;
    ++v12;
  }
  if ( v5 )
    xxxWaitForDITMouseInjectionFlush(v9, 1LL);
  return v12;
}
