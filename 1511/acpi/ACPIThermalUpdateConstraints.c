/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x1C001A708
 * Callers:
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0021920 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0033C7C (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0033D08 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0034968 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r9
  KIRQL v3; // r15
  __int64 *i; // rbx
  char v5; // bp
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // di
  __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 192);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v5 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      if ( *((unsigned __int8 *)i + 53) != *(_DWORD *)(v1 + 92) )
      {
        v7 = i[5];
        v5 = 1;
        *((_BYTE *)i + 53) = *(_BYTE *)(v1 + 92);
        if ( v7 )
          AcpiDiagTracePassiveCoolingConstraint(i[4], v7, 0LL);
      }
    }
    else
    {
      v8 = (unsigned int)*((unsigned __int8 *)i + 54) >= *(_DWORD *)(v1 + 88);
      if ( *((_BYTE *)i + 55) )
      {
        if ( (unsigned int)*((unsigned __int8 *)i + 54) >= *(_DWORD *)(v1 + 88) )
          goto LABEL_5;
      }
      else if ( (unsigned int)*((unsigned __int8 *)i + 54) < *(_DWORD *)(v1 + 88) )
      {
        goto LABEL_5;
      }
      v9 = i[5];
      v5 = 1;
      *((_BYTE *)i + 55) = v8;
      if ( v9 )
      {
        LOBYTE(v2) = v8;
        AcpiDiagTraceActiveCoolingConstraint(i[4], v9, 0LL, v2);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v8);
      }
    }
LABEL_5:
    v6 = i[5];
    if ( v6 )
    {
      if ( v5 )
        ACPIThermalReevaluateConstraints(*(PVOID *)(v6 + 600));
    }
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
}
