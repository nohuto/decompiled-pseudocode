/*
 * XREFs of ViGenericLockControl @ 0x1406CE8F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericLockControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_LOCK_CONTROL, 0x11u);
}
