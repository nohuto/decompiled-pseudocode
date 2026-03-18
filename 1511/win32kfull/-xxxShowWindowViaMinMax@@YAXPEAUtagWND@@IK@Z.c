/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C010A2C4
 * Callers:
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxShowWindowViaMinMax(struct tagWND *a1, unsigned int a2, unsigned int a3)
{
  char v3; // bl

  v3 = a3;
  xxxMinMaximizeEx(a1, a2, a3, 0LL, 0LL);
  if ( v3 < 0 )
    xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
}
