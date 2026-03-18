/*
 * XREFs of xxxMNReleaseCapture @ 0x1C01404F0
 * Callers:
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxEndMenu @ 0x1C02341A4 (xxxEndMenu.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 */

__int64 __fastcall xxxMNReleaseCapture(__int64 a1)
{
  __int64 result; // rax

  result = gptiCurrent;
  if ( a1 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = result & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x100000u;
      return xxxReleaseCapture();
    }
  }
  return result;
}
