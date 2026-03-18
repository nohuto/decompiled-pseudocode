/*
 * XREFs of AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0034948
 * Callers:
 *     AcpiDiagTraceAmlEvaluation @ 0x1C0033EAC (AcpiDiagTraceAmlEvaluation.c)
 *     FreeContext @ 0x1C00465D4 (FreeContext.c)
 * Callees:
 *     <none>
 */

BOOLEAN AcpiDiagTraceIsAmlTracingEnabled()
{
  if ( AcpiDiagHandle )
    return EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE);
  else
    return 0;
}
