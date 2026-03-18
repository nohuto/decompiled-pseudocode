/*
 * XREFs of AcpiDiagTracePassiveCoolingConstraint @ 0x1C0042CB8
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C0009960 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0028780 (ACPIThermalAssocaiteConstraint.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C002ACE4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x1C0042D2C (AcpiDiagTraceThermalZoneRundown.c)
 *     AcpiThermalDestroyContraints @ 0x1C0057550 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     AcpiDiagTraceConstraintEvent @ 0x1C0042388 (AcpiDiagTraceConstraintEvent.c)
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
