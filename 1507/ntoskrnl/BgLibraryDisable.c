/*
 * XREFs of BgLibraryDisable @ 0x14075F6B4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14010280C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140323CF0 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
