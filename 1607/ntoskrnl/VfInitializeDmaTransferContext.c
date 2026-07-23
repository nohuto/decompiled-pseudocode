/*
 * XREFs of VfInitializeDmaTransferContext @ 0x140707C40
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfInitializeDmaTransferContext(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1, 144LL);
  return RealDmaOperation(a1, a2);
}
