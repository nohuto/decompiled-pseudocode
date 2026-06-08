/*
 * XREFs of InitPepIdleStates @ 0x1C001916C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00140F8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00142F4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0019954 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0019B7C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0019CC0 (PepNotifyReportCStates.c)
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
          qword_1C00093B0,
          0LL);
        v4 = WdfDriverGlobals;
        *(_QWORD *)(a1 + 1080) = v6;
        *(_QWORD *)(a1 + 1072) = v7;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(v4, qword_1C00093B0);
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
