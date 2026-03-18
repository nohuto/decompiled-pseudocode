/*
 * XREFs of _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1401A3834
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1401A21F0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsForegroundLocked @ 0x1401A3D64 (IsForegroundLocked.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall anonymous_namespace_::CheckCanonicalForegroundAccess(__int64 a1)
{
  char v1; // di
  struct tagTHREADINFO *v2; // r14
  const struct tagPROCESSINFO **v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r15
  bool v12; // di
  int v13; // ebx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // r15
  bool v18; // r12
  char v19; // di
  char ThreadId; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // bl
  bool v31; // di
  __int64 v32; // rax
  int v33; // edx
  int v34; // r8d
  bool v35; // bl
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  const struct tagPROCESSINFO *v39; // rdx
  char v40; // r14
  bool v41; // r15
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int16 v45; // [rsp+30h] [rbp-48h]
  __int16 v46; // [rsp+30h] [rbp-48h]

  v1 = a1;
  v2 = PtiCurrent(a1);
  v3 = (const struct tagPROCESSINFO **)((char *)v2 + 456);
  if ( !(unsigned int)IsForegroundLocked(v5, v4)
    || (v39 = *(const struct tagPROCESSINFO **)(W32GetUserSessionState(v7, v6) + 18880), *v3 == v39) )
  {
    v8 = 1;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 0xC) != 0 )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v17 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0);
        ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v2);
        UserSessionState = W32GetUserSessionState(v22, v21);
        LOBYTE(v24) = v18;
        LOBYTE(v25) = v17;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(UserSessionState + 69152),
          4,
          2,
          22,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
          ThreadId,
          v19 & 0xC);
      }
      return 1;
    }
    if ( !tagTHREADINFO::ComputeAndTestForegroundActivate(v2) )
    {
      if ( CanForceForeground(*v3) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v11 = 0;
        }
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v13 = *(_DWORD *)(*((_QWORD *)v2 + 57) + 56LL);
          v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
          LOBYTE(v15) = v12;
          LOBYTE(v16) = v11;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v15,
            *(_QWORD *)(v14 + 69152),
            4,
            2,
            23,
            (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
            v13);
        }
        return 1;
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944) )
      {
        v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 18944);
        if ( *(_DWORD *)(v29 + 664) <= 0x400u && (*(_DWORD *)(v29 + 680) & 0x40) != 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v40 = 0;
          }
          v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
            LOBYTE(v43) = v41;
            LOBYTE(v44) = v40;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v44,
              v43,
              *(_QWORD *)(v42 + 69152),
              4,
              2,
              113,
              (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v30 = 0;
          }
          v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v30 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            return 1;
          v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
          v45 = 24;
          goto LABEL_26;
        }
      }
      if ( (v1 & 4) == 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v8 = 0;
        }
        v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0;
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
        v46 = 26;
        goto LABEL_32;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v30 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
        v45 = 25;
LABEL_26:
        LOBYTE(v34) = v31;
        LOBYTE(v33) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v34,
          *(_QWORD *)(v32 + 69152),
          4,
          2,
          v45,
          (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
      }
    }
    return 1;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return 0;
  v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
  v46 = 21;
LABEL_32:
  LOBYTE(v38) = v35;
  LOBYTE(v37) = v8;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v37,
    v38,
    *(_QWORD *)(v36 + 69152),
    4,
    2,
    v46,
    (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids);
  return 0;
}
