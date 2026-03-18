/*
 * XREFs of ViGenericQuerySecurity @ 0x1407523F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericQuerySecurity(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_QUERY_SECURITY, 0x14u);
}
