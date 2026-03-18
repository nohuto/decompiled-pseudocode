/*
 * XREFs of Endpoint_EvtEndpointCleanupCallback @ 0x1C0022170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C00264B4 (WPP_RECORDER_SF_ddqqq.c)
 *     UsbDevice_RemoveEndpointFromDeviceEndpointList @ 0x1C00316A4 (UsbDevice_RemoveEndpointFromDeviceEndpointList.c)
 *     Etw_EndpointDelete @ 0x1C0034144 (Etw_EndpointDelete.c)
 */

__int64 __fastcall Endpoint_EvtEndpointCleanupCallback(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  PIRP *v6; // rax
  struct _IO_WORKITEM *v7; // rcx
  __int64 v8; // rcx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0043188);
  result = *(_QWORD *)(v2 + 24);
  if ( result == a1 )
  {
    WPP_RECORDER_SF_ddqqq(
      *(_QWORD *)(*(_QWORD *)v2 + 64LL),
      *(_QWORD *)(v2 + 16),
      *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
      20);
    v4 = *(unsigned int *)(v2 + 144);
    if ( (_DWORD)v4 != 1 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( v2 == *(_QWORD *)(v5 + 8 * v4 + 168) )
        *(_QWORD *)(v5 + 8 * v4 + 168) = 0LL;
    }
    v6 = *(PIRP **)(v2 + 248);
    if ( v6 )
    {
      if ( *v6 )
      {
        IoFreeIrp(*v6);
        **(_QWORD **)(v2 + 248) = 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v2 + 248) + 144LL) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(*(_QWORD *)(v2 + 248) + 144LL) = 0LL;
      }
      ExFreePoolWithTag(*(PVOID *)(v2 + 248), 0x49434858u);
    }
    v7 = *(struct _IO_WORKITEM **)(v2 + 1256);
    if ( v7 )
    {
      IoFreeWorkItem(v7);
      *(_QWORD *)(v2 + 1256) = 0LL;
    }
    UsbDevice_RemoveEndpointFromDeviceEndpointList(*(_QWORD *)(v2 + 16), *(_QWORD *)(v2 + 24), v2 + 64);
    return Etw_EndpointDelete(v8, v2);
  }
  return result;
}
