/*
 * XREFs of PepUpdatePerformanceConstraintWorker @ 0x1C001C7D0
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfConstraints @ 0x1C0004D84 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0012990 (ProcLibCapChange.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0014C1C (ProcLibTracePerfConstraintChange.c)
 */

void __fastcall PepUpdatePerformanceConstraintWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rdi
  int *v3; // rsi
  int *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = (int *)*((_QWORD *)DeviceExtension + 143);
  if ( v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 281, 0);
    v4 = v3 + 5;
    PepNotifyPerfConstraints((__int64)DeviceExtension, v3 + 5, v3 + 4);
    v5 = *(_QWORD *)v3;
    v6 = *(_DWORD *)(*(_QWORD *)v3 + 12LL);
    if ( v3[5] > v6 )
      *v4 = v6;
    v7 = *(_DWORD *)(v5 + 20);
    if ( *v4 < v7 )
      *v4 = v7;
    v8 = (unsigned int)(100 * *v4) / *(_DWORD *)(v5 + 12);
    v3[6] = v8;
    ProcLibCapChange(
      (__int64)DeviceExtension,
      *((_DWORD *)DeviceExtension + 104),
      *((_DWORD *)DeviceExtension + 116),
      v8);
    ((void (__fastcall *)(void *))qword_1C0009740)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, *v4, v3[4]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00093A8);
  }
}
