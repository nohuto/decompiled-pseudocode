/*
 * XREFs of PopProcessorSetPep @ 0x14014CF68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopProcessorSetPep(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  if ( !v1 || !*(_QWORD *)(v1 + 104) )
    return 3221225474LL;
  PopFxProcessorPlugin = *(_QWORD *)(a1 + 64);
  return result;
}
