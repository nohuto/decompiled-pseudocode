/*
 * XREFs of ViGetMapRegisterFile @ 0x1406BD7A8
 * Callers:
 *     VfFlushAdapterBuffers @ 0x1406BAE24 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 *     ViSwap @ 0x1406BE5F4 (ViSwap.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ViGetMapRegisterFile(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v1 || *v1 != -1393569779 )
    return 0LL;
  return v1;
}
