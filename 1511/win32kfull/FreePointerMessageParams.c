/*
 * XREFs of FreePointerMessageParams @ 0x1C01E1174
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C005AF00 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     FreeQEntry @ 0x1C0064D1C (FreeQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
