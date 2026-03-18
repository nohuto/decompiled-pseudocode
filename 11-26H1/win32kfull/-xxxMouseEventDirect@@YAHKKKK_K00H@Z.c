/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14011CF38 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140197844 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CheckGrantedAccess @ 0x1401AC1D4 (CheckGrantedAccess.c)
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14021E060 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     GetScreenRect @ 0x14025BAE8 (GetScreenRect.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x14029D0FC (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMouseEventDirect(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned int v11; // ebx
  struct tagTHREADINFO *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rdx
  bool v17; // bl
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // bl
  bool v30; // r14
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // eax
  bool v43; // bl
  __int64 UserSessionState; // rax
  int v45; // r8d
  int v46; // edx
  int v48; // r8d
  unsigned int v49; // edx
  int v50; // eax
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rdx
  __int16 v54; // ax
  int v55; // r14d
  BOOL v56; // ebx
  __int16 v57; // ax
  __int64 v58; // rcx
  __m128i *ScreenRect; // rax
  __m128i v60; // xmm6
  int v61; // ebx
  int v62; // eax
  int v63; // ebx
  __int64 v64; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v66; // rdx
  __m128i *PhysicalScreenRect; // rax
  __int32 v68; // r8d
  __m128i v69; // xmm6
  unsigned int v70; // esi
  int v71; // eax
  __int64 v72; // rcx
  int v73; // ebx
  UIPrivilegeIsolation *v74; // rcx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int16 v78; // [rsp+38h] [rbp-91h]
  __int16 v79; // [rsp+38h] [rbp-91h]
  _BYTE v80[4]; // [rsp+58h] [rbp-71h] BYREF
  INT a; // [rsp+5Ch] [rbp-6Dh]
  INT v82; // [rsp+60h] [rbp-69h]
  BOOL v83; // [rsp+64h] [rbp-65h]
  __int64 v84; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v85[2]; // [rsp+70h] [rbp-59h] BYREF
  LARGE_INTEGER v86; // [rsp+78h] [rbp-51h]
  __m128i v87; // [rsp+80h] [rbp-49h] BYREF
  __int16 v88; // [rsp+90h] [rbp-39h] BYREF
  __int16 v89; // [rsp+92h] [rbp-37h]
  int v90; // [rsp+94h] [rbp-35h]
  int v91; // [rsp+98h] [rbp-31h]
  unsigned __int64 v92; // [rsp+9Ch] [rbp-2Dh]
  int v93; // [rsp+A4h] [rbp-25h]

  v82 = a2;
  v89 = 0;
  a = a1;
  v11 = a1;
  v12 = PtiCurrent(a1);
  v15 = 1;
  if ( !(unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_QWORD *)v12 + 61) != *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19176) )
    {
      SetLastNtError(-1073741790);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v15 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v16) + 69152);
      v78 = 24;
LABEL_19:
      LOBYTE(v19) = v17;
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        v20,
        2,
        20,
        v78,
        (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
      return 0LL;
    }
    if ( !(unsigned int)CheckGrantedAccess(*((_DWORD *)v12 + 232), 0x20u) )
    {
      v23 = *(_QWORD *)(W32GetUserGdiSessionState(v22) + 40);
      if ( PsGetCurrentProcess(v24) != v23 )
      {
        SetLastNtError(-1073741790);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v15 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v15 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v25) + 69152);
        v78 = 25;
        goto LABEL_19;
      }
      v11 = a;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18984)
      && *(struct tagTHREADINFO **)(W32GetUserSessionState(v27, v26) + 18984) != v12 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v33 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v28) + 69152);
      v79 = 26;
      goto LABEL_38;
    }
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL) )
    {
      MSGLUA_GPQFOREGROUND(v34);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v29 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v33 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v35) + 69152);
      v79 = 27;
