/*
 * XREFs of BgLibraryDestroy @ 0x14072A2C4
 * Callers:
 *     BgkDestroy @ 0x140728724 (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E860 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  unsigned int v1; // edi
  bool v2; // bl

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 1) == 0 )
  {
    v1 = 0;
LABEL_6:
    BgpFwReleaseLock();
    return v1;
  }
  qword_1402FA0E0 = 0LL;
  v2 = (dword_1402F9F90 & 0xC00) == 3072;
  v1 = BgpFwLibraryDestroy();
  if ( !v2 )
    goto LABEL_6;
  return v1;
}
