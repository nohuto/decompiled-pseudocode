/*
 * XREFs of FreePointerMessageParams @ 0x1C01E0B64
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C006B9D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C01D1558 (FreeQEntry.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall FreePointerMessageParams(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    v1 = *(_DWORD *)(a1 + 88) == 0;
    v2 = 2LL;
    v3 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
      v2 = 3LL;
    return PointerList::UnreferenceMsgData(v3, v2);
  }
  return result;
}
