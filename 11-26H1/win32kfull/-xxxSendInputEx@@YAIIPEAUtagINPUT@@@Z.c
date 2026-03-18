/*
 * XREFs of ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x14014A2D0 (xxxSynchronizeDWMWindowChanges.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401FDDC0 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x14029B104 (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14029B5FC (-xxxInternalKeyEventDirect@@YA_NEGKK_K@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 */

__int64 __fastcall xxxSendInputEx(unsigned int a1, struct tagINPUT *a2)
{
  char v2; // bp
  char v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  bool v9; // r13
  unsigned int v10; // r14d
  char v11; // bl
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  bool v18; // di
  bool v19; // bp
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r8d
  __int16 v24; // dx
  unsigned __int64 v25; // rax
  bool v26; // di
  __int64 UserSessionState; // rax
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rdx
  bool v31; // di
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int16 v36; // [rsp+30h] [rbp-48h]
  __int16 v37; // [rsp+30h] [rbp-48h]

  v2 = 0;
  v4 = 0;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    v8 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 18792) == 0;
  else
    v8 = *(_DWORD *)(W32GetUserSessionState(v7, v6) + 16332) == 0;
  v9 = v8;
  v10 = 0;
  if ( !a1 )
    return v10;
  v11 = 1;
  while ( 1 )
  {
    v12 = *((_DWORD *)a2 + 10 * v10);
    if ( v12 == 2 )
      break;
    v13 = 119LL;
    if ( !v12 )
    {
      if ( (*((_DWORD *)a2 + 10 * v10 + 5) & 0x50000) == 0x50000 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v11 = v2;
        }
        v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          v37 = 32;
LABEL_79:
          LOBYTE(v29) = v26;
          LOBYTE(v28) = v11;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v29,
            *(_QWORD *)(UserSessionState + 69152),
            2,
            20,
            v37,
            (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
          return v10;
        }
        return v10;
      }
      v13 = 127LL;
    }
    v14 = DoInputCheck(v13, (__int64)&WPP_GLOBAL_Control);
    v2 = v14;
    switch ( v14 )
    {
      case 1:
        v17 = (__int64)WPP_GLOBAL_Control;
        v18 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v36 = 33;
LABEL_19:
        LOBYTE(v22) = v19;
        LOBYTE(v21) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v22,
          *(_QWORD *)(v20 + 69152),
          3,
          20,
          v36,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
        v2 = 0;
        goto LABEL_20;
      case 4:
        v17 = (__int64)WPP_GLOBAL_Control;
        v18 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_57;
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v36 = 34;
        goto LABEL_19;
      case 5:
        MSGLUA_GPQFOREGROUND(v16);
        v17 = (__int64)WPP_GLOBAL_Control;
        v18 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_57:
          v2 = 0;
          goto LABEL_20;
        }
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v36 = 35;
        goto LABEL_19;
    }
    if ( v14 )
    {
      UserSetLastError(5);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v11 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v30);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69152),
          2,
          20,
          36,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
          v2);
      }
      return v10;
    }
    v17 = *((unsigned int *)a2 + 10 * v10);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        if ( v4 )
        {
          v4 = v14;
          xxxWaitForDITMouseInjectionFlush(v17, v15);
        }
        v23 = *((_DWORD *)a2 + 10 * v10 + 3);
        if ( (v23 & 4) == 0 || *((_WORD *)a2 + 20 * v10 + 4) || (v23 & 0xFFFFFFF9) != 0 )
        {
          v24 = *((unsigned __int8 *)a2 + 40 * v10 + 10);
          LOBYTE(v17) = *((_BYTE *)a2 + 40 * v10 + 8);
        }
        else
        {
          v24 = *((_WORD *)a2 + 20 * v10 + 5);
          LOBYTE(v17) = -25;
        }
        xxxInternalKeyEventDirect(v17, v24, v23, *((_DWORD *)a2 + 10 * v10 + 4), *((_QWORD *)a2 + 5 * v10 + 3));
      }
    }
    else
    {
      if ( (*((_DWORD *)a2 + 10 * v10 + 5) & 0xAA) != 0 )
        xxxSynchronizeDWMWindowChanges(v17, v15);
      if ( !v9 )
        v4 = 1;
      v25 = UpconvertTime(*((unsigned int *)a2 + 10 * v10 + 6));
      xxxMouseEventDirect(
        *((unsigned int *)a2 + 10 * v10 + 2),
        *((_DWORD *)a2 + 10 * v10 + 3),
        *((_DWORD *)a2 + 10 * v10 + 4),
        *((_DWORD *)a2 + 10 * v10 + 5),
        v25,
        gliQpcFreq * v25 / 0x3E8,
        *((_QWORD *)a2 + 5 * v10 + 4),
        v9);
    }
LABEL_20:
    if ( ++v10 >= a1 )
    {
      if ( v4 )
        xxxWaitForDITMouseInjectionFlush(v17, (__int64)&WPP_GLOBAL_Control);
      return v10;
    }
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v11 = v2;
  }
  v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    v37 = 31;
    goto LABEL_79;
  }
  return v10;
}
