/*
 * XREFs of KeContextToKframes @ 0x140153EF0
 * Callers:
 *     KiRaiseException @ 0x140022668 (KiRaiseException.c)
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     KiContinueEx @ 0x14002AEF0 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x14002B108 (KiContinuePreviousModeUser.c)
 *     KiRestoreProcessorState @ 0x1401CBE58 (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x14061C2C0 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x14061CC98 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x14002DEA0 (KxContextToKframes.c)
 */

__int64 __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( (_BYTE)result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
