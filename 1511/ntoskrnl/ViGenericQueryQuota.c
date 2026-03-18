/*
 * XREFs of ViGenericQueryQuota @ 0x1406CE95C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQueryQuota(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_QUERY_QUOTA, 0x19u);
}
