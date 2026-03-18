/*
 * XREFs of ReferenceDwmProcess @ 0x1C0037440
 * Callers:
 *     OpenDwmHandle @ 0x1C0037370 (OpenDwmHandle.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C00730F4 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     UserReferenceDwmProcess @ 0x1C007D600 (UserReferenceDwmProcess.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C00D5DE0 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 * Callees:
 *     <none>
 */

PVOID ReferenceDwmProcess()
{
  PVOID v0; // rbx

  v0 = g_pepDwm;
  if ( g_pepDwm )
    ObReferenceObjectByPointer(g_pepDwm, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  return v0;
}
