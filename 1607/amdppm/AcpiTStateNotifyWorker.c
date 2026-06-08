/*
 * XREFs of AcpiTStateNotifyWorker @ 0x1C00116B0
 * Callers:
 *     <none>
 * Callees:
 *     FireWmiEvent @ 0x1C00013CC (FireWmiEvent.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001ED0 (ProcLibTraceProcessorSpecificEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_TPC @ 0x1C00108E0 (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x1C0012990 (ProcLibCapChange.c)
 */

__int64 __fastcall AcpiTStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 248) & 0x3000000) != 0 && (int)AcpiEval_TPC(*(_QWORD *)(a1 + 64), &v6) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL);
    v3 = 1;
    ProcLibCapChange(v4, *(unsigned int *)(v4 + 416), v6, 100LL);
    ((void (__fastcall *)(__int64))qword_1C0009740)(v4);
  }
  v6 = *(_DWORD *)(v4 + 464);
  ProcLibTraceProcessorSpecificEvent(v4, &PPM_ETW_NOTIFY_82, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 640), v4 + 464);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C00093A8);
  return result;
}
