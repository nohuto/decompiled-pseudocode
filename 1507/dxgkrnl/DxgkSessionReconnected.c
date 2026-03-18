/*
 * XREFs of DxgkSessionReconnected @ 0x1C00BE390
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00BE408 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C0156750 (OutputDuplRemoteSessionReconnected.c)
 */

__int64 __fastcall DxgkSessionReconnected(char a1, unsigned int a2)
{
  __int64 result; // rax

  result = DxgkIncreaseSessionAdapterUniqueness();
  if ( !a1 )
    return OutputDuplRemoteSessionReconnected(a2);
  return result;
}
