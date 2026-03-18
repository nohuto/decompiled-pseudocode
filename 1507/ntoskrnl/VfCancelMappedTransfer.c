/*
 * XREFs of VfCancelMappedTransfer @ 0x14073B704
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfCancelMappedTransfer(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1, 224LL);
  return RealDmaOperation(a1, a2);
}
