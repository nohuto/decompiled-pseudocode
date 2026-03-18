/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658
 * Callers:
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5100 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1402F3BF4 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402F5A28 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlsddddddll @ 0x1402F72C4 (WPP_RECORDER_AND_TRACE_SF_qlsddddddll.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int v5; // r14d
  struct tagWND *v7; // r15
  bool v8; // al
  unsigned int *v9; // rcx
  unsigned int v10; // ebp
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  int v14; // esi
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  unsigned int v19; // r8d
  int v20; // ebx
  HDC DCEx; // r12
  int v22; // ebx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  unsigned int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // r9d
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // [rsp+A0h] [rbp-68h]
  bool v35; // [rsp+A1h] [rbp-67h]
  __m128i v36; // [rsp+A8h] [rbp-60h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a1;
  v8 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = &WPP_RECORDER_INITIALIZED;
  v34 = v8;
  v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = (*(_DWORD *)a2 >> 1) & 1;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    W32GetUserSessionState(v9, WPP_GLOBAL_Control);
    GetScrollRequestCodeString(a4, v10);
    LOBYTE(v11) = v35;
    LOBYTE(v12) = v34;
    v5 = a3;
    WPP_RECORDER_AND_TRACE_SF_qlsddddddll(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, v13);
    v4 = a4;
    v7 = a1;
  }
  v14 = 2;
  if ( v4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v36 = *((__m128i *)a2 + 2);
    DCEx = (HDC)_GetDCEx(v7, 0LL, 65537LL);
    v22 = *(_DWORD *)a2 & 2;
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(v22 == 0 ? 0xB : 0, DpiForSystem);
    v25 = GetDpiForSystem();
    v26 = GetDpiDependentMetric(v22 != 0 ? 10 : 1, v25);
    v27 = _mm_cvtsi128_si32(v36);
    v20 = 3;
    if ( DpiDependentMetric == _mm_cvtsi128_si32(_mm_srli_si128(v36, 8)) - v27
      && v26 == v36.m128i_i32[3] - v36.m128i_i32[1] )
    {
      v28 = *(_DWORD *)a2 & 2;
      if ( v4 )
        v29 = v28 != 0 ? 50 : 54;
      else
        v29 = v28 != 0 ? 46 : 58;
      v30 = v29 + 1;
      if ( !v5 )
        v30 = v29;
      BitBltSysBmp(DCEx, v27, v36.m128i_i32[1], v30, 1);
    }
    else
    {
      DrawFrameControl(DCEx, (struct tagRECT *)&v36, 3, (v4 != 0) | (v5 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(DCEx);
    if ( v4 )
      v31 = 1544;
    else
      v31 = 1537;
    SetOrClrWF(v5 != 0, v7, v31, 1);
    UserSessionState = W32GetUserSessionState(v33, v32);
    v19 = ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA;
    v14 = v4 != 0 ? 5 : 1;
  }
  else
  {
    InvertScrollHilite(v7, a2);
    if ( v4 == 2 )
      v15 = 1538;
    else
      v15 = 1540;
    SetOrClrWF(v5 != 0, v7, v15, 1);
    UserSessionState = W32GetUserSessionState(v17, v16);
    v19 = ((*(_DWORD *)a2 & 2) != 0) | 0xFFFFFFFA;
    if ( v4 != 2 )
      v14 = 4;
    v20 = 3;
  }
  if ( !*(_DWORD *)(UserSessionState + 70592) )
    v20 = 1;
  xxxWindowEvent(0x800Au, v7, v19, v14, v20);
}
