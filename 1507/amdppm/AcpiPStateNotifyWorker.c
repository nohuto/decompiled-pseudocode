/*
 * XREFs of AcpiPStateNotifyWorker @ 0x1C0011340
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001980 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C0001BF8 (FireWmiEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C0010364 (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1C00126B0 (ProcLibCapChange.c)
 */

__int64 __fastcall AcpiPStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 248) & 0x70000000) != 0 && (int)AcpiEval_PPC(*(_QWORD *)(a1 + 64), &v6) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0009398,
      0LL);
    v3 = 1;
    ProcLibCapChange(v4, v6, *(unsigned int *)(v4 + 456), 100LL);
    ((void (__fastcall *)(__int64))qword_1C00096E0)(v4);
  }
  v6 = *(_DWORD *)(v4 + 408);
  ProcLibTraceProcessorSpecificEvent(v4, &PPM_ETW_NOTIFY_80, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 600), v4 + 408);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C0009398);
  return result;
}
