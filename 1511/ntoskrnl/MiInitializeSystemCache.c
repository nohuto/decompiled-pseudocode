/*
 * XREFs of MiInitializeSystemCache @ 0x140749490
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x14074A95C (MiInitializeDynamicRegion.c)
 */

__int64 MiInitializeSystemCache()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  qword_1402FE9E0 = 0xFFFFF6C000000000uLL;
  v0 = 0;
  qword_1402FE9E8 = 0LL;
  v1 = (__int64)((((unsigned __int64)&qword_1402FE9D0 >> 9) & 0x7FFFFFFFF8LL) - 0x3FFFFFFFF9LL) >> 3 << 28;
  qword_1402FE9D0 = v1 | qword_1402FE9D0 & 0xFFFFFFF;
  qword_1402FE9D8 = v1 | qword_1402FE9D8 & 0xFFFFFFF;
  if ( !(unsigned int)MiInitializeDynamicRegion(8LL, 0xFFFFB00000000000uLL, 0x100000000000LL) )
    return 0LL;
  byte_1402FF958 = byte_1402FF958 & 0xF8 | 2;
  LOBYTE(v0) = (unsigned int)MiInitializeSystemWorkingSetList(&dword_1402FF880, 0x100000000LL) != 0;
  return v0;
}
