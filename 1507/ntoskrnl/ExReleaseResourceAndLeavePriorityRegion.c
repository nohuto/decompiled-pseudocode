/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x1400C8960
 * Callers:
 *     VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14074C3B4 (VerifierExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ExReleaseResourceAndLeavePriorityRegion(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  ExpReleaseResourceForThreadLite(a1, (ULONG_PTR)KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v2) = 1;
  PsBoostThreadIoEx(CurrentThread, v2, 0LL, 0LL);
  result = (unsigned int)++CurrentThread->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result && !CurrentThread->SpecialApcDisable )
      return KiCheckForKernelApcDelivery(v3);
  }
  return result;
}
