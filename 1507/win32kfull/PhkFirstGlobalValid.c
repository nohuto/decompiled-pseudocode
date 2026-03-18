/*
 * XREFs of PhkFirstGlobalValid @ 0x1C008C504
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C0049B20 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C004A0FC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C008C290 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     GetJournallingQueue @ 0x1C008C4B0 (GetJournallingQueue.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6D28 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E7040 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL * a2 + 40);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid(v2);
  return v2;
}
