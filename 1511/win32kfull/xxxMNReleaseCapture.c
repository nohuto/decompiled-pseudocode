/*
 * XREFs of xxxMNReleaseCapture @ 0x1C01395FC
 * Callers:
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C023C80C (xxxEndMenu.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
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
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x100000u;
      return xxxReleaseCapture();
    }
  }
  return result;
}
