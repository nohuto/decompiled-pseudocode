/*
 * XREFs of VfJoinDmaDomain @ 0x14025A664
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfJoinDmaDomain(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1, 248LL);
  return RealDmaOperation(a1, a2);
}
