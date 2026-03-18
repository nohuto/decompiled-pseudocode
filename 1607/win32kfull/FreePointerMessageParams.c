/*
 * XREFs of FreePointerMessageParams @ 0x1C01D74CC
 * Callers:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00831C0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0135788 (FreeQEntry.c)
 * Callees:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall FreePointerMessageParams(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    v1 = *(_DWORD *)(a1 + 96) == 0;
    v2 = 2LL;
    v3 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
      v2 = 3LL;
    return PointerList::UnreferenceMsgData(v3, v2);
  }
  return result;
}
