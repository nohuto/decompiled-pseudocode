/*
 * XREFs of KiSaveProcessorState @ 0x140083858
 * Callers:
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 *     KxNmiInterrupt @ 0x14016A0C0 (KxNmiInterrupt.c)
 * Callees:
 *     KiSaveNpxState @ 0x140083AAC (KiSaveNpxState.c)
 *     KeContextFromKframes @ 0x1400F22A0 (KeContextFromKframes.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _CONTEXT *Context; // rbx
  unsigned int ContextFlagsInit; // edx

  CurrentPrcb = KeGetCurrentPrcb();
  Context = CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  Context->ContextFlags = ContextFlagsInit;
  if ( (*(_BYTE *)(a1 + 368) & 1) == 0
    && ((ContextFlagsInit & 0x100040) == 1048640 || (ContextFlagsInit & 0x100008) == 1048584) )
  {
    KiSaveNpxState(Context);
  }
  KeContextFromKframes(a1, a2, Context);
  return KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
}
