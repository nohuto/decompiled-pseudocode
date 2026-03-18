/*
 * XREFs of AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0033BB8
 * Callers:
 *     AcpiDiagTraceAmlEvaluation @ 0x1C003311C (AcpiDiagTraceAmlEvaluation.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
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
