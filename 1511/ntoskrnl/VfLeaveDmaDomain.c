/*
 * XREFs of VfLeaveDmaDomain @ 0x14020B120
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfLeaveDmaDomain(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1, 256LL);
  return RealDmaOperation(a1);
}
