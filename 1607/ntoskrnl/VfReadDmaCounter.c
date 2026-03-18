/*
 * XREFs of VfReadDmaCounter @ 0x140708460
 * Callers:
 *     <none>
 * Callees:
 *     VF_ASSERT_MAX_IRQL @ 0x140705FE0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetRealDmaOperation @ 0x140709924 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfReadDmaCounter(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_MAX_IRQL();
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1, 80LL);
  return RealDmaOperation(a1);
}
