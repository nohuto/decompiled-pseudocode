/*
 * XREFs of AcpiDiagTracePassiveCoolingConstraint @ 0x1C0034968
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C001A708 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0021894 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C00349DC (AcpiDiagTraceThermalZoneRundown.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00409AC (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiThermalDestroyContraints @ 0x1C0040D7C (AcpiThermalDestroyContraints.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0034038 (AcpiDiagTraceConstraintEvent.c)
 */

void __fastcall AcpiDiagTracePassiveCoolingConstraint(__int64 a1, __int64 a2, char a3, char a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-68h] BYREF
  char *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]
  char v9; // [rsp+B8h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v4 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_CHANGE;
  v7 = 1;
  if ( a3 )
    v4 = (const EVENT_DESCRIPTOR *)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN;
  v8 = 0;
  AcpiDiagTraceConstraintEvent(a1, a2, v4, (int)&ACPI_ETW_EVENT_PASSIVE_CONSTRAINT_RUNDOWN, &v5);
}
