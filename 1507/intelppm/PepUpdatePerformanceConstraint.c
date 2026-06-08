/*
 * XREFs of PepUpdatePerformanceConstraint @ 0x1C0021830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     PepNotifyPerfConstraints @ 0x1C00063C4 (PepNotifyPerfConstraints.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001A290 (ProcLibTracePerfConstraintChange.c)
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
      qword_1C000D9C8,
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
    ((void (__fastcall *)(void *))qword_1C000DD10)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, *v5, v4[4]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000D9C8);
  }
}
