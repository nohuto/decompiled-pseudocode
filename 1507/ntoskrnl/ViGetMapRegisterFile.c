/*
 * XREFs of ViGetMapRegisterFile @ 0x14073E4C0
 * Callers:
 *     VfFlushAdapterBuffers @ 0x14073B770 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     ViSwap @ 0x14073F458 (ViSwap.c)
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
