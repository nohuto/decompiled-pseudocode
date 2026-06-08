/*
 * XREFs of InitPepIdleStates @ 0x1C00206FC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0019B50 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0019D4C (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0020C00 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0020D44 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0020F6C (PepNotifyReportCStates.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  PIO_WORKITEM WorkItem; // rax
  int v3; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1104) = WorkItem;
  *(_BYTE *)(a1 + 1113) = 1;
  if ( WorkItem )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192),
      0LL);
    if ( (*(_DWORD *)(a1 + 248) & 0x300LL) != 0 )
      PepNotifyReportCStates(a1);
    v6 = 0LL;
    v5 = 0LL;
    v3 = -1073741823;
    if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
    {
      v3 = PepNotifyQueryProcessorIdleStatesV2(a1, &v5);
      if ( v3 >= 0 )
      {
LABEL_11:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000D9D0,
          0LL);
        *(_QWORD *)(a1 + 1088) = v5;
        *(_QWORD *)(a1 + 1080) = v6;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C000D9D0);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192));
        ProcLibTraceGetProcessorIdleStatesV2(a1, 0);
        ProcLibTraceGetProcessorIdleStates(a1, 0);
        return (unsigned int)v3;
      }
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
    if ( (*(_QWORD *)(a1 + 248) & 0x100000100LL) != 0 )
    {
      v3 = PepNotifyQueryProcessorIdleStates(a1, &v6);
      if ( v3 < 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFEFFFFFEFFuLL;
    }
    goto LABEL_11;
  }
  return (unsigned int)-1073741670;
}
