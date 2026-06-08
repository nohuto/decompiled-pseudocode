/*
 * XREFs of AcpiPStateNotifyWorker @ 0x1C001D9A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003A68 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C00047A8 (FireWmiEvent.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x1C001457C (AcpiEval_PPC.c)
 */

__int64 __fastcall AcpiPStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 248) & 0x70000000) != 0 && (int)AcpiEval_PPC(*(_QWORD *)(a1 + 64), (unsigned int *)&v6) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000D9C8,
      0LL);
    v3 = 1;
    ProcLibCapChange(v4, v6, *(_DWORD *)(v4 + 456), 0x64u);
    ((void (__fastcall *)(__int64))qword_1C000DD10)(v4);
  }
  v6 = *(_DWORD *)(v4 + 408);
  ProcLibTraceProcessorSpecificEvent(v4, &PPM_ETW_NOTIFY_80, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 600), v4 + 408);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C000D9C8);
  return result;
}
