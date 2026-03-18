/*
 * XREFs of ViGenericCleanup @ 0x14071A78C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericCleanup(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CLEANUP, 18LL);
}
