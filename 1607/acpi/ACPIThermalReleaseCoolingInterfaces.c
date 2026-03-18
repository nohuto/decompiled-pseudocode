/*
 * XREFs of ACPIThermalReleaseCoolingInterfaces @ 0x1C002ACE4
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004140 (ACPIDispatchIrp.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001EE60 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFanStopDevice @ 0x1C004E6A8 (ACPIFanStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C009A4A0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C00A07B0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C002880C (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0041FCC (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0042CB8 (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  KIRQL v4; // bp
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *i; // rsi
  _QWORD *v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 608);
  v4 = v2;
  *(_BYTE *)(a1 + 616) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 608) = 0LL;
    v6 = *v3;
    v7 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v7 != v3 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    for ( i = (_QWORD *)v3[2]; i != v3 + 2; qword_1C00738D8 = (__int64)v10 )
    {
      v9 = i - 2;
      i = (_QWORD *)*i;
      if ( *((_BYTE *)v9 + 52) )
      {
        if ( *((_BYTE *)v9 + 53) != 100 )
          AcpiDiagTracePassiveCoolingConstraint(v9[4], v9[5], 0LL);
      }
      else if ( *((_BYTE *)v9 + 55) )
      {
        AcpiDiagTraceActiveCoolingConstraint(v9[4], v9[5], 0LL, 0LL);
      }
      v9[5] = 0LL;
      v10 = v9 + 2;
      v11 = *v10;
      v12 = (_QWORD *)v10[1];
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = (_QWORD *)qword_1C00738D8;
      if ( *(__int64 **)qword_1C00738D8 != &AcpiThermalUnclaimedConstraintList )
        __fastfail(3u);
      *v10 = &AcpiThermalUnclaimedConstraintList;
      v10[1] = v13;
      *v13 = v10;
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
