/*
 * XREFs of ?RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180019350
 * Callers:
 *     <none>
 * Callees:
 *     RmpCoreApiSetHostLimits @ 0x180019198 (RmpCoreApiSetHostLimits.c)
 */

int __fastcall RmpRpExtSetHostLimit(__int64 a1, __int64 a2, struct _RM_RESOURCE_LIMITS *a3)
{
  return RmpCoreApiSetHostLimits(a1, a2, (__int64)a3) | 0x10000000;
}
