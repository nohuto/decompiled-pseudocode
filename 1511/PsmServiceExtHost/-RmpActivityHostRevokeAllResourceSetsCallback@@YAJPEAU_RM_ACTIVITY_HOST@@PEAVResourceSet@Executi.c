/*
 * XREFs of ?RmpActivityHostRevokeAllResourceSetsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x180040A80
 * Callers:
 *     <none>
 * Callees:
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 */

__int64 __fastcall RmpActivityHostRevokeAllResourceSetsCallback(
        struct _RM_ACTIVITY_HOST *a1,
        struct ExecutionModel::ResourceSet *a2,
        void *a3)
{
  ExecutionModel::BaseResourceSet::SendReleaseRequest((__int64)a2, (unsigned int)a3);
  return 0LL;
}
