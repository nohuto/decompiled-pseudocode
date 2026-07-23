/*
 * XREFs of MiSizeMemoryListLocks @ 0x1404D36C0
 * Callers:
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140326A3C + 27);
}
