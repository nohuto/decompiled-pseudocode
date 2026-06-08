/*
 * XREFs of InitPepIdleStates @ 0x1C0020A7C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0019ED4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001A0D0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0020F80 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00210C4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00212EC (PepNotifyReportCStates.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  PIO_WORKITEM WorkItem; // rax
  int v3; // edi
  PWDF_DRIVER_GLOBALS v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1096) = WorkItem;
  *(_BYTE *)(a1 + 1105) = 1;
  if ( WorkItem )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192),
      0LL);
    if ( (*(_DWORD *)(a1 + 248) & 0x300LL) != 0 )
      PepNotifyReportCStates(a1);
    v7 = 0LL;
    v6 = 0LL;
    v3 = -1073741823;
    if ( (*(_QWORD *)(a1 + 248) & 0x200000200LL) != 0 )
    {
      v3 = PepNotifyQueryProcessorIdleStatesV2(a1, &v6);
      if ( v3 >= 0 )
      {
LABEL_11:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000DD10,
          0LL);
        v4 = WdfDriverGlobals;
        *(_QWORD *)(a1 + 1080) = v6;
        *(_QWORD *)(a1 + 1072) = v7;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(v4, qword_1C000DD10);
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
      v3 = PepNotifyQueryProcessorIdleStates(a1, &v7);
      if ( v3 < 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFEFFFFFEFFuLL;
    }
    goto LABEL_11;
  }
  return (unsigned int)-1073741670;
}