LABEL_38:
      LOBYTE(v32) = v30;
      LOBYTE(v31) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v32,
        v33,
        2,
        20,
        v79,
        (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
      return 1LL;
    }
  }
  v36 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, v11, a2);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v36 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v86 = PerformanceCounter;
  InputTraceLogging::Mouse::InjectInput();
  v38 = *((_QWORD *)v12 + 57);
  *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18880) = v38;
  if ( !(unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v42 = ((a4 >> 18) & 1) + 1;
    if ( (a4 & 0x10000) == 0 )
      v42 = (a4 >> 18) & 1;
    if ( v42 > 1 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v15 = 0;
      }
      v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v15;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(UserSessionState + 69152),
          2,
          20,
          28,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
          a4);
      }
      return 0LL;
    }
  }
  v48 = 0;
  v49 = a4 & 0x187E;
  if ( (a4 & 0x180) != 0 && ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) )
  {
    v49 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v49 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    v48 = 0x7FFF;
    v50 = -32768;
    if ( a3 >= -32768 )
      v50 = a3;
    if ( v50 < 0x7FFF )
    {
      v48 = -32768;
      if ( a3 >= -32768 )
        v48 = a3;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v51 = v49 | 0x80;
      if ( (a3 & 1) == 0 )
        v51 = a4 & 0x187E;
      v49 = v51;
      if ( (a3 & 2) != 0 )
        v49 = v51 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v52 = v49 | 0x100;
      if ( (a3 & 1) == 0 )
        v52 = v49;
      v49 = v52;
      if ( (a3 & 2) != 0 )
        v49 = v52 | 0x400;
    }
  }
  v53 = v49 >> 1;
  v88 = -2;
  v54 = (a4 & 0x8000) != 0;
  v89 = v54;
  if ( (a4 & 0x4000) != 0 )
  {
    v54 |= 2u;
    v89 = v54;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v54 |= 8u;
    v89 = v54;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v54 |= 0x20u;
    v89 = v54;
  }
  v55 = 16;
  if ( (a4 & 0x10000) != 0 )
  {
    v54 |= 0x10u;
    v89 = v54;
  }
  if ( (a4 & 0x40000) != 0 )
    v89 = v54 | 0x40;
  v56 = 0;
  v90 = v53;
  v57 = WORD1(v53);
  if ( (a4 & 0x40000) == 0 )
    v56 = (a4 & 0x10000) == 0;
  v83 = v56;
  if ( v48 )
    v57 = v48;
  HIWORD(v90) = v57;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL) & 0xF) == 2
    || ***(_DWORD ***)(W32GetUserSessionState(v58, v53) + 56968) <= 1u )
  {
    v70 = a;
  }
  else
  {
    ScreenRect = GetScreenRect(&v87);
    v60 = *ScreenRect;
    v61 = _mm_cvtsi128_si32(*ScreenRect);
    v62 = v61 + EngMulDiv(a, ScreenRect->m128i_i32[2] - v61, 0xFFFF);
    v63 = _mm_cvtsi128_si32(_mm_srli_si128(v60, 4));
    v85[0] = v62;
    v84 = 0LL;
    v85[1] = v63 + EngMulDiv(v82, _mm_cvtsi128_si32(_mm_srli_si128(v60, 12)) - v63, 0xFFFF);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v64);
    LogicalToPhysicalDPIPoint(&v84, v85, CurrentThreadDpiAwarenessContext, 0LL);
    PhysicalScreenRect = (__m128i *)GetPhysicalScreenRect(&v87, v66);
    v68 = PhysicalScreenRect->m128i_i32[2];
    v69 = *PhysicalScreenRect;
    LODWORD(PhysicalScreenRect) = _mm_cvtsi128_si32(*PhysicalScreenRect);
    v70 = EngMulDiv(v84 - (_DWORD)PhysicalScreenRect, 0xFFFF, v68 - (_DWORD)PhysicalScreenRect);
    v71 = _mm_cvtsi128_si32(_mm_srli_si128(v69, 4));
    v56 = v83;
    v82 = EngMulDiv(HIDWORD(v84) - v71, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v69, 12)) - v71);
  }
  LOBYTE(v53) = 1;
  v93 = a7;
  v91 = 0;
  v92 = __PAIR64__(v82, v70);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v80, v53);
  if ( (a4 & 1) != 0 )
  {
    if ( !v56 )
      v55 = 18;
  }
  else
  {
    v92 = 0LL;
    v89 &= ~1u;
    v55 = 24;
  }
  v73 = v55;
  if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v72) )
  {
    v55 |= 0x40u;
    if ( *(int *)(*((_QWORD *)v12 + 57) + 12LL) >= 0 )
      v55 = v73;
  }
  else if ( UIPrivilegeIsolation::Enforced(v74) && *(int *)(*((_QWORD *)v12 + 57) + 12LL) < 0 )
  {
    v55 |= 0x40u;
  }
  v75 = v55 | 0x100;
  if ( a8 )
    v75 = v55;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
    0LL,
    &v88,
    v36,
    (LARGE_INTEGER)v86.QuadPart,
    v75);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v80);
  if ( a8 )
    xxxProcessMouseEvent();
  if ( (*(_DWORD *)(W32GetUserSessionState(v77, v76) + 66792) & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v36, v70, (unsigned int)v82);
  return 1LL;
}
