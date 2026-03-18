/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00B8760
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
