/*
 * XREFs of BgLibraryEnable @ 0x1401269B0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x1401C3C14 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwLibraryEnable @ 0x140126FDC (BgpFwLibraryEnable.c)
 *     BgpFwReleaseLock @ 0x1401271F4 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140127230 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v3; // ebx

  if ( a2 )
    dword_1402F9F90 |= 0xC00u;
  if ( !a1 )
    return (dword_1402F9F90 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) != 0 )
    v3 = BgpFwLibraryEnable(a1);
  else
    v3 = -1073741637;
  BgpFwReleaseLock();
  return v3;
}
