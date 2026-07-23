/*
 * XREFs of KiRestoreProcessorState @ 0x1400837A8
 * Callers:
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 * Callees:
 *     RtlXRestore @ 0x140083A2C (RtlXRestore.c)
 *     KeContextToKframes @ 0x14015DBA0 (KeContextToKframes.c)
 */

__int64 __fastcall KiRestoreProcessorState(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _CONTEXT *Context; // r10
  unsigned int ContextFlags; // r9d
  char v7; // r11

  CurrentPrcb = KeGetCurrentPrcb();
  Context = CurrentPrcb->Context;
  ContextFlags = Context->ContextFlags;
  v7 = Context->SegCs & 1;
  if ( !v7
    && ((ContextFlags & 0x100008) == 1048584 || (ContextFlags & 0x100040) == 1048640)
    && (ContextFlags & 0x100040) == 0x100040
    && (MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC) != 0 )
  {
    RtlXRestore((char *)&Context->1 + SLODWORD(Context[1].P3Home) + 464, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC);
  }
  KeContextToKframes(a1, a2, (_DWORD)Context, ContextFlags, v7);
  return KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
}
