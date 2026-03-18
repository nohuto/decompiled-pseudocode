/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x14002EB10
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0;
}
