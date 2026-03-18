/*
 * XREFs of EditionAllowProcessLaunchForegroundPolicy @ 0x1401A5D50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionAllowProcessLaunchForegroundPolicy(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // bl
  bool v5; // si
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  char v9; // si
  bool v10; // bp
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  const struct tagPROCESSINFO **v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // rdx
  __int16 v19; // [rsp+30h] [rbp-28h]
  __int16 v20; // [rsp+30h] [rbp-28h]

  if ( !IsCurrentSessionServiceSession() )
  {
    v4 = 1;
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v9 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 1LL;
        v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v2) + 69152);
        v20 = 85;
        goto LABEL_29;
      }
      if ( a1 != 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1513LL);
      v14 = (const struct tagPROCESSINFO **)PtiCurrent(v3);
      LOBYTE(v15) = IAMThreadAccessGranted((const struct tagTHREADINFO *)v14);
      if ( v15 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v9 = 0;
        }
        v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 1LL;
        v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v16) + 69152);
        v20 = 86;
        goto LABEL_29;
      }
      if ( !CanForceForeground(v14[57], v16) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v4 = 0;
        }
        v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v18) + 69152);
        v19 = 88;
        goto LABEL_46;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v18) + 69152);
        v20 = 87;
LABEL_29:
        LOBYTE(v12) = v10;
        LOBYTE(v11) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          v13,
          4,
          2,
          v20,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
      }
    }
    return 1LL;
  }
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v2) + 69152);
  v19 = 84;
LABEL_46:
  LOBYTE(v7) = v5;
  LOBYTE(v6) = v4;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v6,
    v7,
    v8,
    3,
    2,
    v19,
    (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
  return 0LL;
}
