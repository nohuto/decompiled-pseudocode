/*
 * XREFs of KeContextToKframes @ 0x140182880
 * Callers:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiContinueEx @ 0x140020234 (KiContinueEx.c)
 *     KiContinuePreviousModeUser @ 0x140020448 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140124BE0 (KiRaiseException.c)
 *     KiRestoreProcessorState @ 0x14020ADAC (KiRestoreProcessorState.c)
 *     KeCopyContextToUch @ 0x14069AE44 (KeCopyContextToUch.c)
 *     KiRestoreUchFromUmsContext @ 0x14069B81C (KiRestoreUchFromUmsContext.c)
 * Callees:
 *     KxContextToKframes @ 0x140020C1C (KxContextToKframes.c)
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
