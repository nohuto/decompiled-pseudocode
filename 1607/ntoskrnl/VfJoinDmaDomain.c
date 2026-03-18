/*
 * XREFs of VfJoinDmaDomain @ 0x140222BAC
 * Callers:
 *     <none>
 * Callees:
 *     ViGetRealDmaOperation @ 0x140709924 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfJoinDmaDomain(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64))ViGetRealDmaOperation(a1, 248LL);
  return RealDmaOperation(a1, a2);
}
