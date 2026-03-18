/*
 * XREFs of EditionKeyEventLLHook @ 0x140172CB0
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x14003954C (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 *     ?CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z @ 0x1401730DC (-CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140173750 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?HandleLowLevelHooks@Keyboard@InputTraceLogging@@SAXK_K@Z @ 0x1401738DC (-HandleLowLevelHooks@Keyboard@InputTraceLogging@@SAXK_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1401E44F8 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x140203930 (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x140269E94 (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x1402A7C80 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12)
{
  __int64 v13; // rbx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 Valid; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // xmm0_8
  unsigned __int16 v28; // ax
  int v29; // edx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // esi
  unsigned __int64 v33; // rdi
  char v34; // r12
  __int64 v35; // rbx
  __int64 v36; // rdx
  bool v37; // bl
  __int64 UserSessionState; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // xmm0_8
  __int64 v45; // rdx
  bool v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int v51; // [rsp+54h] [rbp-55h]
  unsigned int v52; // [rsp+58h] [rbp-51h] BYREF
  __int64 v53; // [rsp+60h] [rbp-49h]
  int v54; // [rsp+68h] [rbp-41h]
  __int64 v55; // [rsp+70h] [rbp-39h] BYREF
  int v56; // [rsp+78h] [rbp-31h]
  __int64 v57; // [rsp+80h] [rbp-29h]
  _DWORD v58[4]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v59; // [rsp+98h] [rbp-11h]

  v13 = a12;
  v53 = a12;
  v52 = a4;
  v15 = 0;
  Valid = PhkFirstValid(a1, 13LL);
  if ( !Valid )
    return 0LL;
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928);
  if ( !v19 )
    goto LABEL_9;
  v20 = PtiKbdFromQ(v19);
  v21 = v20;
  if ( !v20 )
    goto LABEL_9;
  v22 = *(_QWORD *)(Valid + 16);
  v23 = *(_QWORD *)(v22 + 456);
  if ( *(_QWORD *)(v20 + 456) != v23 )
    goto LABEL_9;
  v24 = *(_QWORD *)(W32GetUserSessionState(v22, v23) + 19176);
  if ( v24 != *(_QWORD *)(W32GetUserSessionState(v26, v25) + 62968)
    && (unsigned int)HasHidTable(v21)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 456) + 824LL) + 100LL) & 0x10) != 0 )
  {
    return 0LL;
  }
  v13 = v53;
LABEL_9:
  v27 = *(_QWORD *)(a1 + 1544);
  v54 = a5;
  v58[0] = a5;
  v58[1] = a6;
  v28 = a2 | 0x2000;
  v57 = v27;
  if ( a3 == v52 )
    v28 = a2;
  v58[3] = a9;
  v29 = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | HIBYTE(v28);
  v59 = a10;
  v30 = *(_DWORD *)(a1 + 1552);
  v58[2] = v29;
  v51 = v30;
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1544) = -1;
    *(_DWORD *)(a1 + 1548) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1544) = *(_QWORD *)v13;
    *(_DWORD *)(a1 + 1552) = *(_DWORD *)(v13 + 8);
  }
  v31 = *(_QWORD *)(a1 + 1568);
  *(_QWORD *)(a1 + 1568) = v58;
  v55 = v31;
  v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL) + 56LL);
  v33 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  InputTraceLogging::Keyboard::CallLowLevelHooks(v32);
  v34 = 1;
  v35 = xxxCallHook2(Valid, 0LL, v52, (__int64)v58, 1u);
  InputTraceLogging::Keyboard::HandleLowLevelHooks(v32, v33);
  if ( !v35 )
    goto LABEL_24;
  *(_QWORD *)(a1 + 1544) = v57;
  *(_DWORD *)(a1 + 1552) = v51;
  if ( IsSAS(a5, &v52) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v34 = 0;
    }
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v36);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v34;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        6,
        10,
        (__int64)&WPP_7bcc8e7bb1623d655735815619c5a158_Traceguids);
    }
LABEL_24:
    v41 = v53;
    v42 = v55;
    *(_QWORD *)(a1 + 1544) = v57;
    *(_DWORD *)(a1 + 1552) = v51;
    *(_QWORD *)(a1 + 1568) = v42;
    v43 = *(_QWORD *)v41;
    v56 = *(_DWORD *)(v41 + 8);
    v55 = v43;
    LOBYTE(v15) = (unsigned int)IsGpqForegroundAccessibleExplicit(a8, a1, &v55, a11) == 0;
    return v15;
  }
  if ( IsUninterceptable(a5) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v34 = 0;
    }
    v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v34;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(v47 + 69152),
        3,
        6,
        11,
        (__int64)&WPP_7bcc8e7bb1623d655735815619c5a158_Traceguids,
        v54);
    }
    goto LABEL_24;
  }
  if ( (unsigned int)Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline() && !a7 )
    ResetWindowKeyProcessing(0LL);
  *(_QWORD *)(a1 + 1568) = v55;
  return 1LL;
}
