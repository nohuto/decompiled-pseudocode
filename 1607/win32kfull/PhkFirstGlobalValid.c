/*
 * XREFs of PhkFirstGlobalValid @ 0x1C0057C74
 * Callers:
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C00579F0 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     GetJournallingQueue @ 0x1C0057C20 (GetJournallingQueue.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00A444C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01DDD0C (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL * (a2 + 1) + 32);
  if ( v2 && (*(_DWORD *)(v2 + 64) & 0x80u) != 0 )
    return PhkNextValid();
  return v2;
}
