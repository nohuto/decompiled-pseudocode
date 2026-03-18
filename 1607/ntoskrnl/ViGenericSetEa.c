/*
 * XREFs of ViGenericSetEa @ 0x14071AA64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericSetEa(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SET_EA, 8u);
}
