/*
 * XREFs of DelQEntry @ 0x1C0064CC4
 * Callers:
 *     SuspendThreadQueue @ 0x1C000D4B0 (SuspendThreadQueue.c)
 *     FindQMsg @ 0x1C005B2D0 (FindQMsg.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C0064954 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00656F0 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C008F6F8 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     DestroyThreadsMessages @ 0x1C00DC900 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00DC980 (FreeMessageList.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C013F3DC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C013F484 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E0FB4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F79B0 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01FBC90 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C021B860 (NtUserGetRawInputBuffer.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E7F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     FreeQEntry @ 0x1C0064D1C (FreeQEntry.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // r9
  __int64 result; // rax

  v3 = (__int64 *)a2[1];
  if ( v3 )
  {
    result = *a2;
    *v3 = *a2;
  }
  if ( *a2 )
  {
    result = a2[1];
    *(_QWORD *)(*a2 + 8) = result;
  }
  if ( *(__int64 **)a1 == a2 )
  {
    result = *a2;
    *(_QWORD *)a1 = *a2;
  }
  if ( *(__int64 **)(a1 + 8) == a2 )
  {
    result = a2[1];
    *(_QWORD *)(a1 + 8) = result;
  }
  --*(_DWORD *)(a1 + 16);
  if ( a3 )
    return FreeQEntry(a2);
  return result;
}
