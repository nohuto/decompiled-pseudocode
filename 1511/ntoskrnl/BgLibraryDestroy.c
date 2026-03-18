/*
 * XREFs of BgLibraryDestroy @ 0x1406DE2B0
 * Callers:
 *     BgkDestroy @ 0x1406DC654 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140079D9C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x1406DC6A0 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  unsigned int v1; // edi
  bool v2; // bl

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402D4BB0 & 1) == 0 )
  {
    v1 = 0;
LABEL_6:
    BgpFwReleaseLock();
    return v1;
  }
  qword_1402D4CE0 = 0LL;
  v2 = (dword_1402D4BB0 & 0xC00) == 3072;
  v1 = BgpFwLibraryDestroy();
  if ( !v2 )
    goto LABEL_6;
  return v1;
}
