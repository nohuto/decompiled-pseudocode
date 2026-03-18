/*
 * XREFs of xxxInvalidateRect @ 0x1C020E55C
 * Callers:
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022B0C0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     xxxMNSetGapState @ 0x1C02333A4 (xxxMNSetGapState.c)
 *     xxxMNUpdateShownMenu @ 0x1C0233F08 (xxxMNUpdateShownMenu.c)
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
