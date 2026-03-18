/*
 * XREFs of GetWndSBDisableFlags @ 0x14018F5C0
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x14018E024 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     xxxGetScrollBarInfo @ 0x14018ED28 (xxxGetScrollBarInfo.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDrawScrollBar @ 0x1401F0344 (xxxDrawScrollBar.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 *a1, int a2)
{
  int *v3; // rcx
  int v4; // ecx
  int v5; // eax
  bool v7; // di
  bool v8; // si
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  v3 = (int *)a1[19];
  if ( v3 )
  {
    v4 = *v3;
    v5 = v4 >> 2;
    if ( !a2 )
      LOBYTE(v5) = v4;
    return v5 & 3;
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = *a1;
      UserSessionState = W32GetUserSessionState(0LL, WPP_GLOBAL_Control);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        9,
        14,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v9);
    }
    UserSetLastError(1447);
    return 0LL;
  }
}
