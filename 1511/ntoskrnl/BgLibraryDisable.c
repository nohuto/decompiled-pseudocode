/*
 * XREFs of BgLibraryDisable @ 0x1406DC66C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140079D9C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402D4BB0 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock();
  return 0LL;
}
