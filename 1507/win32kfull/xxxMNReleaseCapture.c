/*
 * XREFs of xxxMNReleaseCapture @ 0x1C010DB8C
 * Callers:
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C023C63C (xxxEndMenu.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
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
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= ~0x100000u;
      return xxxReleaseCapture();
    }
  }
  return result;
}
