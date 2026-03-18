/*
 * XREFs of ACPIThermalReevaluateConstraintsWorker @ 0x1C0022130
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x1C0034274 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x1C00344C0 (AcpiDiagTraceDevicePassiveCooling.c)
 */

void __fastcall ACPIThermalReevaluateConstraintsWorker(ULONG_PTR IoObject, _BYTE *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 DeviceExtension; // r15
  KIRQL v5; // bp
  __int64 **v6; // r14
  __int64 *v7; // rax
  unsigned __int8 v8; // si
  char v9; // di
  __int64 v10; // rdx
  struct _KEVENT *v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(IoObject);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( Context[44] )
  {
    v6 = (__int64 **)(Context + 16);
    do
    {
      v7 = *v6;
      v8 = 100;
      Context[44] = 0;
      v9 = 0;
      while ( v7 != (__int64 *)v6 )
      {
        if ( *((_BYTE *)v7 + 36) )
        {
          if ( *((_BYTE *)v7 + 37) < v8 )
            v8 = *((_BYTE *)v7 + 37);
        }
        else if ( *((_BYTE *)v7 + 39) )
        {
          v9 = 1;
        }
        v7 = (__int64 *)*v7;
      }
      KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
      if ( v8 != Context[42] )
      {
        v12 = Context[40] == 0;
        Context[42] = v8;
        if ( !v12 )
        {
          LOBYTE(v10) = v8;
          AcpiDiagTraceDevicePassiveCooling(DeviceExtension, v10);
          LOBYTE(v13) = v8;
          PoSetThermalPassiveCooling(*((_QWORD *)Context + 8), v13);
        }
      }
      if ( v9 != Context[43] )
      {
        v12 = Context[41] == 0;
        Context[43] = v9;
        if ( !v12 )
        {
          LOBYTE(v10) = v9;
          AcpiDiagTraceDeviceActiveCooling(DeviceExtension, v10);
          LOBYTE(v14) = v9;
          PoSetThermalActiveCooling(*((_QWORD *)Context + 8), v14);
        }
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    }
    while ( Context[44] );
  }
  v11 = (struct _KEVENT *)*((_QWORD *)Context + 7);
  Context[45] = 0;
  if ( v11 )
    KeSetEvent(v11, 0, 0);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
}
