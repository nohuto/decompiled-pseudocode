/*
 * XREFs of KiEnableXSave @ 0x1403F6C7C
 * Callers:
 *     KiRestoreXSaveSupport @ 0x1403F616C (KiRestoreXSaveSupport.c)
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 *     KiConfigureDynamicProcessor @ 0x140401B6C (KiConfigureDynamicProcessor.c)
 * Callees:
 *     <none>
 */

_CONTEXT *KiEnableXSave()
{
  unsigned __int64 v0; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _CONTEXT *result; // rax

  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v0 = __readcr4();
    __writecr4(v0 | 0x40000);
    __asm { xsetbv }
    if ( MEMORY[0xFFFFF780000005F0] )
      __writemsr(0xDA0u, MEMORY[0xFFFFF780000005F0]);
    CurrentPrcb = KeGetCurrentPrcb();
    result = &CurrentPrcb->ProcessorState.ContextFrame;
    if ( CurrentPrcb->Context != &CurrentPrcb->ProcessorState.ContextFrame )
      CurrentPrcb->ContextFlagsInit |= 0x100040u;
  }
  return result;
}
