/*
 * XREFs of ViGenericSetQuota @ 0x14071AA8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericSetQuota(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SET_QUOTA, 0x1Au);
}
