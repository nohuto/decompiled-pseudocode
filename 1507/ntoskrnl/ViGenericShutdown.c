/*
 * XREFs of ViGenericShutdown @ 0x140752498
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericShutdown(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SHUTDOWN, 0x10u);
}
