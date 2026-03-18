/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x1C0021108
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C001A490 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C002107C (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C0040EFC (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiThermalDestroyContraints @ 0x1C00412A8 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIThermalReevaluateConstraints(PVOID Context)
{
  bool v1; // zf

  v1 = *((_BYTE *)Context + 45) == 0;
  *((_BYTE *)Context + 44) = 1;
  if ( v1 )
  {
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 6), ACPIThermalReevaluateConstraintsWorker, DelayedWorkQueue, Context);
    *((_BYTE *)Context + 45) = 1;
  }
}
