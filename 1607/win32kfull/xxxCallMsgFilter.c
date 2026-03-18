/*
 * XREFs of xxxCallMsgFilter @ 0x1C01DDE44
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C010E130 (NtUserCallMsgFilter.c)
 *     xxxSendMenuSelect @ 0x1C0140374 (xxxSendMenuSelect.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 */

__int64 __fastcall xxxCallMsgFilter(int *a1, unsigned int a2)
{
  int v3; // r8d

  v3 = a1[2];
  if ( v3 == 576 || ((v3 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(a2, 0LL, a1, 6u) )
  {
    return 1LL;
  }
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 1) != 0 )
    return xxxCallHook(a2, 0LL, a1, 0xFFFFFFFF);
  else
    return 0LL;
}
