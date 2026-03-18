/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C00409AC
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001000 (ACPIDispatchIrp.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFanStopDevice @ 0x1C003B8F0 (ACPIFanStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0079850 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C007EE90 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0021920 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0033C7C (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0034968 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  KIRQL v4; // bp
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *i; // rsi
  _QWORD *v8; // rbx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 **v11; // rax
  __int64 **v12; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 600);
  v4 = v2;
  *(_BYTE *)(a1 + 608) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 600) = 0LL;
    v5 = *v3;
    v6 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v6 != v3 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    for ( i = (_QWORD *)v3[2]; i != v3 + 2; qword_1C00594F8 = (__int64)v9 )
    {
      v8 = i - 2;
      i = (_QWORD *)*i;
      if ( *((_BYTE *)v8 + 52) )
      {
        if ( *((_BYTE *)v8 + 53) != 100 )
          AcpiDiagTracePassiveCoolingConstraint(v8[4], v8[5], 0, 100);
      }
      else if ( *((_BYTE *)v8 + 55) )
      {
        AcpiDiagTraceActiveCoolingConstraint(v8[4], v8[5], 0, 0);
      }
      v8[5] = 0LL;
      v9 = v8 + 2;
      v10 = *v9;
      v11 = (__int64 **)v9[1];
      if ( *(__int64 **)(*v9 + 8) != v9 || *v11 != v9 )
        __fastfail(3u);
      *v11 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      v12 = (__int64 **)qword_1C00594F8;
      *v9 = (__int64)&AcpiThermalUnclaimedConstraintList;
      v9[1] = (__int64)v12;
      if ( *v12 != &AcpiThermalUnclaimedConstraintList )
        __fastfail(3u);
      *v12 = v9;
    }
    ACPIThermalReevaluateConstraints(v3);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3[7] = &Event;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PoDeleteThermalRequest(v3[8]);
    IoFreeWorkItem((PIO_WORKITEM)v3[6]);
    ExFreePoolWithTag(v3, 0x54706341u);
  }
  else
  {
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  }
  return 0LL;
}
