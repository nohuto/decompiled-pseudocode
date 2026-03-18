/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1400DD130
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0;
}
