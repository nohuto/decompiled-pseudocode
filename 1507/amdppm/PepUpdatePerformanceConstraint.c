/*
 * XREFs of PepUpdatePerformanceConstraint @ 0x1C001C2F0
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfConstraints @ 0x1C0004C04 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C00126B0 (ProcLibCapChange.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0014928 (ProcLibTracePerfConstraintChange.c)
 */

void __fastcall PepUpdatePerformanceConstraint(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rsi
  int *v4; // rdi
  int *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax

  IoFreeWorkItem(Context);
  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (int *)*((_QWORD *)DeviceExtension + 141);
  if ( v4 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0009398,
      0LL);
    v5 = v4 + 5;
    PepNotifyPerfConstraints((__int64)DeviceExtension, v4 + 5, v4 + 4);
    v6 = *(_QWORD *)v4;
    v7 = *(_DWORD *)(*(_QWORD *)v4 + 4LL);
    if ( v4[5] > v7 )
      *v5 = v7;
    v8 = *(_DWORD *)(v6 + 12);
    if ( *v5 < v8 )
      *v5 = v8;
    v9 = (unsigned int)(100 * *v5) / *(_DWORD *)(v6 + 4);
    v4[6] = v9;
    ProcLibCapChange(
      (__int64)DeviceExtension,
      *((_DWORD *)DeviceExtension + 102),
      *((_DWORD *)DeviceExtension + 114),
      v9);
    ((void (__fastcall *)(void *))qword_1C00096E0)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, *v5, v4[4]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0009398);
  }
}
