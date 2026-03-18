/*
 * XREFs of UserJobCallout @ 0x1402D00F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x14018E550 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x14018EAD0 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x14018EC0C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x140192A44 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1402CFFFC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // esi
  struct _EJOB *v3; // r12
  struct tagPROCESSINFO *v4; // rbp
  __int64 v5; // r14
  char v6; // di
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct tagW32JOB *i; // rbx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  bool v17; // bp
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // r15
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _BYTE v36[16]; // [rsp+60h] [rbp-38h] BYREF
  char v37; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  v3 = *(struct _EJOB **)(a1 + 16);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  if ( v1 == 1 )
  {
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 32));
    v4 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
      return 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v37);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v36);
  for ( i = *(struct tagW32JOB **)(W32GetUserSessionState(v10, v9) + 69088);
        i && *((struct _EJOB **)i + 1) != v3;
        i = *(struct tagW32JOB **)i )
  {
    ;
  }
  if ( v1 )
  {
    if ( v1 != 1 )
    {
      if ( v1 == 2 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v6 = 0;
        }
        v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v6;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(UserSessionState + 69152),
            4,
            8,
            13,
            (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
            (char)v3,
            (char)i);
        }
        if ( i )
          JobCalloutTerminate(i, v11);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v6 = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v14 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
          LOBYTE(v15) = v13;
          LOBYTE(v16) = v6;
          WPP_RECORDER_AND_TRACE_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 3), v16, v15, *(_QWORD *)(v14 + 69152));
        }
        v2 = -1073741822;
      }
      goto LABEL_57;
    }
    if ( i )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v6 = 0;
      }
      v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v6;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69152),
          4,
          8,
          12,
          (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
          (char)v3,
          (char)i,
          v5);
      }
      JobCalloutAddProcess(i, v4);
      goto LABEL_57;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v6 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69152),
        4,
        8,
        11,
        (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
        (char)v3);
    }
    goto LABEL_47;
  }
  if ( i )
  {
    if ( (_DWORD)v5 == *((_DWORD *)i + 8) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v6 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(v30 + 69152),
          4,
          8,
          10,
          (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids);
      }
      goto LABEL_57;
    }
    goto LABEL_56;
  }
  i = CreateW32Job(v3);
  if ( i )
  {
LABEL_56:
    *((_DWORD *)i + 8) = v5;
    UpdateJob(i);
    goto LABEL_57;
  }
LABEL_47:
  v2 = -1073741823;
LABEL_57:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v36);
  if ( !v37 )
    UserSessionSwitchLeaveCritWithNonPaged(v34, v33, v35);
  return v2;
}
