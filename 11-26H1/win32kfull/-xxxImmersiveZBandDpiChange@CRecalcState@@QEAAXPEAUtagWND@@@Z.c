/*
 * XREFs of ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402613D0
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1402A211C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 */

void __fastcall CRecalcState::xxxImmersiveZBandDpiChange(CRecalcState *this, struct tagTHREADINFO **a2)
{
  __int64 v3; // rdx
  char v4; // r13
  char v5; // al
  struct tagTHREADINFO *v6; // rax
  struct tagTHREADINFO *v7; // rbp
  int v8; // r15d
  int v9; // edi
  int v10; // r14d
  int v11; // ebx
  int v12; // esi
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  struct tagMONITOR *v17; // rsi
  __int16 v18; // r14
  char v19; // di
  bool v20; // bp
  char WindowDpiLastNotify; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  struct tagBWL *v32; // [rsp+C0h] [rbp+8h] BYREF
  char v33; // [rsp+C8h] [rbp+10h]

  v32 = this;
  if ( a2[2] != PtiCurrent((__int64)this) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1212LL);
  }
  if ( !(unsigned int)IsImmersiveBand((__int64)a2) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1213LL);
  }
  v4 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (LOBYTE(v3) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v3) = 0;
  }
  v33 = v3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  LOBYTE(v32) = v5;
  if ( (_BYTE)v3 || v5 )
  {
    v6 = a2[5];
    v7 = *a2;
    v8 = *((_DWORD *)v6 + 23);
    v9 = *((_DWORD *)v6 + 25);
    v10 = *((_DWORD *)v6 + 22);
    v11 = *((_DWORD *)v6 + 24);
    v12 = *((_DWORD *)v6 + 59);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
    LOBYTE(v14) = (_BYTE)v32;
    LOBYTE(v15) = v33;
    WPP_RECORDER_AND_TRACE_SF_qddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      7,
      39,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      (char)v7,
      v12,
      v10,
      v8,
      v11,
      v9,
      v11 - v10,
      v9 - v8);
  }
  v16 = MonitorFromRect((__int32 *)a2[5] + 22, 0LL, *((_DWORD *)a2[5] + 72));
  v17 = (struct tagMONITOR *)v16;
  if ( v16 )
  {
    v18 = *(_WORD *)(*(_QWORD *)(v16 + 40) + 60LL);
    if ( v18 != (unsigned __int16)GetWindowDpiLastNotify((__int64)a2) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v19 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a2);
        v24 = W32GetUserSessionState(v23, v22);
        LOBYTE(v25) = v20;
        LOBYTE(v26) = v19;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69152),
          4,
          7,
          40,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v18,
          WindowDpiLastNotify);
      }
      v32 = 0LL;
      if ( (unsigned int)UpdateMonitorForWindowAndChildren(a2, v17, (__int64 *)&v32, 0) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
          || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v28 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v4 = 0;
        }
        if ( v28 || v4 )
        {
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
          LOBYTE(v30) = v4;
          LOBYTE(v31) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v30,
            *(_QWORD *)(v29 + 69152),
            5,
            7,
            41,
            (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
        }
        xxxNotifyMonitorChanged((struct tagWND *)a2, (struct tagRECT *)((char *)a2[5] + 88), v32, 0);
      }
    }
  }
}
