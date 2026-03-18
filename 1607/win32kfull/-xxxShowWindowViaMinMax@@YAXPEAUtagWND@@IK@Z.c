/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C012C5A8
 * Callers:
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01CF1A4 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxShowWindowViaMinMax(struct tagWND *a1, unsigned int a2, int a3)
{
  char v3; // bl

  v3 = a3;
  xxxMinMaximizeEx(a1, a2, a3, 0LL, 0LL);
  if ( v3 < 0 )
    xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
}
