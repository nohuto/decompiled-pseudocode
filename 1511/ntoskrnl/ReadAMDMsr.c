/*
 * XREFs of ReadAMDMsr @ 0x14015AF90
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1401CA604 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
