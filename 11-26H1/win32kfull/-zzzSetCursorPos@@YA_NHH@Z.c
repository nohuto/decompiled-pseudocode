/*
 * XREFs of ?zzzSetCursorPos@@YA_NHH@Z @ 0x1401DDAB0
 * Callers:
 *     NtUserSetCursorPos @ 0x1401DD8F0 (NtUserSetCursorPos.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140173868 (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140294BF0 (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

char __fastcall zzzSetCursorPos(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // bp
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __m128i v15; // xmm6
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  bool v44; // bl
  int v45; // edx
  int v46; // r8d
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rdx
  bool v50; // bl
  bool v51; // di
  __int64 UserSessionState; // rax
  int v53; // r8d
  int v54; // edx
  __int16 v55; // [rsp+30h] [rbp-28h]

  v3 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1);
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 57)) )
  {
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v47 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v5) + 69152);
    v55 = 10;
LABEL_32:
    LOBYTE(v46) = v44;
    LOBYTE(v45) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v45,
      v46,
      v47,
      2,
      20,
      v55,
      (__int64)&WPP_f93bdd16b13e3c8824b271942f24a217_Traceguids);
    return 0;
  }
  if ( *((_QWORD *)CurrentLogicalCursorThread + 61)
    && *((_QWORD *)CurrentLogicalCursorThread + 61) != *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176) )
  {
    v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v47 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v7) + 69152);
    v55 = 11;
    goto LABEL_32;
  }
  v8 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleForPti(CurrentLogicalCursorThread, 1) )
  {
    MSGLUA_GPQFOREGROUNDPTI(CurrentLogicalCursorThread, v9);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v47 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v48) + 69152);
    v55 = 12;
    goto LABEL_32;
  }
  v11 = PtiCurrent(v10);
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(v11) )
  {
    SaveCursorPosition(__PAIR64__(a2, v3));
    v50 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v50 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v49);
      LOBYTE(v53) = v51;
      LOBYTE(v54) = v50;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v54,
        v53,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        20,
        13,
        (__int64)&WPP_f93bdd16b13e3c8824b271942f24a217_Traceguids);
    }
  }
  else
  {
    zzzInternalSetCursorPos(v3, a2, 1, 0);
    v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968);
    v15 = *(__m128i *)(*(_QWORD *)v14 + 24LL);
    v17 = W32GetUserSessionState(v14, v16);
    v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    v19 = *(unsigned __int16 *)(v17 + 19216);
    LOWORD(v18) = v18 - _mm_cvtsi128_si32(v15) - 1;
    v20 = v19 | ((unsigned __int16)v18 << 16);
    v21 = W32GetUserSessionState(v19, v18);
    v24 = 3LL * *(unsigned int *)(W32GetUserSessionState(v23, v22) + 14716);
    v25 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    *(_DWORD *)(v21 + 8 * v24 + 14720) = v20;
    LOWORD(v25) = v25 - _mm_cvtsi128_si32(_mm_srli_si128(v15, 4)) - 1;
    v26 = *(unsigned __int16 *)(v17 + 19220) | ((unsigned __int16)v25 << 16);
    v27 = W32GetUserSessionState(v25, v24);
    v30 = 3LL * *(unsigned int *)(W32GetUserSessionState(v29, v28) + 14716);
    *(_DWORD *)(v27 + 8 * v30 + 14724) = v26;
    v31 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v32 = W32GetUserSessionState(0xFFFFF78000000004uLL, v30);
    v35 = *(unsigned int *)(W32GetUserSessionState(v34, v33) + 14716);
    *(_DWORD *)(v32 + 24 * v35 + 14728) = v31;
    v36 = W32GetUserSessionState(v35, 3 * v35);
    v39 = 3 * (*(unsigned int *)(W32GetUserSessionState(v38, v37) + 14716) + 614LL);
    *(_QWORD *)(v36 + 8 * v39) = 0LL;
    LODWORD(v36) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v39, v40) + 14716) + 1) & 0x3F;
    *(_DWORD *)(W32GetUserSessionState(v42, v41) + 14716) = v36;
  }
  return 1;
}
