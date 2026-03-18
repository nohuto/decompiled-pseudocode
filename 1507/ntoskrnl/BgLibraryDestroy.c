/*
 * XREFs of BgLibraryDestroy @ 0x140761330
 * Callers:
 *     BgkDestroy @ 0x14075F69C (BgkDestroy.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14010280C (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x14075F6E8 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  unsigned int v1; // edi
  bool v2; // bl

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140323CF0 & 1) == 0 )
  {
    v1 = 0;
LABEL_6:
    BgpFwReleaseLock();
    return v1;
  }
  v2 = (dword_140323CF0 & 0xC00) == 3072;
  v1 = BgpFwLibraryDestroy();
  if ( !v2 )
    goto LABEL_6;
  return v1;
}
