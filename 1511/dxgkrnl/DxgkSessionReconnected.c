/*
 * XREFs of DxgkSessionReconnected @ 0x1C00CCCF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00B8F34 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C015AA64 (OutputDuplRemoteSessionReconnected.c)
 */

__int64 __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  v3 = a1;
  result = DxgkIncreaseSessionAdapterUniqueness(a1);
  if ( !v3 )
    return OutputDuplRemoteSessionReconnected(a2);
  return result;
}
