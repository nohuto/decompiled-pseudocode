/*
 * XREFs of EvaluateArrangeState @ 0x1C020AF20
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxArrangeWindow @ 0x1C020B504 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
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
