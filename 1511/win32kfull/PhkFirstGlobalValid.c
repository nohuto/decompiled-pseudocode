/*
 * XREFs of PhkFirstGlobalValid @ 0x1C0064BC4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     ?xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C0064954 (-xxxSkipSysMsg@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     GetJournallingQueue @ 0x1C0064B70 (GetJournallingQueue.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00821F0 (zzzUnhookWindowsHookEx.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C008279C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7198 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E74B0 (xxxCallJournalRecordHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL * a2 + 40);
  if ( v4 && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4, a2, a3, a4);
  return v4;
}
