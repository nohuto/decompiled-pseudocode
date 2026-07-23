/*
 * XREFs of ReadAMDMsr @ 0x140166940
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1401D8BE8 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
