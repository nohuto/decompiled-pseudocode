/*
 * XREFs of ViGetMapRegisterFile @ 0x140709830
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140706EC8 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     ViSwap @ 0x14070A67C (ViSwap.c)
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
