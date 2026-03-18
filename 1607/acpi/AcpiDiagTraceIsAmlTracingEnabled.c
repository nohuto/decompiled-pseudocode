/*
 * XREFs of AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0042C98
 * Callers:
 *     AcpiDiagTraceAmlEvaluation @ 0x1C00421FC (AcpiDiagTraceAmlEvaluation.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
 * Callees:
 *     <none>
 */

BOOLEAN AcpiDiagTraceIsAmlTracingEnabled()
{
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
    return EtwEventEnabled(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_AML_METHOD_TRACE);
  else
    return 0;
}
