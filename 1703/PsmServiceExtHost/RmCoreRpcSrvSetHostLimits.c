/*
 * XREFs of RmCoreRpcSrvSetHostLimits @ 0x18002D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmCoreRpcSrvSetHostLimits(
        struct _RM_ACTIVATOR *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  return RmpCoreApiSetHostLimits(a1, a2, a3);
}
