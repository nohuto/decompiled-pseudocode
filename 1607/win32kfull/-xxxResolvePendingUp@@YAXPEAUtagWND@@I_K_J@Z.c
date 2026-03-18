/*
 * XREFs of ?xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01ED670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall xxxResolvePendingUp(struct tagWND *a1)
{
  gidTapTimer = 0LL;
  gbTapTimerFired = 1;
  xxxCancelMouseUpTimer(1);
}
