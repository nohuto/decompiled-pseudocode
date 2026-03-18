/*
 * XREFs of ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140158B00
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x140055200 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14018A7EC (-ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14018AA6C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1402A0784 (-YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 */

struct tagQMSG *__fastcall xxxGetNextSysMsg(struct tagTHREADINFO *a1, struct tagQMSG *a2, struct tagQMSG *a3)
{
  struct tagQMSG *v3; // rbp
  __int64 v4; // r14
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  const struct tagQMSG **v10; // rbx
  const struct tagQMSG *v11; // rbx
  __int64 v13; // rax
  int v14; // eax
  volatile signed __int32 *v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  const struct tagQMSG **v18; // rax
  const struct tagQMSG *v19; // rdx
  __int64 v20; // rax
  const struct tagQMSG **v21; // rax
  int v22; // eax
  char v23; // r12
  char v24; // r13
  __int64 UserSessionState; // rax
  __int64 v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  int v28; // [rsp+B0h] [rbp+8h]
  const struct tagQMSG *v30; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v4 = *((_QWORD *)a1 + 58) + 24LL;
  if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant() != 1 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) & 0x20) != 0 )
      PostPendingMouseMove();
    if ( *(_DWORD *)(v4 + 16) )
    {
      if ( ShouldYieldInputQueue(a1) )
      {
        InputTraceLogging::Mouse::YieldInputQueue(*(const struct tagQMSG **)v4, *((const struct tagQ **)a1 + 58));
        WakeSomeoneAfterUnlockingOrUndeferring(*(struct tagQMSG **)v4);
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 60) + 4LL) & 0x402) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7189LL);
          return 0LL;
        }
      }
      else if ( *(_DWORD *)(v4 + 16) )
      {
        goto LABEL_10;
      }
    }
    return 0LL;
  }
  if ( *(_DWORD *)(v4 + 16) )
    *(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) &= ~0x1000u;
  v7 = *((_QWORD *)a1 + 58);
  v8 = *(_DWORD *)(v7 + 436) & 0x1020;
  if ( (*(_DWORD *)(v7 + 436) & 0x20) != 0 )
  {
    PostPendingMouseMove();
    v9 = *((_QWORD *)a1 + 170);
    if ( (v9 & 0x2000) == 0 && (v9 & 0x2000000000LL) == 0 )
      *(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) |= 0x1000u;
  }
  if ( !*(_DWORD *)(v4 + 16) )
  {
    if ( v8 == 4128 )
      goto LABEL_14;
    return 0LL;
  }
  if ( v8 == 4128 )
  {
LABEL_14:
    if ( *(_QWORD *)v4 )
    {
      InputTraceLogging::Mouse::YieldInputQueue(*(const struct tagQMSG **)v4, *((const struct tagQ **)a1 + 58));
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 60) + 4LL) & 2) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7166LL);
        return 0LL;
      }
    }
    return 0LL;
  }
LABEL_10:
  if ( a2 && (v10 = *(const struct tagQMSG ***)(*((_QWORD *)a1 + 58) + 88LL)) != 0LL )
    v11 = *v10;
  else
    v11 = *(const struct tagQMSG **)v4;
  v13 = *((_QWORD *)a1 + 170);
  if ( (v13 & 0x2000) != 0 || (v13 & 0x2000000000LL) != 0 )
  {
    if ( !v11 )
      return v11;
    while ( 1 )
    {
      v14 = *((_DWORD *)v11 + 25);
      if ( (v14 & 0x20) == 0 && (v14 & 0x8000000) == 0 )
        break;
      if ( (v14 & 0x10) == 0 )
        break;
      v11 = *(const struct tagQMSG **)v11;
      if ( !v11 )
        return 0LL;
    }
  }
  if ( v11 )
  {
    v15 = (volatile signed __int32 *)*((_QWORD *)v11 + 13);
    if ( v15 && v15 != (volatile signed __int32 *)a1 && (_InterlockedCompareExchange(v15 + 130, 0, 0) & 0x10000) != 0 )
    {
      v16 = 0;
      do
      {
        v17 = *((_QWORD *)v11 + 13);
        if ( !v17 || (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 520), 0, 0) & 0x10000) == 0 )
          break;
        v18 = (const struct tagQMSG **)*((_QWORD *)v11 + 1);
        v19 = *(const struct tagQMSG **)v11;
        v30 = *(const struct tagQMSG **)v11;
        if ( v18 )
          *v18 = v19;
        else
          *(_QWORD *)v4 = v19;
        v20 = *((_QWORD *)v11 + 1);
        if ( *(_QWORD *)v11 )
          *(_QWORD *)(*(_QWORD *)v11 + 8LL) = v20;
        else
          *(_QWORD *)(v4 + 8) = v20;
        if ( v11 == *(const struct tagQMSG **)(v4 + 32) )
          *(_QWORD *)(v4 + 32) = 0LL;
        *((_QWORD *)v11 + 1) = 0LL;
        *(_QWORD *)v11 = 0LL;
        v21 = *(const struct tagQMSG ***)(v4 + 24);
        if ( v21 )
        {
          *v21 = v11;
          *((_QWORD *)v11 + 1) = *(_QWORD *)(v4 + 24);
          *(_QWORD *)(v4 + 24) = v11;
        }
        else
        {
          *(_QWORD *)(v4 + 24) = v11;
          *((_QWORD *)v11 + 1) = 0LL;
        }
        v22 = *((_DWORD *)v11 + 25);
        *(_QWORD *)v11 = 0LL;
        if ( (v22 & 0x2000) == 0 && (v22 & 0x4000) == 0 && (v22 & 0x10000) == 0 )
        {
          v28 = ++v16;
          v23 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
            WPP_RECORDER_AND_TRACE_SF_qiqdd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v23,
              v24,
              *(_QWORD *)(UserSessionState + 69152),
              v26,
              v27,
              0x1Au,
              (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids);
            v19 = v30;
            v16 = v28;
          }
        }
        v11 = v19;
      }
      while ( v19 );
      *(_DWORD *)(v4 + 16) -= v16;
      if ( !v11 )
        return v11;
      v3 = a3;
    }
    *(_OWORD *)v3 = *(_OWORD *)v11;
    *((_OWORD *)v3 + 1) = *((_OWORD *)v11 + 1);
    *((_OWORD *)v3 + 2) = *((_OWORD *)v11 + 2);
    *((_OWORD *)v3 + 3) = *((_OWORD *)v11 + 3);
    *((_OWORD *)v3 + 4) = *((_OWORD *)v11 + 4);
    *((_OWORD *)v3 + 5) = *((_OWORD *)v11 + 5);
    *((_OWORD *)v3 + 6) = *((_OWORD *)v11 + 6);
    *((_OWORD *)v3 + 7) = *((_OWORD *)v11 + 7);
    *((_OWORD *)v3 + 8) = *((_OWORD *)v11 + 8);
    *((_OWORD *)v3 + 9) = *((_OWORD *)v11 + 9);
    *((_QWORD *)v3 + 20) = *((_QWORD *)v11 + 20);
  }
  return v11;
}
