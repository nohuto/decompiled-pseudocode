/*
 * XREFs of VfGetDmaAlignment @ 0x1407075A0
 * Callers:
 *     <none>
 * Callees:
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
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
