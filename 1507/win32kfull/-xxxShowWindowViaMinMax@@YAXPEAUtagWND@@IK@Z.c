/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C00FE300
 * Callers:
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D65A8 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxShowWindowViaMinMax(struct tagWND *a1, unsigned int a2, int a3)
{
  char v3; // bl

  v3 = a3;
  xxxMinMaximizeEx(a1, a2, a3, 0LL, 0LL);
  if ( v3 < 0 )
    xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
}
