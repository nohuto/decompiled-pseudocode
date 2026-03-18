/*
 * XREFs of ViGenericQueryEa @ 0x1406CE934
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQueryEa(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_QUERY_EA, 7u);
}
