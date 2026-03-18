/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00B5FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
