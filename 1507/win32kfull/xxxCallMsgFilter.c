/*
 * XREFs of xxxCallMsgFilter @ 0x1C01E7174
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C00EB340 (NtUserCallMsgFilter.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02321DC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, int a2)
{
  int v3; // r8d

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == 576 || ((v3 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(a2, 0, a1, 6u) )
  {
    return 1LL;
  }
  if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 1) != 0 )
    return xxxCallHook(a2, 0, a1, 0xFFFFFFFF);
  else
    return 0LL;
}
