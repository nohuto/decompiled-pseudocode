/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x140289CEC
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402527A0 (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::RemoveForegroundActivate(__int64 a1)
{
  struct tagTHREADINFO *v1; // r12
  unsigned int *v2; // rdx
  char v3; // bp
  __int64 v4; // rsi
  struct MOVESIZEDATA *v5; // rcx
  char v6; // di
  bool v7; // r14
  int v8; // ebx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  char v13; // r14
  bool v14; // r15
  unsigned __int8 ThreadId; // al
  int v16; // edi
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  v1 = PtiCurrent(a1);
  v2 = &WPP_RECORDER_INITIALIZED;
  v3 = 1;
  v4 = *((_QWORD *)v1 + 57);
  if ( (*(_DWORD *)(v4 + 12) & 0x40) != 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v6 = 0;
    }
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = *(_DWORD *)(v4 + 56);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v10) = v7;
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        10,
        (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
        v8);
    }
    v12 = W32GetUserSessionState(v5, v2);
    CForegroundLaunch::OnFirstActivationAttempted(*(CForegroundLaunch **)(v12 + 18912));
    if ( (*(_DWORD *)(v4 + 12) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 113LL);
  }
  if ( !tagTHREADINFO::ComputeAndTestForegroundActivate(v1) && (*(_DWORD *)(v4 + 12) & 0x100) == 0 )
    return 0;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v1);
    v16 = *(_DWORD *)(v4 + 56);
    v17 = ThreadId;
    v20 = W32GetUserSessionState(v19, v18);
    LOBYTE(v21) = v14;
    LOBYTE(v22) = v13;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 69152),
      4,
      2,
      11,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v16,
      v17);
  }
  tagTHREADINFO::ClearForegroundActivate(v1, 127LL);
  *(_DWORD *)(v4 + 12) &= ~0x100u;
  return v3;
}
