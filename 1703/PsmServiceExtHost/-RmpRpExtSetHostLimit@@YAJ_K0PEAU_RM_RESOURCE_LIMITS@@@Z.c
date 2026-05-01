/*
 * XREFs of ?RmpRpExtSetHostLimit@@YAJ_K0PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002360
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002374 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 */

int __fastcall RmpRpExtSetHostLimit(struct _RM_ACTIVATOR *a1, unsigned __int64 a2, struct _RM_RESOURCE_LIMITS *a3)
{
  return RmpCoreApiSetHostLimits(a1, a2, a3) | 0x10000000;
}
