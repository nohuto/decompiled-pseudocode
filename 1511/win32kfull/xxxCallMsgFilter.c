/*
 * XREFs of xxxCallMsgFilter @ 0x1C01E75E4
 * Callers:
 *     NtUserCallMsgFilter @ 0x1C00F14B0 (NtUserCallMsgFilter.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxSendMenuSelect @ 0x1C0139480 (xxxSendMenuSelect.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, unsigned int a2)
{
  int v3; // r8d

  v3 = *(_DWORD *)(a1 + 8);
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
