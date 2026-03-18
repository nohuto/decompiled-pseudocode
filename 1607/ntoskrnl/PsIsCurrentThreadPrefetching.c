/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1400FD4A0
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
