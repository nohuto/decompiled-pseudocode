/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14003F790
 * Callers:
 *     VerifierExReleaseResourceAndLeavePriorityRegion @ 0x1406C9768 (VerifierExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
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
