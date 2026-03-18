/*
 * XREFs of MiSizeMemoryListLocks @ 0x1404C697C
 * Callers:
 *     MiInitializeMirroring @ 0x14074CF24 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_1402FE70C + 27);
}
