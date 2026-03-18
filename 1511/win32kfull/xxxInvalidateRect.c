/*
 * XREFs of xxxInvalidateRect @ 0x1C02156F4
 * Callers:
 *     xxxMNSetTop @ 0x1C021738C (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0232300 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C023B8E4 (xxxMNSetGapState.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C570 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, _DWORD *a2, int a3)
{
  int v3; // r9d

  if ( a1 )
  {
    v3 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v3 = 66181;
    a2 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v3);
}
