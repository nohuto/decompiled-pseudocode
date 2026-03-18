/*
 * XREFs of DelQEntry @ 0x1C008C604
 * Callers:
 *     FindQMsg @ 0x1C006BDA0 (FindQMsg.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C0080090 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C008C290 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C0090E90 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     DestroyThreadsMessages @ 0x1C00D9830 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00D98A0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C00E77B0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0115CC4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0115D6C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E09A4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F74EC (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01FB800 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C021BAA0 (NtUserGetRawInputBuffer.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E3D8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01E0B64 (FreePointerMessageParams.c)
 */

void __fastcall DelQEntry(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdx
  __int64 v6; // rdx

  v5 = (__int64 *)a2[1];
  if ( v5 )
    *v5 = *a2;
  v6 = *a2;
  if ( *a2 )
    *(_QWORD *)(v6 + 8) = a2[1];
  if ( *(__int64 **)a1 == a2 )
    *(_QWORD *)a1 = *a2;
  if ( *(__int64 **)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = a2[1];
  --*(_DWORD *)(a1 + 16);
  if ( (_DWORD)a3 )
  {
    if ( (*((_DWORD *)a2 + 23) & 8) != 0 && !*((_DWORD *)a2 + 22) )
    {
      if ( (unsigned int)IsPointerInputMessage(*((unsigned int *)a2 + 6), v6, a3, a4) )
        FreePointerMessageParams(a2);
    }
    Win32FreeToPagedLookasideList(QEntryLookaside, a2);
  }
}
