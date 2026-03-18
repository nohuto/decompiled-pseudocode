/*
 * XREFs of VfReadDmaCounter @ 0x1406BC3EC
 * Callers:
 *     <none>
 * Callees:
 *     VF_ASSERT_MAX_IRQL @ 0x1406B9F6C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfReadDmaCounter(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_MAX_IRQL();
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1, 80LL);
  return RealDmaOperation(a1);
}
