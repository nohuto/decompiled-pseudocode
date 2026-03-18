/*
 * XREFs of DelQEntry @ 0x1C0057FA0
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008554 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C00579F0 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C0057CFC (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C00835A0 (FindQMsg.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C009C734 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     DestroyThreadsMessages @ 0x1C00FDE00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00FDEB0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C01142D0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01470D4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C014717C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01BFB0C (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01D730C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01EEB80 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01F2FF8 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C0214720 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C0058034 (IsHiddenByInputService.c)
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01D74CC (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // r8d

  v4 = *(_QWORD **)(a2 + 8);
  if ( v4 )
    *v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  if ( *a1 == a2 )
    *a1 = *(_QWORD *)a2;
  if ( a1[1] == a2 )
    a1[1] = *(_QWORD *)(a2 + 8);
  result = IsHiddenByInputService(a2);
  if ( !(_DWORD)result )
    --*(_DWORD *)(v6 + 16);
  if ( v7 )
  {
    if ( (*(_DWORD *)(a2 + 100) & 8) != 0 && !*(_DWORD *)(a2 + 96) )
    {
      if ( (unsigned int)IsPointerInputMessage(*(unsigned int *)(a2 + 24), v6) )
        FreePointerMessageParams(a2);
    }
    return Win32FreeToPagedLookasideList(QEntryLookaside, a2);
  }
  return result;
}
