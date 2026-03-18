/*
 * XREFs of ViGenericSystemControl @ 0x1407524AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericSystemControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_SYSTEM_CONTROL, 0x17u);
}
