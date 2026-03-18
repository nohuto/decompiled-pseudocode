/*
 * XREFs of VfGetDmaAlignment @ 0x14073BE8C
 * Callers:
 *     <none>
 * Callees:
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetDmaAlignment(__int64 a1)
{
  __int64 (__fastcall *RealDmaOperation)(__int64); // rax

  VF_ASSERT_IRQL(0);
  RealDmaOperation = (__int64 (__fastcall *)(__int64))ViGetRealDmaOperation(a1, 72LL);
  if ( RealDmaOperation )
    return RealDmaOperation(a1);
  else
    return 1LL;
}
