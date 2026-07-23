/*
 * XREFs of KeContextToKframes @ 0x14015DBA0
 * Callers:
 *     KiRestoreProcessorState @ 0x1400837A8 (KiRestoreProcessorState.c)
 *     KiContinueEx @ 0x1400CA74C (KiContinueEx.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1400F4474 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KeCopyContextToUch @ 0x14065169C (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x140652074 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x1400847BC (KxContextToKframes.c)
 */

char __fastcall KeContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char result; // al
  int CurrentIrql; // [rsp+28h] [rbp-B0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    __writecr8(1uLL);
  result = KxContextToKframes(a1, a2, a3, a4, a5);
  if ( result )
    _fxrstor((void *)(a3 + 256));
  if ( !CurrentIrql )
  {
    result = 0;
    __writecr8(0LL);
  }
  return result;
}
