/*
 * XREFs of EvaluateArrangeState @ 0x1C020257C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 */

__int64 __fastcall EvaluateArrangeState(__int64 a1)
{
  __int64 DesktopWindow; // rax
  __int64 v2; // rdx
  char v4; // al
  char v5; // dl

  DesktopWindow = GetDesktopWindow(a1);
  if ( *(_QWORD *)(v2 + 88) != DesktopWindow )
    return 6LL;
  v4 = *(_BYTE *)(v2 + 55);
  if ( (v4 & 0x20) != 0 )
    return 5LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  v5 = *(_BYTE *)(v2 + 289);
  if ( (v5 & 3) == 3 )
    return 1LL;
  if ( (v5 & 1) != 0 )
    return 2LL;
  return 4 - (unsigned int)((v5 & 2) != 0);
}
