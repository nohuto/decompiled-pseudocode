/*
 * XREFs of ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402C6F74
 * Callers:
 *     NtUserEnterMoveSizeLoop @ 0x1402B1BD0 (NtUserEnterMoveSizeLoop.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402C75E0 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140199D38 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402C60C4 (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8 (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 */

void __fastcall MoveSizeApi::xxxEnterMoveSizeLoopOnThread(MoveSizeApi *a1, struct tagWND *a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  bool v7; // si
  unsigned __int16 v8; // r12
  bool v9; // bp
  __int64 v10; // rdi
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct tagTHREADINFO *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i si128; // [rsp+60h] [rbp-48h]
  int v18; // [rsp+70h] [rbp-38h]
  MoveSizeApi *v19; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+18h]

  v20 = a3;
  v19 = a1;
  v4 = a4;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WORD2(v20);
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a2;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      1,
      123,
      (__int64)&WPP_5ceb73a2e55e3301d45450cfa64f8ae9_Traceguids,
      v10,
      a3,
      v8,
      v4);
  }
  if ( (unsigned __int8)IsCapturedByThread(&v19) || MoveSizeApi::xxxCheckForMoveSizeTouchCapture(v19, v14) )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v18 = 6553705;
    v16 = W32GetUserSessionState(v15, v14);
    zzzSetCursor(*(struct tagCURSOR **)(v16 + 552LL * (__int16)(si128.m128i_i16[v4] - 100) + 21912));
    xxxMoveSize(a2, v4, (unsigned __int16)a3 | (v8 << 16));
  }
  else
  {
    MoveSizeApi::xxxMoveSizeWithoutCapture(a2, a3, *((_QWORD *)v19 + 101), (unsigned int)v4);
  }
}
