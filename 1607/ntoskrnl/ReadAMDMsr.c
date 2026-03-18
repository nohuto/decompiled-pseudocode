/*
 * XREFs of ReadAMDMsr @ 0x1401663D0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1401D8DBC (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
