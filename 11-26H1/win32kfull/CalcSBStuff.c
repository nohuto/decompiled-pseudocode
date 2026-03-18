/*
 * XREFs of CalcSBStuff @ 0x14018F8F8
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x14018E024 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     xxxGetScrollBarInfo @ 0x14018ED28 (xxxGetScrollBarInfo.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1401F01A0 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDrawScrollBar @ 0x1401F0344 (xxxDrawScrollBar.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402F3D98 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 *     CalcSBStuff2 @ 0x14019156C (CalcSBStuff2.c)
 *     WPP_RECORDER_AND_TRACE_SF_qllldddddddddddd @ 0x1402F7008 (WPP_RECORDER_AND_TRACE_SF_qllldddddddddddd.c)
 */

__int64 __fastcall CalcSBStuff(const struct tagWND *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  const struct tagWND *v5; // rsi
  char v6; // cl
  char v7; // al
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // edi
  bool v11; // zf
  int v12; // r14d
  unsigned int v13; // eax
  __int64 result; // rax
  char v15; // dl
  unsigned int v16; // eax
  unsigned int DpiForSystem; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // [rsp+C8h] [rbp-19h]
  int v24; // [rsp+CCh] [rbp-15h]
  int v25; // [rsp+D0h] [rbp-11h]
  __int64 v26; // [rsp+D8h] [rbp-9h] BYREF
  int v27; // [rsp+E0h] [rbp-1h]
  int v28; // [rsp+E4h] [rbp+3h]
  __int128 v29; // [rsp+E8h] [rbp+7h] BYREF
  char v33; // [rsp+160h] [rbp+7Fh]

  v3 = a3;
  v29 = 0LL;
  v4 = a2;
  v5 = a1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v6 = 0;
  }
  v23 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v7 = 0;
  }
  v33 = v7;
  if ( v6 || v7 )
  {
    v18 = *((_QWORD *)v5 + 5);
    v24 = *(_DWORD *)(v18 + 108);
    v19 = *(unsigned int *)(v18 + 104);
    v25 = *(_DWORD *)(v18 + 104);
    v26 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(v19, a2);
    v21 = v24;
    v22 = v25;
    v3 = a3;
    LOBYTE(v21) = v33;
    LOBYTE(v22) = v23;
    WPP_RECORDER_AND_TRACE_SF_qllldddddddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(UserSessionState + 69152));
    v5 = a1;
    v4 = a2;
  }
  GetRect(v5, (__int64)&v29, 33);
  v8 = *((_QWORD *)v5 + 5);
  if ( (*(_BYTE *)(v8 + 26) & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - DWORD2(v29);
    v9 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - v29;
  }
  else
  {
    v9 = DWORD2(v29);
    v10 = v29;
  }
  if ( v3 )
  {
    v15 = *(_BYTE *)(v8 + 16) & 2;
    if ( (*(_BYTE *)(v8 + 25) & 0x40) != 0 )
    {
      LODWORD(v26) = v10;
      v27 = v10;
      if ( v15 )
      {
        DpiForSystem = GetDpiForSystem();
        LODWORD(v26) = v10 - GetDpiDependentMetric(0, DpiForSystem);
      }
    }
    else
    {
      LODWORD(v26) = v9;
      v27 = v9;
      if ( v15 )
      {
        v16 = GetDpiForSystem();
        v27 = v9 + GetDpiDependentMetric(0, v16);
      }
    }
    HIDWORD(v26) = DWORD1(v29);
    v28 = HIDWORD(v29);
  }
  else
  {
    v11 = (*(_BYTE *)(v8 + 16) & 4) == 0;
    v12 = HIDWORD(v29);
    HIDWORD(v26) = HIDWORD(v29);
    v28 = HIDWORD(v29);
    if ( !v11 )
    {
      v13 = GetDpiForSystem();
      v28 = v12 + GetDpiDependentMetric(1, v13);
    }
    v3 = a3;
    LODWORD(v26) = v10;
    v27 = v9;
  }
  result = InitPwSB(v5);
  if ( result )
    return CalcSBStuff2(v4, &v26, *((_QWORD *)v5 + 19) + (v3 != 0 ? 20LL : 4LL), v3);
  return result;
}
