/*
 * XREFs of ReferenceDwmProcess @ 0x1C001D760
 * Callers:
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C003BBF0 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     UserReferenceDwmProcess @ 0x1C0081200 (UserReferenceDwmProcess.c)
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
