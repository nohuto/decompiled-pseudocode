/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00B5E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
