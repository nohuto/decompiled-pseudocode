/*
 * XREFs of ViGenericFlushBuffers @ 0x14071A988
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericFlushBuffers(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, (__int64 (*)(void))pXdvIRP_MJ_FLUSH_BUFFERS, 9u);
}
