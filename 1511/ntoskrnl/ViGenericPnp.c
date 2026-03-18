/*
 * XREFs of ViGenericPnp @ 0x1406CE90C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericPnp(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_PNP, 0x1Bu);
}
