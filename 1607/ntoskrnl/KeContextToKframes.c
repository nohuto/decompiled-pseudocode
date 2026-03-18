/*
 * XREFs of KeContextToKframes @ 0x14015D630
 * Callers:
 *     KiRestoreProcessorState @ 0x140082B28 (KiRestoreProcessorState.c)
 *     KiContinueEx @ 0x1400CC8AC (KiContinueEx.c)
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1400F6624 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1401100A0 (KiRaiseException.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KeCopyContextToUch @ 0x1406515B8 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x140651F90 (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140081D84 (KxContextToKframes.c)
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
