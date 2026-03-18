/*
 * XREFs of ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxUnlockMenuState @ 0x1C010B940 (xxxUnlockMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C013776C (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     NtUserMNDragLeave @ 0x1C021D2A0 (NtUserMNDragLeave.c)
 *     xxxMNDragOver @ 0x1C023B7B8 (xxxMNDragOver.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 */

__int64 __fastcall xxxUnlockMenuStateInternal(struct tagMENUSTATE *a1, int a2)
{
  int v4; // r9d

  if ( (*((_DWORD *)a1 + 10))-- != 1 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 2);
  if ( (v4 & 4) != 0 && (**(_DWORD **)a1 & 0x8000) == 0 )
    return 0LL;
  if ( !a2 && (v4 & 0x1000000) == 0 )
    return 0LL;
  xxxMNEndMenuState(a1);
  return 1LL;
}
