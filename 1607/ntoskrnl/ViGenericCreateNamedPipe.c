/*
 * XREFs of ViGenericCreateNamedPipe @ 0x14071A7D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericCreateNamedPipe(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_CREATE_NAMED_PIPE, 1LL);
}
