/*
 * XREFs of DelQEntry @ 0x140095C20
 * Callers:
 *     DestroyThreadsMessages @ 0x140093F10 (DestroyThreadsMessages.c)
 *     ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140094328 (-CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     EditionDelQEntry @ 0x1400945E0 (EditionDelQEntry.c)
 *     FreeMessageList @ 0x140094860 (FreeMessageList.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     DelegateCoalescePointerMessage @ 0x140096CE4 (DelegateCoalescePointerMessage.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140135360 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401407C8 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x14019C53C (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1401E94B4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x140203E2C (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14025E4B0 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SuspendThreadQueue @ 0x1402A7460 (SuspendThreadQueue.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  bool v9; // bp
  bool v10; // r12
  __int64 UserSessionState; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax

  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
    *v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a1 == a2 )
    *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 100);
  if ( (result & 0x2000) == 0 && (result & 0x4000) == 0 && (result & 0x10000) == 0 )
  {
    --*(_DWORD *)(a1 + 16);
    v7 = (__int64)WPP_GLOBAL_Control;
    v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      result = WPP_RECORDER_AND_TRACE_SF_qiqdd(
                 *((_QWORD *)WPP_GLOBAL_Control + 3),
                 v9,
                 v10,
                 *(_QWORD *)(UserSessionState + 69152));
    }
  }
  if ( a2 == *(_QWORD *)(a1 + 32) )
    *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 100) & 8) != 0 && !*(_DWORD *)(a2 + 96) )
    {
      if ( (v13 = *(_DWORD *)(a2 + 24), v13 >= 0x241) && v13 <= 0x244
        || (v14 = v13 - 581, v14 <= 0x12) && (v7 = 507647LL, _bittest((const int *)&v7, v14)) )
      {
        v15 = W32GetUserSessionState(v7, a2);
        CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v15 + 3256), *(_QWORD *)(a2 + 40), 2LL, a2);
      }
    }
    v12 = W32GetUserSessionState(v7, a2);
    return Win32FreeToPagedLookasideList(*(_QWORD *)(v12 + 16864), a2);
  }
  return result;
}
