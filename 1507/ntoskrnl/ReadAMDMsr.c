/*
 * XREFs of ReadAMDMsr @ 0x14018AA10
 * Callers:
 *     KiDisableCacheErrataSource @ 0x140209EF8 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
