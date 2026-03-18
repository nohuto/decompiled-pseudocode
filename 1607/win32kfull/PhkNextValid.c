/*
 * XREFs of PhkNextValid @ 0x1C00EE6A8
 * Callers:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 *     xxxCallNextHookEx @ 0x1C00EE654 (xxxCallNextHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01DDEF0 (zzzUnhookWindowsHook.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x1C022E410 (fnHkINLPCWPRETEXSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhkNextValid(__int64 a1)
{
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
      return 0LL;
    a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL * (*(_DWORD *)(a1 + 48) + 1) + 32);
LABEL_3:
    if ( !a1 || (*(_DWORD *)(a1 + 64) & 0x80u) == 0 )
      return a1;
  }
}
