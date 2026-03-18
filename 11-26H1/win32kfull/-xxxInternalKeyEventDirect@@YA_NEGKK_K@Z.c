/*
 * XREFs of ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x14029B5FC
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140197844 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?InjectInput@Keyboard@InputTraceLogging@@SAXW4InjectionSource@12@@Z @ 0x1401E2154 (-InjectInput@Keyboard@InputTraceLogging@@SAXW4InjectionSource@12@@Z.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x14029D0FC (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall xxxInternalKeyEventDirect(__int64 a1, __int16 a2, char a3, int a4, unsigned __int64 a5)
{
  unsigned __int8 v7; // di
  struct tagTHREADINFO *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // di
  bool v18; // r14
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v28; // rdx
  int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // rdx
  _BYTE *i; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r8
  __int128 v37; // [rsp+48h] [rbp-28h] BYREF
  __int128 v38; // [rsp+58h] [rbp-18h]

  v7 = a1;
  v8 = PtiCurrent(a1);
  v37 = 0LL;
  v38 = 0LL;
  v11 = 1;
  if ( (unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_21;
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19176);
  if ( *((_QWORD *)v8 + 61) == v12 )
  {
    v13 = *(_QWORD *)(W32GetUserGdiSessionState(v12) + 40);
    if ( PsGetCurrentProcess(v14) == v13 || RtlAreAllAccessesGranted(*((_DWORD *)v8 + 232), 0x20u) )
    {
      if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL) )
      {
        MSGLUA_GPQFOREGROUND(v15);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v17 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 69152),
            2,
            20,
            30,
            (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
        }
        return 1;
      }
LABEL_21:
      InputTraceLogging::Keyboard::InjectInput();
      LOBYTE(v37) = a2;
      *((_QWORD *)&v37 + 1) = 0LL;
      if ( (a3 & 8) != 0 )
      {
        v29 = a3 & 1;
        LOBYTE(v28) = v29 != 0 ? 0xE0 : 0;
        v7 = VKFromVSC(&v37, v28);
        v30 = v7;
      }
      else
      {
        switch ( v7 )
        {
          case 0x10u:
            v7 = ((a2 & 0x7F) == 54) - 96;
            break;
          case 0x11u:
            v7 = a3 & 1 | 0xA2;
            break;
          case 0x12u:
            v7 = a3 & 1 | 0xA4;
            break;
        }
        v30 = v7;
        LOWORD(v30) = v7 | 0x2000;
        v29 = a3 & 1;
      }
      WORD1(v37) = v30;
      if ( v7 == 0xA1 )
      {
        LOWORD(v30) = v30 | 0x100;
        WORD1(v37) = v30;
      }
      v31 = a3 & 2;
      if ( (a3 & 2) != 0 )
      {
        LOWORD(v30) = v30 | 0x8000;
        WORD1(v37) = v30;
      }
      if ( (a3 & 4) != 0 )
      {
        LOWORD(v30) = v30 | 0x1000;
        LOWORD(v37) = a2;
      }
      else if ( v29 )
      {
        LOWORD(v30) = v30 | 0x100;
      }
      else
      {
        if ( (unsigned __int8)(v7 - 96) > 9u && v7 != 110 )
        {
          for ( i = (_BYTE *)ausNumPadCvt; *(_WORD *)i; i += 2 )
          {
            if ( v7 == *i )
              goto LABEL_44;
          }
          goto LABEL_46;
        }
LABEL_44:
        LOWORD(v30) = v30 | 0x800;
      }
      WORD1(v37) = v30;
LABEL_46:
      WORD1(v38) = (unsigned __int8)a2;
      WORD2(v38) = (_DWORD)v31 != 0;
      if ( v29 )
        WORD2(v38) = ((_DWORD)v31 != 0) | 2;
      LOWORD(v38) = -2;
      DWORD2(v38) = a5;
      WORD3(v38) = 0;
      v33 = *((_QWORD *)v8 + 57);
      v34 = W32GetUserSessionState(v30, v31);
      LOBYTE(v35) = 1;
      *(_QWORD *)(v34 + 18880) = v33;
      DWORD1(v37) = a4;
      xxxProcessKeyEvent(&v37, a5, v35, 0LL, 0LL, 0LL);
      return 1;
    }
  }
  SetLastNtError(-1073741790);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v11 = 0;
  }
  v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v25,
      *(_QWORD *)(v24 + 69152),
      2,
      20,
      29,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
  }
  return 0;
}
