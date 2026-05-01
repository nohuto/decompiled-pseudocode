/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800054D8
 * Callers:
 *     ?RmpGenerateUsageLimitsFromRuntimeSettings@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001A748 (-RmpGenerateUsageLimitsFromRuntimeSettings@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  return result;
}
