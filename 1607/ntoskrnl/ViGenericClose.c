/*
 * XREFs of ViGenericClose @ 0x14071A7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericClose(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CLOSE, 2LL);
}
